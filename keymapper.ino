#include <avr/pgmspace.h>

#include <avrpins.h>
#include <max3421e.h>
#include <usbhost.h>
#include <usb_ch9.h>
#include <Usb.h>
#include <usbhub.h>
#include <address.h>
#include <hidboot.h>

#include <printhex.h>
#include <message.h>
#include <hexdump.h>
#include <parsetools.h>

#include "keymapper_game.h"

//#define DEBUG
#define modeLED 13




// function definitions
bool HandleReservedKeystrokes(HID *hid, uint8_t *buf);
void play_word_game(void);




// variable definitions
typedef enum 
{
    qwerty=0, 
    tarmak1,
    tarmak2,
    tarmak3,
    tarmak4,
    colemak,
    dvorak
} KeyboardLayout;

// Keymap based on the scancodes from 4 to 57, refer to the HID usage table on the meaning of each element
PROGMEM prog_uint8_t qwertyKeymap[] = {4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57};
PROGMEM prog_uint8_t tarmak1Keymap[] = {4, 5, 6, 7, 13, 9, 10, 11, 12, 17, 8, 15, 16, 14, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 42};
PROGMEM prog_uint8_t tarmak2Keymap[] = {4, 5, 6, 7, 9, 23, 13, 11, 12, 17, 8, 15, 16, 14, 18, 19, 20, 21, 22, 10, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 42};
PROGMEM prog_uint8_t tarmak3Keymap[] = {4, 5, 6, 7, 9, 23, 51, 11, 12, 17, 8, 15, 16, 14, 28, 19, 20, 21, 22, 10, 24, 25, 26, 27, 13, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 18, 52, 53, 54, 55, 56, 42};
PROGMEM prog_uint8_t tarmak4Keymap[] = {4, 5, 6, 7, 9, 23, 51, 11, 24, 17, 8, 12, 16, 14, 28, 19, 20, 21, 22, 10, 15, 25, 26, 27, 13, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 18, 52, 53, 54, 55, 56, 42};
PROGMEM prog_uint8_t colemakKeymap[] = {4, 5, 6, 22, 9, 23, 7, 11, 24, 17, 8, 12, 16, 14, 28, 51, 20, 19, 21, 10, 15, 25, 26, 27, 13, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 18, 52, 53, 54, 55, 56, 42};

const uint8_t *Keymap[] =
{   
    qwertyKeymap,
    tarmak1Keymap,
    tarmak2Keymap,
    tarmak3Keymap,
    tarmak4Keymap,
    colemakKeymap
};

// global variables
//uint32_t ledBlinkTime = millis();
//uint16_t ledBlinkDelay = 500;
//bool ledStatus = false;
KeyboardLayout CurrentLayout = qwerty;
uint8_t KeyBuffer[8] = {0,0,0,0,0,0,0,0};

class KbdRptParser : public KeyboardReportParser
{
protected:
    virtual void Parse(HID *hid, bool is_rpt_id, uint8_t len, uint8_t *buf);
};


// *******************************************************************************************
// Parse
// *******************************************************************************************

void KbdRptParser::Parse(HID *hid, bool is_rpt_id, uint8_t len, uint8_t *buf)
{
	// On error - return
	if (buf[2] == 1)
		return;

    // for (uint8_t i=0; i<8; i++)
    // {
        // PrintHex(buf[i]);
        // Serial.print(" ");
    // }
    // Serial.println("");

    KeyBuffer[0] = buf[0];
    
    if (!HandleReservedKeystrokes(hid, buf))
    {
        // remap all keys according to the existing keymap
        for (uint8_t i=2; i<8; i++)
        {
			// handle special case of Shift-CAPSLOCK to be ignored by the remapper
			if (buf[i] == KEY_CAPS_LOCK && buf[0] & 0x22)
				KeyBuffer[i] = buf[i];
			else
			{
				// print the key based on the current layout
				if (buf[i]>=4 && buf[i]-4 < 54)        	// transpose of 4 becoz our array starts from 0 but A is 4
														// limit check to 57, which is the last mappable key (CAPSLOCK)
					KeyBuffer[i] = pgm_read_byte(Keymap[CurrentLayout]+buf[i]-4);
				else
					KeyBuffer[i] = buf[i];
			}
			
			// check locking keys
			HandleLockingKeys(hid, KeyBuffer[i]);
        }
        
        // send out key press
        HID_SendReport(2,KeyBuffer,sizeof(KeyBuffer));

        // for (uint8_t i=0; i<8; i++)
        // {
            // PrintHex(KeyBuffer[i]);
            // Serial.print(" ");
        // }
        // Serial.println("");
        // Serial.println("");
        
    }

};


