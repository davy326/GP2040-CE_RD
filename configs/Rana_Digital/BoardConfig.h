/*
 * SPDX-License-Identifier: MIT
 * SPDX-FileCopyrightText: Copyright (c) 2021 Jason Skuby (mytechtoybox.com)
 */

#ifndef PICO_BOARD_CONFIG_H_
#define PICO_BOARD_CONFIG_H_

#include "enums.pb.h"

// This is the main pin definition section.
// This will let you specify which GPIO pin each button is assigned too.
// You can set any of the main pins as `-1` to disable it.
// The Turbo pin and LS + RS slider pins can also be set to `-1` to disable that functionality.
// Please note that only when `PIN_BUTTON_TURBO` is set to `-1` will the `T##` be removed from a connected display.
// Please note that only when `PIN_SLIDER_LS` and  `PIN_SLIDER_RS` are set to `-1` will the button combo shortcut for DP/LS/RS work.
// The buttons are listed in GP2040 configuration, beside each the listed order is *GP2040 / Xinput / Switch / PS3 / Directinput / Arcade*

#define PIN_DPAD_UP     6           // UP
#define PIN_DPAD_DOWN   3           // DOWN
#define PIN_DPAD_RIGHT  2           // RIGHT
#define PIN_DPAD_LEFT   4           // LEFT
#define PIN_BUTTON_B1   26          // B1 / A / B / Cross / 2 / K1
#define PIN_BUTTON_B2   21          // B2 / B / A / Circle / 3 / K2
#define PIN_BUTTON_R2   19          // R2 / RT / ZR / R2 / 8 / K3
#define PIN_BUTTON_L2   17          // L2 / LT / ZL / L2 / 7 / K4
#define PIN_BUTTON_B3   27           // B3 / X / Y / Square / 1 / P1
#define PIN_BUTTON_B4   22           // B4 / Y / X / Triangle / 4 / P2
#define PIN_BUTTON_R1   18          // R1 / RB / R / R1 / 6 / P3
#define PIN_BUTTON_L1   20          // L1 / LB / L / L1 / 5 / P4
#define PIN_BUTTON_S1   13           // S1 / Back / Minus / Select / 9 / Coin
#define PIN_BUTTON_S2   0           // S2 / Start / Plus / Start / 10 / Start
#define PIN_BUTTON_L3   -1          // L3 / LS / LS / L3 / 11 / LS
#define PIN_BUTTON_R3   -1          // R3 / RS / RS / R3 / 12 / RS
#define PIN_BUTTON_A1   15           // A1 / Guide / Home / PS / 13 / ~
#define PIN_BUTTON_A2   16          // A2 / ~ / Capture / ~ / 14 / ~
#define PIN_BUTTON_TURBO -1         // Turbo
#define PIN_SLIDER_LS    -1         // Left Stick Slider
#define PIN_SLIDER_RS    -1         // Right Stick Slider


// This is the SOCD section.
// SOCD stands for `simultaneous opposing cardinal directions`.
// There are three options for `DEFAULT_SOCD_MODE` currently:
// 1 - `SOCD_MODE_NEUTRAL` - This is a neutral SOCD.  EG. when you press `up` + `down` no input will be registered.
// 2 - `SOCD_MODE_UP_PRIORITY` - This is up priority SOCD.  EG. when you press `up` + `down` `up` will be registered.
// 3 - `SOCD_MODE_SECOND_INPUT_PRIORITY` - This is last priority SOCD.  EG. when you press and hold `up` then press `down` `down` will be registered.
// 4 - `SOCD_MODE_FIRST_INPUT_PRIORITY` - This is first priority SOCD.  EG. when you press and hold `up` then press `down` `up` will be registered.

#define DEFAULT_SOCD_MODE SOCD_MODE_NEUTRAL
#define BUTTON_LAYOUT BUTTON_LAYOUT_STICKLESS
#define DEFAULT_FORCED_SETUP_MODE FORCED_SETUP_MODE_OFF // 	FORCED_SETUP_MODE_OFF, FORCED_SETUP_MODE_LOCK_MODE_SWITCH, FORCED_SETUP_MODE_LOCK_WEB_CONFIG, FORCED_SETUP_MODE_LOCK_BOTH
#define DEFAULT_LOCK_HOTKEYS false // or true

#define REVERSE_LED_PIN -1
#define REVERSE_UP_DEFAULT 1
#define REVERSE_DOWN_DEFAULT 1
#define REVERSE_LEFT_DEFAULT 1
#define REVERSE_RIGHT_DEFAULT 1

#define DEFAULT_INPUT_MODE INPUT_MODE_XINPUT //INPUT_MODE_XINPUT (XInput), INPUT_MODE_SWITCH (Nintendo Switch), INPUT_MODE_HID (D-Input), INPUT_MODE_KEYBOARD (Keyboard)
#define DEFAULT_DPAD_MODE DPAD_MODE_DIGITAL  //DPAD_MODE_DIGITAL, DPAD_MODE_LEFT_ANALOG, DPAD_MODE_RIGHT_ANALOG, 
#define BUTTON_LAYOUT_RIGHT BUTTON_LAYOUT_VEWLIX
#define SPLASH_MODE SPLASH_MODE_NONE
#define SPLASH_CHOICE SPLASH_CHOICE_MAIN
#define SPLASH_DURATION 7500 // Duration in milliseconds

