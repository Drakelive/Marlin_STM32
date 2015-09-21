

#define KNOWN_BOARD 


#ifndef ARDUINO_ARCH_STM32
#error Oops!  Make sure you have 'STduino' selected from the 'Tools -> Boards' menu.
#endif

#define LARGE_FLASH true

#define X_STEP_PIN         54
#define X_DIR_PIN          57
#define X_ENABLE_PIN       38
#define X_MIN_PIN           3
#define X_MAX_PIN           2

#define Y_STEP_PIN         60
#define Y_DIR_PIN          61
#define Y_ENABLE_PIN       56
#define Y_MIN_PIN          14
#define Y_MAX_PIN          15

#define Z_STEP_PIN         46
#define Z_DIR_PIN          48
#define Z_ENABLE_PIN       62
#define Z_MIN_PIN          18
#define Z_MAX_PIN          19

#define Y2_STEP_PIN        36
#define Y2_DIR_PIN         34
#define Y2_ENABLE_PIN      30

#define Z2_STEP_PIN        36
#define Z2_DIR_PIN         34
#define Z2_ENABLE_PIN      30

#define E0_STEP_PIN        26
#define E0_DIR_PIN         28
#define E0_ENABLE_PIN      24

#define E1_STEP_PIN        36
#define E1_DIR_PIN         34
#define E1_ENABLE_PIN      30

#define HEATER_BED_PIN      4
#define TEMP_BED_PIN       10

#define HEATER_0_PIN       10
#define TEMP_0_PIN         A1 //55

#define HEATER_1_PIN       -1 //3
#define TEMP_1_PIN         -1 //A2//56

#define HEATER_2_PIN       -1
#define TEMP_2_PIN         -1


#define SDPOWER            -1
#define SDSS               -1
#define LED_PIN            13
#define FAN_PIN            9
#define PS_ON_PIN          -1
#define KILL_PIN           -1
#define SUICIDE_PIN        -1  //PIN that has to be turned on right after start, to keep power flowing.

#ifdef ULTRA_LCD

  #ifdef NEWPANEL
  //arduino pin witch triggers an piezzo beeper
    #define BEEPER 18

    #define LCD_PINS_RS 20
    #define LCD_PINS_ENABLE 17
    #define LCD_PINS_D4 16
    #define LCD_PINS_D5 21
    #define LCD_PINS_D6 5
    #define LCD_PINS_D7 6

    //buttons are directly attached
    #define BTN_EN1 40
    #define BTN_EN2 42
    #define BTN_ENC 19  //the click

    #define SDCARDDETECT 38

  #else //old style panel with shift register
    //arduino pin witch triggers an piezzo beeper
    #define BEEPER 18

    //buttons are attached to a shift register
    #define SHIFT_CLK 38
    #define SHIFT_LD 42
    #define SHIFT_OUT 40
    #define SHIFT_EN 17

    #define LCD_PINS_RS 16
    #define LCD_PINS_ENABLE 5
    #define LCD_PINS_D4 6
    #define LCD_PINS_D5 21
    #define LCD_PINS_D6 20
    #define LCD_PINS_D7 19

    #define SDCARDDETECT -1
  #endif
#endif //ULTRA_LCD
