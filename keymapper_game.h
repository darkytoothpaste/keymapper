#include <avr/pgmspace.h>

#define GAME_NUMWORDS 719
#define GAME_MAXWORDLENGTH 8	// remember to add 1 char more than the longest word to cater to the NULL!!

prog_char string_1[] PROGMEM = "abl";
prog_char string_2[] PROGMEM = "able";
prog_char string_3[] PROGMEM = "about";
prog_char string_4[] PROGMEM = "above";
prog_char string_5[] PROGMEM = "ack";
prog_char string_6[] PROGMEM = "act";
prog_char string_7[] PROGMEM = "ad";
prog_char string_8[] PROGMEM = "add";
prog_char string_9[] PROGMEM = "afraid";
prog_char string_10[] PROGMEM = "after";
prog_char string_11[] PROGMEM = "ag";
prog_char string_12[] PROGMEM = "again";
prog_char string_13[] PROGMEM = "against";
prog_char string_14[] PROGMEM = "age";
prog_char string_15[] PROGMEM = "ago";
prog_char string_16[] PROGMEM = "agree";
prog_char string_17[] PROGMEM = "ai";
prog_char string_18[] PROGMEM = "ail";
prog_char string_19[] PROGMEM = "ain";
prog_char string_20[] PROGMEM = "air";
prog_char string_21[] PROGMEM = "al";
prog_char string_22[] PROGMEM = "ali";
prog_char string_23[] PROGMEM = "all";
prog_char string_24[] PROGMEM = "allow";
prog_char string_25[] PROGMEM = "als";
prog_char string_26[] PROGMEM = "also";
prog_char string_27[] PROGMEM = "always";
prog_char string_28[] PROGMEM = "ame";
prog_char string_29[] PROGMEM = "among";
prog_char string_30[] PROGMEM = "an";
prog_char string_31[] PROGMEM = "ana";
prog_char string_32[] PROGMEM = "anc";
prog_char string_33[] PROGMEM = "and";
prog_char string_34[] PROGMEM = "answer";
prog_char string_35[] PROGMEM = "ant";
prog_char string_36[] PROGMEM = "any";
prog_char string_37[] PROGMEM = "ap";
prog_char string_38[] PROGMEM = "appear";
prog_char string_39[] PROGMEM = "ar";
prog_char string_40[] PROGMEM = "arc";
prog_char string_41[] PROGMEM = "ard";
prog_char string_42[] PROGMEM = "are";
prog_char string_43[] PROGMEM = "art";
prog_char string_44[] PROGMEM = "as";
prog_char string_45[] PROGMEM = "ase";
prog_char string_46[] PROGMEM = "ask";
prog_char string_47[] PROGMEM = "ass";
prog_char string_48[] PROGMEM = "ast";
prog_char string_49[] PROGMEM = "at";
prog_char string_50[] PROGMEM = "ate";
prog_char string_51[] PROGMEM = "ati";
prog_char string_52[] PROGMEM = "att";
prog_char string_53[] PROGMEM = "ave";
prog_char string_54[] PROGMEM = "back";
prog_char string_55[] PROGMEM = "be";
prog_char string_56[] PROGMEM = "bed";
prog_char string_57[] PROGMEM = "before";
prog_char string_58[] PROGMEM = "begin";
prog_char string_59[] PROGMEM = "ber";
prog_char string_60[] PROGMEM = "best";
prog_char string_61[] PROGMEM = "better";
prog_char string_62[] PROGMEM = "between";
prog_char string_63[] PROGMEM = "big";
prog_char string_64[] PROGMEM = "bl";
prog_char string_65[] PROGMEM = "black";
prog_char string_66[] PROGMEM = "ble";
prog_char string_67[] PROGMEM = "blue";
prog_char string_68[] PROGMEM = "bo";
prog_char string_69[] PROGMEM = "body";
prog_char string_70[] PROGMEM = "book";
prog_char string_71[] PROGMEM = "both";
prog_char string_72[] PROGMEM = "boy";
prog_char string_73[] PROGMEM = "bring";
prog_char string_74[] PROGMEM = "bu";
prog_char string_75[] PROGMEM = "build";
prog_char string_76[] PROGMEM = "but";
prog_char string_77[] PROGMEM = "by";
prog_char string_78[] PROGMEM = "cal";
prog_char string_79[] PROGMEM = "call";
prog_char string_80[] PROGMEM = "can";
prog_char string_81[] PROGMEM = "cannot";
prog_char string_82[] PROGMEM = "car";
prog_char string_83[] PROGMEM = "care";
prog_char string_84[] PROGMEM = "carry";
prog_char string_85[] PROGMEM = "cat";
prog_char string_86[] PROGMEM = "cause";
prog_char string_87[] PROGMEM = "ce";
prog_char string_88[] PROGMEM = "center";
prog_char string_89[] PROGMEM = "certain";
prog_char string_90[] PROGMEM = "ces";
prog_char string_91[] PROGMEM = "change";
prog_char string_92[] PROGMEM = "che";
prog_char string_93[] PROGMEM = "ci";
prog_char string_94[] PROGMEM = "city";
prog_char string_95[] PROGMEM = "ck";
prog_char string_96[] PROGMEM = "cl";
prog_char string_97[] PROGMEM = "class";
prog_char string_98[] PROGMEM = "clear";
prog_char string_99[] PROGMEM = "close";
prog_char string_100[] PROGMEM = "co";
prog_char string_101[] PROGMEM = "cold";
prog_char string_102[] PROGMEM = "color";
prog_char string_103[] PROGMEM = "com";
prog_char string_104[] PROGMEM = "come";
prog_char string_105[] PROGMEM = "common";
prog_char string_106[] PROGMEM = "con";
prog_char string_107[] PROGMEM = "cou";
prog_char string_108[] PROGMEM = "could";
prog_char string_109[] PROGMEM = "course";
prog_char string_110[] PROGMEM = "cover";
prog_char string_111[] PROGMEM = "ct";
prog_char string_112[] PROGMEM = "cti";
prog_char string_113[] PROGMEM = "cut";
prog_char string_114[] PROGMEM = "da";
prog_char string_115[] PROGMEM = "dark";
prog_char string_116[] PROGMEM = "dat";
prog_char string_117[] PROGMEM = "day";
prog_char string_118[] PROGMEM = "de";
prog_char string_119[] PROGMEM = "decide";
prog_char string_120[] PROGMEM = "deep";
prog_char string_121[] PROGMEM = "der";
prog_char string_122[] PROGMEM = "develop";
prog_char string_123[] PROGMEM = "di";
prog_char string_124[] PROGMEM = "din";
prog_char string_125[] PROGMEM = "dis";
prog_char string_126[] PROGMEM = "do";
prog_char string_127[] PROGMEM = "does";
prog_char string_128[] PROGMEM = "done";
prog_char string_129[] PROGMEM = "door";
prog_char string_130[] PROGMEM = "down";
prog_char string_131[] PROGMEM = "drive";
prog_char string_132[] PROGMEM = "ds";
prog_char string_133[] PROGMEM = "dt";
prog_char string_134[] PROGMEM = "du";
prog_char string_135[] PROGMEM = "during";
prog_char string_136[] PROGMEM = "ea";
prog_char string_137[] PROGMEM = "each";
prog_char string_138[] PROGMEM = "ead";
prog_char string_139[] PROGMEM = "eal";
prog_char string_140[] PROGMEM = "ean";
prog_char string_141[] PROGMEM = "ear";
prog_char string_142[] PROGMEM = "early";
prog_char string_143[] PROGMEM = "eas";
prog_char string_144[] PROGMEM = "east";
prog_char string_145[] PROGMEM = "eat";
prog_char string_146[] PROGMEM = "eb";
prog_char string_147[] PROGMEM = "ec";
prog_char string_148[] PROGMEM = "eco";
prog_char string_149[] PROGMEM = "ect";
prog_char string_150[] PROGMEM = "ed";
prog_char string_151[] PROGMEM = "edi";
prog_char string_152[] PROGMEM = "ee";
prog_char string_153[] PROGMEM = "een";
prog_char string_154[] PROGMEM = "ef";
prog_char string_155[] PROGMEM = "eg";
prog_char string_156[] PROGMEM = "ei";
prog_char string_157[] PROGMEM = "ein";
prog_char string_158[] PROGMEM = "el";
prog_char string_159[] PROGMEM = "ele";
prog_char string_160[] PROGMEM = "ell";
prog_char string_161[] PROGMEM = "em";
prog_char string_162[] PROGMEM = "ema";
prog_char string_163[] PROGMEM = "eme";
prog_char string_164[] PROGMEM = "en";
prog_char string_165[] PROGMEM = "enc";
prog_char string_166[] PROGMEM = "end";
prog_char string_167[] PROGMEM = "ene";
prog_char string_168[] PROGMEM = "enough";
prog_char string_169[] PROGMEM = "ent";
prog_char string_170[] PROGMEM = "entire";
prog_char string_171[] PROGMEM = "eo";
prog_char string_172[] PROGMEM = "eof";
prog_char string_173[] PROGMEM = "ep";
prog_char string_174[] PROGMEM = "er";
prog_char string_175[] PROGMEM = "era";
prog_char string_176[] PROGMEM = "ere";
prog_char string_177[] PROGMEM = "eri";
prog_char string_178[] PROGMEM = "ers";
prog_char string_179[] PROGMEM = "ert";
prog_char string_180[] PROGMEM = "erv";
prog_char string_181[] PROGMEM = "es";
prog_char string_182[] PROGMEM = "ese";
prog_char string_183[] PROGMEM = "ess";
prog_char string_184[] PROGMEM = "est";
prog_char string_185[] PROGMEM = "et";
prog_char string_186[] PROGMEM = "eth";
prog_char string_187[] PROGMEM = "eto";
prog_char string_188[] PROGMEM = "ev";
prog_char string_189[] PROGMEM = "eve";
prog_char string_190[] PROGMEM = "even";
prog_char string_191[] PROGMEM = "ever";
prog_char string_192[] PROGMEM = "every";
prog_char string_193[] PROGMEM = "ew";
prog_char string_194[] PROGMEM = "ex";
prog_char string_195[] PROGMEM = "eye";
prog_char string_196[] PROGMEM = "fa";
prog_char string_197[] PROGMEM = "face";
prog_char string_198[] PROGMEM = "fact";
prog_char string_199[] PROGMEM = "fall";
prog_char string_200[] PROGMEM = "far";
prog_char string_201[] PROGMEM = "fe";
prog_char string_202[] PROGMEM = "feel";
prog_char string_203[] PROGMEM = "few";
prog_char string_204[] PROGMEM = "fi";
prog_char string_205[] PROGMEM = "field";
prog_char string_206[] PROGMEM = "figure";
prog_char string_207[] PROGMEM = "find";
prog_char string_208[] PROGMEM = "fine";
prog_char string_209[] PROGMEM = "finish";
prog_char string_210[] PROGMEM = "fire";
prog_char string_211[] PROGMEM = "first";
prog_char string_212[] PROGMEM = "five";
prog_char string_213[] PROGMEM = "fo";
prog_char string_214[] PROGMEM = "follow";
prog_char string_215[] PROGMEM = "food";
prog_char string_216[] PROGMEM = "foot";
prog_char string_217[] PROGMEM = "for";
prog_char string_218[] PROGMEM = "force";
prog_char string_219[] PROGMEM = "form";
prog_char string_220[] PROGMEM = "four";
prog_char string_221[] PROGMEM = "fr";
prog_char string_222[] PROGMEM = "free";
prog_char string_223[] PROGMEM = "fro";
prog_char string_224[] PROGMEM = "from";
prog_char string_225[] PROGMEM = "ft";
prog_char string_226[] PROGMEM = "fth";
prog_char string_227[] PROGMEM = "full";
prog_char string_228[] PROGMEM = "ga";
prog_char string_229[] PROGMEM = "game";
prog_char string_230[] PROGMEM = "ge";
prog_char string_231[] PROGMEM = "get";
prog_char string_232[] PROGMEM = "gh";
prog_char string_233[] PROGMEM = "ght";
prog_char string_234[] PROGMEM = "gi";
prog_char string_235[] PROGMEM = "girl";
prog_char string_236[] PROGMEM = "give";
prog_char string_237[] PROGMEM = "go";
prog_char string_238[] PROGMEM = "good";
prog_char string_239[] PROGMEM = "gr";
prog_char string_240[] PROGMEM = "gra";
prog_char string_241[] PROGMEM = "great";
prog_char string_242[] PROGMEM = "green";
prog_char string_243[] PROGMEM = "ground";
prog_char string_244[] PROGMEM = "group";
prog_char string_245[] PROGMEM = "had";
prog_char string_246[] PROGMEM = "half";
prog_char string_247[] PROGMEM = "han";
prog_char string_248[] PROGMEM = "hand";
prog_char string_249[] PROGMEM = "happen";
prog_char string_250[] PROGMEM = "hard";
prog_char string_251[] PROGMEM = "has";
prog_char string_252[] PROGMEM = "hat";
prog_char string_253[] PROGMEM = "have";
prog_char string_254[] PROGMEM = "he";
prog_char string_255[] PROGMEM = "hea";
prog_char string_256[] PROGMEM = "head";
prog_char string_257[] PROGMEM = "hear";
prog_char string_258[] PROGMEM = "help";
prog_char string_259[] PROGMEM = "hen";
prog_char string_260[] PROGMEM = "her";
prog_char string_261[] PROGMEM = "here";
prog_char string_262[] PROGMEM = "hes";
prog_char string_263[] PROGMEM = "hi";
prog_char string_264[] PROGMEM = "high";
prog_char string_265[] PROGMEM = "him";
prog_char string_266[] PROGMEM = "hin";
prog_char string_267[] PROGMEM = "his";
prog_char string_268[] PROGMEM = "ho";
prog_char string_269[] PROGMEM = "hold";
prog_char string_270[] PROGMEM = "home";
prog_char string_271[] PROGMEM = "hot";
prog_char string_272[] PROGMEM = "hour";
prog_char string_273[] PROGMEM = "house";
prog_char string_274[] PROGMEM = "how";
prog_char string_275[] PROGMEM = "ht";
prog_char string_276[] PROGMEM = "ia";
prog_char string_277[] PROGMEM = "ial";
prog_char string_278[] PROGMEM = "ic";
prog_char string_279[] PROGMEM = "ica";
prog_char string_280[] PROGMEM = "ice";
prog_char string_281[] PROGMEM = "id";
prog_char string_282[] PROGMEM = "ide";
prog_char string_283[] PROGMEM = "idea";
prog_char string_284[] PROGMEM = "ie";
prog_char string_285[] PROGMEM = "ies";
prog_char string_286[] PROGMEM = "if";
prog_char string_287[] PROGMEM = "ig";
prog_char string_288[] PROGMEM = "igh";
prog_char string_289[] PROGMEM = "il";
prog_char string_290[] PROGMEM = "ill";
prog_char string_291[] PROGMEM = "im";
prog_char string_292[] PROGMEM = "in";
prog_char string_293[] PROGMEM = "ina";
prog_char string_294[] PROGMEM = "inc";
prog_char string_295[] PROGMEM = "ind";
prog_char string_296[] PROGMEM = "ine";
prog_char string_297[] PROGMEM = "ing";
prog_char string_298[] PROGMEM = "ins";
prog_char string_299[] PROGMEM = "int";
prog_char string_300[] PROGMEM = "io";
prog_char string_301[] PROGMEM = "ion";
prog_char string_302[] PROGMEM = "ir";
prog_char string_303[] PROGMEM = "ire";
prog_char string_304[] PROGMEM = "is";
prog_char string_305[] PROGMEM = "ist";
prog_char string_306[] PROGMEM = "it";
prog_char string_307[] PROGMEM = "ite";
prog_char string_308[] PROGMEM = "ith";
prog_char string_309[] PROGMEM = "iti";
prog_char string_310[] PROGMEM = "ity";
prog_char string_311[] PROGMEM = "iv";
prog_char string_312[] PROGMEM = "ive";
prog_char string_313[] PROGMEM = "just";
prog_char string_314[] PROGMEM = "ke";
prog_char string_315[] PROGMEM = "keep";
prog_char string_316[] PROGMEM = "kind";
prog_char string_317[] PROGMEM = "knew";
prog_char string_318[] PROGMEM = "know";
prog_char string_319[] PROGMEM = "la";
prog_char string_320[] PROGMEM = "lan";
prog_char string_321[] PROGMEM = "land";
prog_char string_322[] PROGMEM = "large";
prog_char string_323[] PROGMEM = "last";
prog_char string_324[] PROGMEM = "lat";
prog_char string_325[] PROGMEM = "late";
prog_char string_326[] PROGMEM = "lay";
prog_char string_327[] PROGMEM = "ld";
prog_char string_328[] PROGMEM = "le";
prog_char string_329[] PROGMEM = "lea";
prog_char string_330[] PROGMEM = "lead";
prog_char string_331[] PROGMEM = "learn";
prog_char string_332[] PROGMEM = "leave";
prog_char string_333[] PROGMEM = "left";
prog_char string_334[] PROGMEM = "les";
prog_char string_335[] PROGMEM = "less";
prog_char string_336[] PROGMEM = "let";
prog_char string_337[] PROGMEM = "letter";
prog_char string_338[] PROGMEM = "li";
prog_char string_339[] PROGMEM = "lic";
prog_char string_340[] PROGMEM = "life";
prog_char string_341[] PROGMEM = "light";
prog_char string_342[] PROGMEM = "like";
prog_char string_343[] PROGMEM = "lin";
prog_char string_344[] PROGMEM = "line";
prog_char string_345[] PROGMEM = "lis";
prog_char string_346[] PROGMEM = "list";
prog_char string_347[] PROGMEM = "lit";
prog_char string_348[] PROGMEM = "little";
prog_char string_349[] PROGMEM = "live";
prog_char string_350[] PROGMEM = "ll";
prog_char string_351[] PROGMEM = "lle";
prog_char string_352[] PROGMEM = "lo";
prog_char string_353[] PROGMEM = "long";
prog_char string_354[] PROGMEM = "look";
prog_char string_355[] PROGMEM = "lot";
prog_char string_356[] PROGMEM = "love";
prog_char string_357[] PROGMEM = "low";
prog_char string_358[] PROGMEM = "ls";
prog_char string_359[] PROGMEM = "lt";
prog_char string_360[] PROGMEM = "ly";
prog_char string_361[] PROGMEM = "main";
prog_char string_362[] PROGMEM = "make";
prog_char string_363[] PROGMEM = "man";
prog_char string_364[] PROGMEM = "many";
prog_char string_365[] PROGMEM = "mat";
prog_char string_366[] PROGMEM = "may";
prog_char string_367[] PROGMEM = "me";
prog_char string_368[] PROGMEM = "mean";
prog_char string_369[] PROGMEM = "men";
prog_char string_370[] PROGMEM = "mi";
prog_char string_371[] PROGMEM = "might";
prog_char string_372[] PROGMEM = "min";
prog_char string_373[] PROGMEM = "mind";
prog_char string_374[] PROGMEM = "miss";
prog_char string_375[] PROGMEM = "mo";
prog_char string_376[] PROGMEM = "money";
prog_char string_377[] PROGMEM = "mor";
prog_char string_378[] PROGMEM = "more";
prog_char string_379[] PROGMEM = "most";
prog_char string_380[] PROGMEM = "move";
prog_char string_381[] PROGMEM = "mp";
prog_char string_382[] PROGMEM = "much";
prog_char string_383[] PROGMEM = "music";
prog_char string_384[] PROGMEM = "must";
prog_char string_385[] PROGMEM = "my";
prog_char string_386[] PROGMEM = "na";
prog_char string_387[] PROGMEM = "nal";
prog_char string_388[] PROGMEM = "name";
prog_char string_389[] PROGMEM = "nc";
prog_char string_390[] PROGMEM = "nce";
prog_char string_391[] PROGMEM = "nd";
prog_char string_392[] PROGMEM = "nda";
prog_char string_393[] PROGMEM = "nde";
prog_char string_394[] PROGMEM = "ndi";
prog_char string_395[] PROGMEM = "nds";
prog_char string_396[] PROGMEM = "ne";
prog_char string_397[] PROGMEM = "near";
prog_char string_398[] PROGMEM = "need";
prog_char string_399[] PROGMEM = "nes";
prog_char string_400[] PROGMEM = "never";
prog_char string_401[] PROGMEM = "new";
prog_char string_402[] PROGMEM = "next";
prog_char string_403[] PROGMEM = "ng";
prog_char string_404[] PROGMEM = "ngt";
prog_char string_405[] PROGMEM = "ni";
prog_char string_406[] PROGMEM = "night";
prog_char string_407[] PROGMEM = "nin";
prog_char string_408[] PROGMEM = "no";
prog_char string_409[] PROGMEM = "north";
prog_char string_410[] PROGMEM = "not";
prog_char string_411[] PROGMEM = "note";
prog_char string_412[] PROGMEM = "nothing";
prog_char string_413[] PROGMEM = "now";
prog_char string_414[] PROGMEM = "ns";
prog_char string_415[] PROGMEM = "nt";
prog_char string_416[] PROGMEM = "nta";
prog_char string_417[] PROGMEM = "nte";
prog_char string_418[] PROGMEM = "nth";
prog_char string_419[] PROGMEM = "nti";
prog_char string_420[] PROGMEM = "nto";
prog_char string_421[] PROGMEM = "nts";
prog_char string_422[] PROGMEM = "number";
prog_char string_423[] PROGMEM = "oc";
prog_char string_424[] PROGMEM = "od";
prog_char string_425[] PROGMEM = "of";
prog_char string_426[] PROGMEM = "off";
prog_char string_427[] PROGMEM = "oft";
prog_char string_428[] PROGMEM = "often";
prog_char string_429[] PROGMEM = "oh";
prog_char string_430[] PROGMEM = "ol";
prog_char string_431[] PROGMEM = "old";
prog_char string_432[] PROGMEM = "om";
prog_char string_433[] PROGMEM = "ome";
prog_char string_434[] PROGMEM = "omm";
prog_char string_435[] PROGMEM = "omp";
prog_char string_436[] PROGMEM = "on";
prog_char string_437[] PROGMEM = "ona";
prog_char string_438[] PROGMEM = "once";
prog_char string_439[] PROGMEM = "one";
prog_char string_440[] PROGMEM = "only";
prog_char string_441[] PROGMEM = "ons";
prog_char string_442[] PROGMEM = "ont";
prog_char string_443[] PROGMEM = "oo";
prog_char string_444[] PROGMEM = "op";
prog_char string_445[] PROGMEM = "open";
prog_char string_446[] PROGMEM = "or";
prog_char string_447[] PROGMEM = "ord";
prog_char string_448[] PROGMEM = "order";
prog_char string_449[] PROGMEM = "ore";
prog_char string_450[] PROGMEM = "ori";
prog_char string_451[] PROGMEM = "orm";
prog_char string_452[] PROGMEM = "ort";
prog_char string_453[] PROGMEM = "os";
prog_char string_454[] PROGMEM = "ost";
prog_char string_455[] PROGMEM = "ot";
prog_char string_456[] PROGMEM = "oth";
prog_char string_457[] PROGMEM = "other";
prog_char string_458[] PROGMEM = "ou";
prog_char string_459[] PROGMEM = "oun";
prog_char string_460[] PROGMEM = "our";
prog_char string_461[] PROGMEM = "out";
prog_char string_462[] PROGMEM = "ov";
prog_char string_463[] PROGMEM = "ove";
prog_char string_464[] PROGMEM = "over";
prog_char string_465[] PROGMEM = "ow";
prog_char string_466[] PROGMEM = "own";
prog_char string_467[] PROGMEM = "pa";
prog_char string_468[] PROGMEM = "paper";
prog_char string_469[] PROGMEM = "par";
prog_char string_470[] PROGMEM = "part";
prog_char string_471[] PROGMEM = "pass";
prog_char string_472[] PROGMEM = "pe";
prog_char string_473[] PROGMEM = "people";
prog_char string_474[] PROGMEM = "per";
prog_char string_475[] PROGMEM = "perhaps";
prog_char string_476[] PROGMEM = "person";
prog_char string_477[] PROGMEM = "piece";
prog_char string_478[] PROGMEM = "pl";
prog_char string_479[] PROGMEM = "pla";
prog_char string_480[] PROGMEM = "place";
prog_char string_481[] PROGMEM = "plan";
prog_char string_482[] PROGMEM = "plant";
prog_char string_483[] PROGMEM = "play";
prog_char string_484[] PROGMEM = "ple";
prog_char string_485[] PROGMEM = "po";
prog_char string_486[] PROGMEM = "point";
prog_char string_487[] PROGMEM = "por";
prog_char string_488[] PROGMEM = "pos";
prog_char string_489[] PROGMEM = "power";
prog_char string_490[] PROGMEM = "pr";
prog_char string_491[] PROGMEM = "pre";
prog_char string_492[] PROGMEM = "pri";
prog_char string_493[] PROGMEM = "pro";
prog_char string_494[] PROGMEM = "problem";
prog_char string_495[] PROGMEM = "proper";
prog_char string_496[] PROGMEM = "propose";
prog_char string_497[] PROGMEM = "put";
prog_char string_498[] PROGMEM = "ra";
prog_char string_499[] PROGMEM = "ran";
prog_char string_500[] PROGMEM = "rat";
prog_char string_501[] PROGMEM = "rc";
prog_char string_502[] PROGMEM = "rch";
prog_char string_503[] PROGMEM = "rd";
prog_char string_504[] PROGMEM = "re";
prog_char string_505[] PROGMEM = "rea";
prog_char string_506[] PROGMEM = "reach";
prog_char string_507[] PROGMEM = "read";
prog_char string_508[] PROGMEM = "ready";
prog_char string_509[] PROGMEM = "real";
prog_char string_510[] PROGMEM = "rec";
prog_char string_511[] PROGMEM = "record";
prog_char string_512[] PROGMEM = "red";
prog_char string_513[] PROGMEM = "ree";
prog_char string_514[] PROGMEM = "ren";
prog_char string_515[] PROGMEM = "res";
prog_char string_516[] PROGMEM = "rest";
prog_char string_517[] PROGMEM = "ri";
prog_char string_518[] PROGMEM = "ric";
prog_char string_519[] PROGMEM = "rie";
prog_char string_520[] PROGMEM = "right";
prog_char string_521[] PROGMEM = "rin";
prog_char string_522[] PROGMEM = "rm";
prog_char string_523[] PROGMEM = "rma";
prog_char string_524[] PROGMEM = "rn";
prog_char string_525[] PROGMEM = "ro";
prog_char string_526[] PROGMEM = "road";
prog_char string_527[] PROGMEM = "rom";
prog_char string_528[] PROGMEM = "room";
prog_char string_529[] PROGMEM = "rs";
prog_char string_530[] PROGMEM = "rt";
prog_char string_531[] PROGMEM = "rth";
prog_char string_532[] PROGMEM = "run";
prog_char string_533[] PROGMEM = "ry";
prog_char string_534[] PROGMEM = "sa";
prog_char string_535[] PROGMEM = "same";
prog_char string_536[] PROGMEM = "san";
prog_char string_537[] PROGMEM = "say";
prog_char string_538[] PROGMEM = "sc";
prog_char string_539[] PROGMEM = "school";
prog_char string_540[] PROGMEM = "se";
prog_char string_541[] PROGMEM = "sea";
prog_char string_542[] PROGMEM = "second";
prog_char string_543[] PROGMEM = "section";
prog_char string_544[] PROGMEM = "see";
prog_char string_545[] PROGMEM = "seem";
prog_char string_546[] PROGMEM = "ser";
prog_char string_547[] PROGMEM = "serve";
prog_char string_548[] PROGMEM = "set";
prog_char string_549[] PROGMEM = "several";
prog_char string_550[] PROGMEM = "sh";
prog_char string_551[] PROGMEM = "shall";
prog_char string_552[] PROGMEM = "she";
prog_char string_553[] PROGMEM = "sho";
prog_char string_554[] PROGMEM = "short";
prog_char string_555[] PROGMEM = "should";
prog_char string_556[] PROGMEM = "show";
prog_char string_557[] PROGMEM = "si";
prog_char string_558[] PROGMEM = "side";
prog_char string_559[] PROGMEM = "simple";
prog_char string_560[] PROGMEM = "sin";
prog_char string_561[] PROGMEM = "since";
prog_char string_562[] PROGMEM = "sit";
prog_char string_563[] PROGMEM = "six";
prog_char string_564[] PROGMEM = "size";
prog_char string_565[] PROGMEM = "small";
prog_char string_566[] PROGMEM = "so";
prog_char string_567[] PROGMEM = "sof";
prog_char string_568[] PROGMEM = "some";
prog_char string_569[] PROGMEM = "son";
prog_char string_570[] PROGMEM = "soon";
prog_char string_571[] PROGMEM = "sound";
prog_char string_572[] PROGMEM = "south";
prog_char string_573[] PROGMEM = "sp";
prog_char string_574[] PROGMEM = "special";
prog_char string_575[] PROGMEM = "ss";
prog_char string_576[] PROGMEM = "ssi";
prog_char string_577[] PROGMEM = "st";
prog_char string_578[] PROGMEM = "sta";
prog_char string_579[] PROGMEM = "stand";
prog_char string_580[] PROGMEM = "start";
prog_char string_581[] PROGMEM = "state";
prog_char string_582[] PROGMEM = "stay";
prog_char string_583[] PROGMEM = "ste";
prog_char string_584[] PROGMEM = "step";
prog_char string_585[] PROGMEM = "sth";
prog_char string_586[] PROGMEM = "sti";
prog_char string_587[] PROGMEM = "still";
prog_char string_588[] PROGMEM = "sto";
prog_char string_589[] PROGMEM = "stop";
prog_char string_590[] PROGMEM = "story";
prog_char string_591[] PROGMEM = "str";
prog_char string_592[] PROGMEM = "strong";
prog_char string_593[] PROGMEM = "study";
prog_char string_594[] PROGMEM = "su";
prog_char string_595[] PROGMEM = "such";
prog_char string_596[] PROGMEM = "suppose";
prog_char string_597[] PROGMEM = "sure";
prog_char string_598[] PROGMEM = "system";
prog_char string_599[] PROGMEM = "ta";
prog_char string_600[] PROGMEM = "table";
prog_char string_601[] PROGMEM = "take";
prog_char string_602[] PROGMEM = "tal";
prog_char string_603[] PROGMEM = "talk";
prog_char string_604[] PROGMEM = "tan";
prog_char string_605[] PROGMEM = "tat";
prog_char string_606[] PROGMEM = "te";
prog_char string_607[] PROGMEM = "ted";
prog_char string_608[] PROGMEM = "tell";
prog_char string_609[] PROGMEM = "tem";
prog_char string_610[] PROGMEM = "ten";
prog_char string_611[] PROGMEM = "ter";
prog_char string_612[] PROGMEM = "tes";
prog_char string_613[] PROGMEM = "test";
prog_char string_614[] PROGMEM = "th";
prog_char string_615[] PROGMEM = "tha";
prog_char string_616[] PROGMEM = "than";
prog_char string_617[] PROGMEM = "that";
prog_char string_618[] PROGMEM = "the";
prog_char string_619[] PROGMEM = "their";
prog_char string_620[] PROGMEM = "them";
prog_char string_621[] PROGMEM = "then";
prog_char string_622[] PROGMEM = "there";
prog_char string_623[] PROGMEM = "these";
prog_char string_624[] PROGMEM = "they";
prog_char string_625[] PROGMEM = "thi";
prog_char string_626[] PROGMEM = "thing";
prog_char string_627[] PROGMEM = "think";
prog_char string_628[] PROGMEM = "this";
prog_char string_629[] PROGMEM = "tho";
prog_char string_630[] PROGMEM = "those";
prog_char string_631[] PROGMEM = "though";
prog_char string_632[] PROGMEM = "thought";
prog_char string_633[] PROGMEM = "three";
prog_char string_634[] PROGMEM = "through";
prog_char string_635[] PROGMEM = "ti";
prog_char string_636[] PROGMEM = "tic";
prog_char string_637[] PROGMEM = "time";
prog_char string_638[] PROGMEM = "tin";
prog_char string_639[] PROGMEM = "tio";
prog_char string_640[] PROGMEM = "to";
prog_char string_641[] PROGMEM = "told";
prog_char string_642[] PROGMEM = "too";
prog_char string_643[] PROGMEM = "top";
prog_char string_644[] PROGMEM = "tor";
prog_char string_645[] PROGMEM = "toward";
prog_char string_646[] PROGMEM = "town";
prog_char string_647[] PROGMEM = "tr";
prog_char string_648[] PROGMEM = "tra";
prog_char string_649[] PROGMEM = "try";
prog_char string_650[] PROGMEM = "ts";
prog_char string_651[] PROGMEM = "tt";
prog_char string_652[] PROGMEM = "tth";
prog_char string_653[] PROGMEM = "tu";
prog_char string_654[] PROGMEM = "tur";
prog_char string_655[] PROGMEM = "turn";
prog_char string_656[] PROGMEM = "two";
prog_char string_657[] PROGMEM = "ty";
prog_char string_658[] PROGMEM = "uc";
prog_char string_659[] PROGMEM = "ul";
prog_char string_660[] PROGMEM = "um";
prog_char string_661[] PROGMEM = "un";
prog_char string_662[] PROGMEM = "und";
prog_char string_663[] PROGMEM = "under";
prog_char string_664[] PROGMEM = "unit";
prog_char string_665[] PROGMEM = "until";
prog_char string_666[] PROGMEM = "up";
prog_char string_667[] PROGMEM = "ur";
prog_char string_668[] PROGMEM = "ure";
prog_char string_669[] PROGMEM = "us";
prog_char string_670[] PROGMEM = "use";
prog_char string_671[] PROGMEM = "ust";
prog_char string_672[] PROGMEM = "ut";
prog_char string_673[] PROGMEM = "ve";
prog_char string_674[] PROGMEM = "ver";
prog_char string_675[] PROGMEM = "very";
prog_char string_676[] PROGMEM = "vi";
prog_char string_677[] PROGMEM = "wait";
prog_char string_678[] PROGMEM = "walk";
prog_char string_679[] PROGMEM = "want";
prog_char string_680[] PROGMEM = "war";
prog_char string_681[] PROGMEM = "was";
prog_char string_682[] PROGMEM = "watch";
prog_char string_683[] PROGMEM = "water";
prog_char string_684[] PROGMEM = "way";
prog_char string_685[] PROGMEM = "we";
prog_char string_686[] PROGMEM = "week";
prog_char string_687[] PROGMEM = "well";
prog_char string_688[] PROGMEM = "went";
prog_char string_689[] PROGMEM = "were";
prog_char string_690[] PROGMEM = "west";
prog_char string_691[] PROGMEM = "wh";
prog_char string_692[] PROGMEM = "what";
prog_char string_693[] PROGMEM = "when";
prog_char string_694[] PROGMEM = "where";
prog_char string_695[] PROGMEM = "whether";
prog_char string_696[] PROGMEM = "which";
prog_char string_697[] PROGMEM = "while";
prog_char string_698[] PROGMEM = "white";
prog_char string_699[] PROGMEM = "who";
prog_char string_700[] PROGMEM = "whole";
prog_char string_701[] PROGMEM = "why";
prog_char string_702[] PROGMEM = "wi";
prog_char string_703[] PROGMEM = "will";
prog_char string_704[] PROGMEM = "wit";
prog_char string_705[] PROGMEM = "with";
prog_char string_706[] PROGMEM = "wo";
prog_char string_707[] PROGMEM = "wor";
prog_char string_708[] PROGMEM = "word";
prog_char string_709[] PROGMEM = "work";
prog_char string_710[] PROGMEM = "would";
prog_char string_711[] PROGMEM = "write";
prog_char string_712[] PROGMEM = "year";
prog_char string_713[] PROGMEM = "yes";
prog_char string_714[] PROGMEM = "yet";
prog_char string_715[] PROGMEM = "yo";
prog_char string_716[] PROGMEM = "you";
prog_char string_717[] PROGMEM = "young";
prog_char string_718[] PROGMEM = "your";
prog_char string_719[] PROGMEM = "ys";




