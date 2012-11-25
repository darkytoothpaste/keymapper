#include <avr/pgmspace.h>

#include <avrpins.h>
#include <max3421e.h>
#include <usbhost.h>
#include <usb_ch9.h>
#include <Usb.h>
#include <usbhub.h>
#include <avr/pgmspace.h>
#include <address.h>
#include <hidboot.h>

#include <printhex.h>
#include <message.h>
#include <hexdump.h>
#include <parsetools.h>

#include "keymapper_game.h"

//#define DEBUG


#define modeLED 13

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

PROGMEM prog_uint8_t qwertyKeymap[] = {4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57};
PROGMEM prog_uint8_t tarmak1Keymap[] = {4, 5, 6, 7, 13, 9, 10, 11, 12, 17, 8, 15, 16, 14, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57};
PROGMEM prog_uint8_t tarmak2Keymap[] = {4, 5, 6, 7, 9, 23, 13, 11, 12, 17, 8, 15, 16, 14, 18, 19, 20, 21, 22, 10, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57};
PROGMEM prog_uint8_t tarmak3Keymap[] = {4, 5, 6, 7, 9, 23, 51, 11, 12, 17, 8, 15, 16, 14, 28, 19, 20, 21, 22, 10, 24, 25, 26, 27, 13, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 18, 52, 53, 54, 55, 56, 57};
PROGMEM prog_uint8_t tarmak4Keymap[] = {4, 5, 6, 7, 9, 23, 51, 11, 24, 17, 8, 12, 16, 14, 28, 19, 20, 21, 22, 10, 15, 25, 26, 27, 13, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 18, 52, 53, 54, 55, 56, 57};
PROGMEM prog_uint8_t colemakKeymap[] = {4, 5, 6, 22, 9, 23, 7, 11, 24, 17, 8, 12, 16, 14, 28, 51, 20, 19, 21, 10, 15, 25, 26, 27, 13, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 18, 52, 53, 54, 55, 56, 57};

const uint8_t *keymap[] =
{   
  qwertyKeymap,
  tarmak1Keymap,
  tarmak2Keymap,
  tarmak3Keymap,
  tarmak4Keymap,
  colemakKeymap
};


uint8_t keyBuffer[8] = {0,0,0,0,0,0,0,0};
//uint32_t ledBlinkTime = millis();
//uint16_t ledBlinkDelay = 500;
//bool ledStatus = false;
KeyboardLayout currentLayout = qwerty;


class KbdRptParser : public KeyboardReportParser
{
        void PrintKey(uint8_t mod, uint8_t key);
        
protected:
	virtual void OnKeyDown	(uint8_t mod, uint8_t key);
	virtual void OnKeyUp	(uint8_t mod, uint8_t key);
};

void KbdRptParser::PrintKey(uint8_t m, uint8_t key)	
{
    
    MODIFIERKEYS mod;
    *((uint8_t*)&mod) = m;
    
    Serial.print((mod.bmLeftCtrl   == 1) ? "C" : " ");
    Serial.print((mod.bmLeftShift  == 1) ? "S" : " ");
    Serial.print((mod.bmLeftAlt    == 1) ? "A" : " ");
    Serial.print((mod.bmLeftGUI    == 1) ? "G" : " ");
    
    Serial.print(" >");
    Serial.print (key);
    Serial.print (" : ");
    PrintHex<uint8_t>(key);
    Serial.print("< ");

    Serial.print((mod.bmRightCtrl   == 1) ? "C" : " ");
    Serial.print((mod.bmRightShift  == 1) ? "S" : " ");
    Serial.print((mod.bmRightAlt    == 1) ? "A" : " ");
    Serial.println((mod.bmRightGUI    == 1) ? "G" : " ");

};

void KbdRptParser::OnKeyDown(uint8_t mod, uint8_t key)	
{

#ifdef DEBUG
    Serial.print("DN ");
    PrintKey(mod, key);

#endif
	
	// check if we are changing layouts
    if ((mod & 0x22) && (mod & 0x11))  {
        switch (key) {
            case 0x27:    // 0
                currentLayout = qwerty;
                digitalWrite(modeLED, LOW);

#ifdef DEBUG				
                Serial.print("Current layout: ");
                Serial.println(currentLayout);
                
				for (uint8_t i=0; i<54; i++)
					Serial.println(pgm_read_byte(keymap[currentLayout]+i));
#endif
					break;

			case 0x1e:    // 1
                currentLayout = tarmak1;
                digitalWrite(modeLED, HIGH);
                break;

			case 0x1f:    // 2
                currentLayout = tarmak2;
                digitalWrite(modeLED, HIGH);
                break;

			case 0x20:    // 3
                currentLayout = tarmak3;
                digitalWrite(modeLED, HIGH);
                break;

			case 0x21:    // 4
                currentLayout = tarmak4;
                digitalWrite(modeLED, HIGH);
                break;

			case 0x22:    // 5
                currentLayout = colemak;
                digitalWrite(modeLED, HIGH);
                break;


			case 0x2c:    // space bar
                play_word_game();
                break;
        }
    } 
	else
	{
		// print the key based on the current layout
		if (key-4 < 54)		// transpose of 4 becoz our array starts from 0 but A is 4
							// limit check to 57, which is the last mappable key (CAPSLOCK)
			key = pgm_read_byte(keymap[currentLayout]+key-4);
	
		keyBuffer[0] = mod;
		keyBuffer[2] = key;
		
		HID_SendReport(2,keyBuffer,sizeof(keyBuffer));    
	}
}

void KbdRptParser::OnKeyUp(uint8_t mod, uint8_t key)	
{
#ifdef DEBUG
    Serial.print("UP ");
    PrintKey(mod, key);
#endif
    
    keyBuffer[0] = 0;
    keyBuffer[2] = 0;
       
    HID_SendReport(2,keyBuffer,sizeof(keyBuffer));

}


USB     Usb;
//USBHub     Hub(&Usb);
HIDBoot<HID_PROTOCOL_KEYBOARD>    Keyboard2(&Usb);

uint32_t next_time;

KbdRptParser Prs;


// *******************************
// **** 	WORD GAME!!!       ***
// *******************************

void play_word_game()
{
  char buffer[GAME_MAXWORDLENGTH];
  char priorityAlphabets[10];
  char *instrPtr;
  
  uint16_t randNum;

  switch (currentLayout) {
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

