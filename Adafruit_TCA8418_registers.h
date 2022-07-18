#pragma once
/*!
 *  @file Adafruit_TCA8418_registers.h
 *
 * 	I2C Driver for the Adafruit TCA8418 Keypad Matrix / GPIO Expander Breakout
 *
 * 	This is a library for the Adafruit TCA8418 breakout:
 * 	https://www.adafruit.com/products/4918
 *
 * 	Adafruit invests time and resources providing this open source code,
 *  please support Adafruit and open-source hardware by purchasing products from
 * 	Adafruit!
 *
 *
 *	BSD license (see license.txt)
 */


//  REGISTERS

// #define TCA8418_REG_RESERVED          0x00
#define TCA8418_REG_CFG                  0x01
#define TCA8418_REG_INT_STAT             0x02
#define TCA8418_REG_KEY_LCK_EC           0x03   /// Key lock and event counter
#define TCA8418_REG_KEY_EVENT_A          0x04   /// Key event register A
#define TCA8418_REG_KEY_EVENT_B          0x05
#define TCA8418_REG_KEY_EVENT_C          0x06
#define TCA8418_REG_KEY_EVENT_D          0x07
#define TCA8418_REG_KEY_EVENT_E          0x08
#define TCA8418_REG_KEY_EVENT_F          0x09
#define TCA8418_REG_KEY_EVENT_G          0x0A
#define TCA8418_REG_KEY_EVENT_H          0x0B
#define TCA8418_REG_KEY_EVENT_I          0x0C
#define TCA8418_REG_KEY_EVENT_J          0x0D
#define TCA8418_REG_KP_LCK_TIMER         0x0E
#define TCA8418_REG_UNLOCK_1             0x0F
#define TCA8418_REG_UNLOCK_2             0x10
#define TCA8418_REG_GPIO_INT_STAT_1      0x11
#define TCA8418_REG_GPIO_INT_STAT_2      0x12
#define TCA8418_REG_GPIO_INT_STAT_3      0x13
#define TCA8418_REG_GPIO_DAT_STAT_1      0x14
#define TCA8418_REG_GPIO_DAT_STAT_2      0x15
#define TCA8418_REG_GPIO_DAT_STAT_3      0x16
#define TCA8418_REG_GPIO_DAT_OUT_1       0x17
#define TCA8418_REG_GPIO_DAT_OUT_2       0x18
#define TCA8418_REG_GPIO_DAT_OUT_3       0x19
#define TCA8418_REG_GPIO_INT_EN_1        0x1A
#define TCA8418_REG_GPIO_INT_EN_2        0x1B
#define TCA8418_REG_GPIO_INT_EN_3        0x1C
#define TCA8418_REG_KP_GPIO_1            0x1D
#define TCA8418_REG_KP_GPIO_2            0x1E
#define TCA8418_REG_KP_GPIO_3            0x1F
#define TCA8418_REG_GPI_EM_1             0x20
#define TCA8418_REG_GPI_EM_2             0x21
#define TCA8418_REG_GPI_EM_3             0x22
#define TCA8418_REG_GPIO_DIR_1           0x23   ///< Register GPIO direction (lowest)
#define TCA8418_REG_GPIO_DIR_2           0x24
#define TCA8418_REG_GPIO_DIR_3           0x25
#define TCA8418_REG_GPIO_INT_LVL_1       0x26
#define TCA8418_REG_GPIO_INT_LVL_2       0x27
#define TCA8418_REG_GPIO_INT_LVL_3       0x28
#define TCA8418_REG_DEBOUNCE_DIS_1       0x29
#define TCA8418_REG_DEBOUNCE_DIS_2       0x2A
#define TCA8418_REG_DEBOUNCE_DIS_3       0x2B
#define TCA8418_REG_GPIO_PULL_1          0x2C
#define TCA8418_REG_GPIO_PULL_2          0x2D
#define TCA8418_REG_GPIO_PULL_3          0x2E
// #define TCA8418_REG_RESERVED          0x2F


//  FIELDS CONFIG REGISTER  1
#define TCA8418_REG_CFG_AI               0x80
#define TCA8418_REG_CFG_GPI_E_CGF        0x40
#define TCA8418_REG_CFG_OVR_FLOW_M       0x20
#define TCA8418_REG_CFG_INT_CFG          0x10
#define TCA8418_REG_CFG_OVR_FLOW_IEN     0x08
#define TCA8418_REG_CFG_K_LCK_IEN        0x04
#define TCA8418_REG_CFG_GPI_IEN          0x02
#define TCA8418_REG_CFG_KE_IEN           0x01


//  FIELDS INT_STAT REGISTER  2
#define TCA8418_REG_STAT_CAD_INT         0x10
#define TCA8418_REG_STAT_OVR_FLOW_INT    0x08
#define TCA8418_REG_STAT_K_LCK_INT       0x04
#define TCA8418_REG_STAT_GPI_INT         0x02
#define TCA8418_REG_STAT_K_INT           0x01


//  FIELDS  KEY_LCK_EC REGISTER 3
#define TCA8418_REG_LCK_EC_K_LCK_EN      0x40
#define TCA8418_REG_LCK_EC_LCK_2         0x20
#define TCA8418_REG_LCK_EC_LCK_1         0x10
#define TCA8418_REG_LCK_EC_KLEC_3        0x08
#define TCA8418_REG_LCK_EC_KLEC_2        0x04
#define TCA8418_REG_LCK_EC_KLEC_1        0x02
#define TCA8418_REG_LCK_EC_KLEC_0        0x01