// Then set up a table to refer to your strings.

PROGMEM const char *game_word_list[] = 	 
{   
string_1,
string_2,
string_3,
string_4,
string_5,
string_6,
string_7,
string_8,
string_9,
string_10,
string_11,
string_12,
string_13,
string_14,
string_15,
string_16,
string_17,
string_18,
string_19,
string_20,
string_21,
string_22,
string_23,
string_24,
string_25,
string_26,
string_27,
string_28,
string_29,
string_30,
string_31,
string_32,
string_33,
string_34,
string_35,
string_36,
string_37,
string_38,
string_39,
string_40,
string_41,
string_42,
string_43,
string_44,
string_45,
string_46,
string_47,
string_48,
string_49,
string_50,
string_51,
string_52,
string_53,
string_54,
string_55,
string_56,
string_57,
string_58,
string_59,
string_60,
string_61,
string_62,
string_63,
string_64,
string_65,
string_66,
string_67,
string_68,
string_69,
string_70,
string_71,
string_72,
string_73,
string_74,
string_75,
string_76,
string_77,
string_78,
string_79,
string_80,
string_81,
string_82,
string_83,
string_84,
string_85,
string_86,
string_87,
string_88,
string_89,
string_90,
string_91,
string_92,
string_93,
string_94,
string_95,
string_96,
string_97,
string_98,
string_99,
string_100,
string_101,
string_102,
string_103,
string_104,
string_105,
string_106,
string_107,
string_108,
string_109,
string_110,
string_111,
string_112,
string_113,
string_114,
string_115,
string_116,
string_117,
string_118,
string_119,
string_120,
string_121,
string_122,
string_123,
string_124,
string_125,
string_126,
string_127,
string_128,
string_129,
string_130,
string_131,
string_132,
string_133,
string_134,
string_135,
string_136,
string_137,
string_138,
string_139,
string_140,
string_141,
string_142,
string_143,
string_144,
string_145,
string_146,
string_147,
string_148,
string_149,
string_150,
string_151,
string_152,
string_153,
string_154,
string_155,
string_156,
string_157,
string_158,
string_159,
string_160,
string_161,
string_162,
string_163,
string_164,
string_165,
string_166,
string_167,
string_168,
string_169,
string_170,
string_171,
string_172,
string_173,
string_174,
string_175,
string_176,
string_177,
string_178,
string_179,
string_180,
string_181,
string_182,
string_183,
string_184,
string_185,
string_186,
string_187,
string_188,
string_189,
string_190,
string_191,
string_192,
string_193,
string_194,
string_195,
string_196,
string_197,
string_198,
string_199,
string_200,
string_201,
string_202,
string_203,
string_204,
string_205,
string_206,
string_207,
string_208,
string_209,
string_210,
string_211,
string_212,
string_213,
string_214,
string_215,
string_216,
string_217,
string_218,
string_219,
string_220,
string_221,
string_222,
string_223,
string_224,
string_225,
string_226,
string_227,
string_228,
string_229,
string_230,
string_231,
string_232,
string_233,
string_234,
string_235,
string_236,
string_237,
string_238,
string_239,
string_240,
string_241,
string_242,
string_243,
string_244,
string_245,
string_246,
string_247,
string_248,
string_249,
string_250,
string_251,
string_252,
string_253,
string_254,
string_255,
string_256,
string_257,
string_258,
string_259,
string_260,
string_261,
string_262,
string_263,
string_264,
string_265,
string_266,
string_267,
string_268,
string_269,
string_270,
string_271,
string_272,
string_273,
string_274,
string_275,
string_276,
string_277,
string_278,
string_279,
string_280,
string_281,
string_282,
string_283,
string_284,
string_285,
string_286,
string_287,
string_288,
string_289,
string_290,
string_291,
string_292,
string_293,
string_294,
string_295,
string_296,
string_297,
string_298,
string_299,
string_300,
string_301,
string_302,
string_303,
string_304,
string_305,
string_306,
string_307,
string_308,
string_309,
string_310,
string_311,
string_312,
string_313,
string_314,
string_315,
string_316,
string_317,
string_318,
string_319,
string_320,
string_321,
string_322,
string_323,
string_324,
string_325,
string_326,
string_327,
string_328,
string_329,
string_330,
string_331,
string_332,
string_333,
string_334,
string_335,
string_336,
string_337,
string_338,
string_339,
string_340,
string_341,
string_342,
string_343,
string_344,
string_345,
string_346,
string_347,
string_348,
string_349,
string_350,
string_351,
string_352,
string_353,
string_354,
string_355,
string_356,
string_357,
string_358,
string_359,
string_360,
string_361,
string_362,
string_363,
string_364,
string_365,
string_366,
string_367,
string_368,
string_369,
string_370,
string_371,
string_372,
string_373,
string_374,
string_375,
string_376,
string_377,
string_378,
string_379,
string_380,
string_381,
string_382,
string_383,
string_384,
string_385,
string_386,
string_387,
string_388,
string_389,
string_390,
string_391,
string_392,
string_393,
string_394,
string_395,
string_396,
string_397,
string_398,
string_399,
string_400,
string_401,
string_402,
string_403,
string_404,
string_405,
string_406,
string_407,
string_408,
string_409,
string_410,
string_411,
string_412,
string_413,
string_414,
string_415,
string_416,
string_417,
string_418,
string_419,
string_420,
string_421,
string_422,
string_423,
string_424,
string_425,
string_426,
string_427,
string_428,
string_429,
string_430,
string_431,
string_432,
string_433,
string_434,
string_435,
string_436,
string_437,
string_438,
string_439,
string_440,
string_441,
string_442,
string_443,
string_444,
string_445,
string_446,
string_447,
string_448,
string_449,
string_450,
string_451,
string_452,
string_453,
string_454,
string_455,
string_456,
string_457,
string_458,
string_459,
string_460,
string_461,
string_462,
string_463,
string_464,
string_465,
string_466,
string_467,
string_468,
string_469,
string_470,
string_471,
string_472,
string_473,
string_474,
string_475,
string_476,
string_477,
string_478,
string_479,
string_480,
string_481,
string_482,
string_483,
string_484,
string_485,
string_486,
string_487,
string_488,
string_489,
string_490,
string_491,
string_492,
string_493,
string_494,
string_495,
string_496,
string_497,
string_498,
string_499,
string_500,
string_501,
string_502,
string_503,
string_504,
string_505,
string_506,
string_507,
string_508,
string_509,
string_510,
string_511,
string_512,
string_513,
string_514,
string_515,
string_516,
string_517,
string_518,
string_519,
string_520,
string_521,
string_522,
string_523,
string_524,
string_525,
string_526,
string_527,
string_528,
string_529,
string_530,
string_531,
string_532,
string_533,
string_534,
string_535,
string_536,
string_537,
string_538,
string_539,
string_540,
string_541,
string_542,
string_543,
string_544,
string_545,
string_546,
string_547,
string_548,
string_549,
string_550,
string_551,
string_552,
string_553,
string_554,
string_555,
string_556,
string_557,
string_558,
string_559,
string_560,
string_561,
string_562,
string_563,
string_564,
string_565,
string_566,
string_567,
string_568,
string_569,
string_570,
string_571,
string_572,
string_573,
string_574,
string_575,
string_576,
string_577,
string_578,
string_579,
string_580,
string_581,
string_582,
string_583,
string_584,
string_585,
string_586,
string_587,
string_588,
string_589,
string_590,
string_591,
string_592,
string_593,
string_594,
string_595,
string_596,
string_597,
string_598,
string_599,
string_600,
string_601,
string_602,
string_603,
string_604,
string_605,
string_606,
string_607,
string_608,
string_609,
string_610,
string_611,
string_612,
string_613,
string_614,
string_615,
string_616,
string_617,
string_618,
string_619,
string_620,
string_621,
string_622,
string_623,
string_624,
string_625,
string_626,
string_627,
string_628,
string_629,
string_630,
string_631,
string_632,
string_633,
string_634,
string_635,
string_636,
string_637,
string_638,
string_639,
string_640,
string_641,
string_642,
string_643,
string_644,
string_645,
string_646,
string_647,
string_648,
string_649,
string_650,
string_651,
string_652,
string_653,
string_654,
string_655,
string_656,
string_657,
string_658,
string_659,
string_660,
string_661,
string_662,
string_663,
string_664,
string_665,
string_666,
string_667,
string_668,
string_669,
string_670,
string_671,
string_672,
string_673,
string_674,
string_675,
string_676,
string_677,
string_678,
string_679,
string_680,
string_681,
string_682,
string_683,
string_684,
string_685,
string_686,
string_687,
string_688,
string_689,
string_690,
string_691,
string_692,
string_693,
string_694,
string_695,
string_696,
string_697,
string_698,
string_699,
string_700,
string_701,
string_702,
string_703,
string_704,
string_705,
string_706,
string_707,
string_708,
string_709,
string_710,
string_711,
string_712,
string_713,
string_714,
string_715,
string_716,
string_717,
string_718,
string_719};