bool HandleReservedKeystrokes(HID *hid, uint8_t *buf) // return true if it is a reserved keystroke
{
    uint8_t mod = buf[0];       // read the modifier byte
    
    uint8_t numKeysPressed = 0;
    uint8_t keyPosition = 0;
    
    // check that there is only 1 single key that is pressed
    for (uint8_t i=2; i<8; i++) if (buf[i] > 0) {
        numKeysPressed++;
        keyPosition = i;
    }
	
    if (numKeysPressed != 1) return false;	// only allow single keypress for reserved keystrokes (besides modifiers)
    
    
    // check if we are changing layouts
    if ((mod & 0x22) && (mod & 0x11))  {        // Shift-Alt keystrokes
        switch (buf[keyPosition]) {
            case 0x27:    // 0
                CurrentLayout = qwerty;
                digitalWrite(modeLED, LOW);
                return true;

            case 0x1e:    // 1
                CurrentLayout = tarmak1;
                digitalWrite(modeLED, HIGH);
                return true;

            case 0x1f:    // 2
                CurrentLayout = tarmak2;
                digitalWrite(modeLED, HIGH);
                return true;

            case 0x20:    // 3
                CurrentLayout = tarmak3;
                digitalWrite(modeLED, HIGH);
                return true;

            case 0x21:    // 4
                CurrentLayout = tarmak4;
                digitalWrite(modeLED, HIGH);
                return true;

            case 0x22:    // 5
                CurrentLayout = colemak;
                digitalWrite(modeLED, HIGH);
                return true;

            case 0x2c:    // space bar
                play_word_game();
                return true;
        }
    }
	
    return false;

}


// *******************************************************************************************
// WORD GAME!!!
// *******************************************************************************************

void play_word_game(void)
{
    char buffer[GAME_MAXWORDLENGTH];
    char priorityAlphabets[10];
    char *instrPtr;

    uint16_t randNum;

    switch (CurrentLayout) {
        case tarmak1:
            strcpy (priorityAlphabets, "nek");
            break;
        case tarmak2:
            strcpy (priorityAlphabets, "ftg");
            break;
        case tarmak3:
            strcpy (priorityAlphabets, "jyo");
            break;
        case tarmak4:
            strcpy (priorityAlphabets, "lui");
            break;
        case colemak:
            strcpy (priorityAlphabets, "rspd");
            break;
        default:
            strcpy (priorityAlphabets, "");
    }

    Keyboard.print( "Word game! Letters being prioritised: " );
    Keyboard.println( priorityAlphabets );

    for (int i = 0; i < 15; i++)  {
        if (priorityAlphabets[0] != 0) {
            instrPtr = NULL;
            while (instrPtr == NULL) {
                randNum = random(GAME_NUMWORDS);
                strcpy_P(buffer, (char*)pgm_read_word(&(game_word_list[randNum]))); 
                instrPtr = strpbrk (buffer, priorityAlphabets);
            }
        } 
        else {
            randNum = random(GAME_NUMWORDS);
            strcpy_P(buffer, (char*)pgm_read_word(&(game_word_list[randNum]))); 
        }
        
        Keyboard.print( buffer );
        Keyboard.print( " " );
    }
    Keyboard.println( "" );
}
  

  
  
  
  
USB     Usb;
//USBHub     Hub(&Usb);
HIDBoot<HID_PROTOCOL_KEYBOARD>    Keyboard2(&Usb);

uint32_t next_time;

KbdRptParser Prs;


  
  
  
  
void setup()
{
    randomSeed(analogRead(0));

    // initialize the digital pin as an output.
    pinMode(modeLED, OUTPUT);  

    Keyboard.begin();

#ifdef DEBUG
    Serial.begin( 115200 );
    Serial.println("Start");
#endif

    if (Usb.Init() == -1)

#ifdef DEBUG
    Serial.println("OSC did not start.");
#else
    delay( 1 );
#endif

    delay( 200 );

    next_time = millis() + 5000;

    Keyboard2.SetReportParser(0, (HIDReportParser*)&Prs);
}

void loop()
{
    Usb.Task();
    
}

