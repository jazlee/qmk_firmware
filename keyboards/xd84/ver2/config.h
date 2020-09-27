#pragma once

#define PRODUCT_ID      0x8450 // 84 "P"
#define DEVICE_VER      0x0002
#define DESCRIPTION     KPrepublic XD84 Pro

/* key matrix pins */
#define MATRIX_ROW_PINS { F4, D0, D1, D2, D3, D5 }
#define MATRIX_COL_PINS { F0, F1, E6, C7, C6, B6, D4, B1, B7, B5, B4, D7, D6, B3, F7 }
#define UNUSED_PINS { B0, E2 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* number of backlight levels */
#define BACKLIGHT_PIN F5
#define BACKLIGHT_LEVELS 10
#define BACKLIGHT_ON_STATE 0
// #define BACKLIGHT_BREATHING

#define RGB_DI_PIN F6
#ifdef RGB_DI_PIN
    #define RGBLED_NUM 12
//   #define RGBLIGHT_HUE_STEP 8
//   #define RGBLIGHT_SAT_STEP 8
//   #define RGBLIGHT_VAL_STEP 8
//   #define RGBLIGHT_LIMIT_VAL 255 /* The maximum brightness level */
    #define RGBLIGHT_SLEEP  /* If defined, the RGB lighting will be switched off when the host goes to sleep */
// /*== all animations enable ==*/
    #define RGBLIGHT_ANIMATIONS
// /*== or choose animations ==*/
//   #define RGBLIGHT_EFFECT_BREATHING
//   #define RGBLIGHT_EFFECT_RAINBOW_MOOD
//   #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
//   #define RGBLIGHT_EFFECT_SNAKE
//   #define RGBLIGHT_EFFECT_KNIGHT
//   #define RGBLIGHT_EFFECT_CHRISTMAS
//   #define RGBLIGHT_EFFECT_STATIC_GRADIENT
//   #define RGBLIGHT_EFFECT_RGB_TEST
//   #define RGBLIGHT_EFFECT_ALTERNATING
#endif

#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