// BOOTSEL Button Add-on setting
#define BOOTSEL_BUTTON_MASK GAMEPAD_MASK_R1 // 0 means none, get other mask from GamepadState.h

// Extra Button Add-on setting
#define EXTRA_BUTTON_MASK GAMEPAD_MASK_DU // 0 means none, get other mask from GamepadState.h
                            // For directions, use GAMEPAD_MASK_DU, GAMEPAD_MASK_DD, GAMEPAD_MASK_DL and GAMEPAD_MASK_DR
#define EXTRA_BUTTON_PIN 14

#define BOARD_LED_TYPE ON_BOARD_LED_MODE_OFF

// Keyboard Mapping Configuration
// List of HID keycodes can be located here: https://github.com/hathach/tinyusb/blob/3623ba1884ddff23e9b64766cb6dd032f1425846/src/class/hid/hid.h#L356
// Even for the modifier keys, HID_KEY entries should be used as the implementation expects those and will convert as necessary.
#define KEY_DPAD_UP     HID_KEY_ARROW_UP      // UP
#define KEY_DPAD_DOWN   HID_KEY_ARROW_DOWN    // DOWN
#define KEY_DPAD_RIGHT  HID_KEY_ARROW_RIGHT   // RIGHT
#define KEY_DPAD_LEFT   HID_KEY_ARROW_LEFT    // LEFT
#define KEY_BUTTON_B1   HID_KEY_SHIFT_LEFT    // B1 / A / B / Cross / 2 / K1
#define KEY_BUTTON_B2   HID_KEY_Z             // B2 / B / A / Circle / 3 / K2
#define KEY_BUTTON_R2   HID_KEY_X             // R2 / RT / ZR / R2 / 8 / K3
#define KEY_BUTTON_L2   HID_KEY_V             // L2 / LT / ZL / L2 / 7 / K4
#define KEY_BUTTON_B3   HID_KEY_CONTROL_LEFT  // B3 / X / Y / Square / 1 / P1
#define KEY_BUTTON_B4   HID_KEY_ALT_LEFT      // B4 / Y / X / Triangle / 4 / P2
#define KEY_BUTTON_R1   HID_KEY_SPACE         // R1 / RB / R / R1 / 6 / P3
#define KEY_BUTTON_L1   HID_KEY_C             // L1 / LB / L / L1 / 5 / P4
#define KEY_BUTTON_S1   HID_KEY_5             // S1 / Back / Minus / Select / 9 / Coin
#define KEY_BUTTON_S2   HID_KEY_1             // S2 / Start / Plus / Start / 10 / Start
#define KEY_BUTTON_L3   HID_KEY_EQUAL         // L3 / LS / LS / L3 / 11 / LS
#define KEY_BUTTON_R3   HID_KEY_MINUS         // R3 / RS / RS / R3 / 12 / RS
#define KEY_BUTTON_A1   HID_KEY_9             // A1 / Guide / Home / PS / 13 / ~
#define KEY_BUTTON_A2   HID_KEY_F2            // A2 / ~ / Capture / ~ / 14 / ~

// Hotkey Action Mapping
// Find the list of hotkey actions in GamepadEnums.h
#define HOTKEY_F1_UP_MASK      GAMEPAD_MASK_UP
#define HOTKEY_F1_UP_ACTION    HOTKEY_HOME_BUTTON
#define HOTKEY_F1_DOWN_MASK    GAMEPAD_MASK_DOWN
#define HOTKEY_F1_DOWN_ACTION  HOTKEY_DPAD_DIGITAL
#define HOTKEY_F1_LEFT_MASK    GAMEPAD_MASK_LEFT
#define HOTKEY_F1_LEFT_ACTION  HOTKEY_DPAD_LEFT_ANALOG
#define HOTKEY_F1_RIGHT_MASK   GAMEPAD_MASK_RIGHT
#define HOTKEY_F1_RIGHT_ACTION HOTKEY_DPAD_RIGHT_ANALOG

#define HOTKEY_F2_UP_MASK      GAMEPAD_MASK_UP
#define HOTKEY_F2_UP_ACTION    HOTKEY_SOCD_UP_PRIORITY
#define HOTKEY_F2_DOWN_MASK    GAMEPAD_MASK_DOWN
#define HOTKEY_F2_DOWN_ACTION  HOTKEY_SOCD_NEUTRAL
#define HOTKEY_F2_LEFT_MASK    GAMEPAD_MASK_LEFT
#define HOTKEY_F2_LEFT_ACTION  HOTKEY_SOCD_LAST_INPUT
#define HOTKEY_F2_RIGHT_MASK   GAMEPAD_MASK_RIGHT
#define HOTKEY_F2_RIGHT_ACTION HOTKEY_INVERT_Y_AXIS

#endif
