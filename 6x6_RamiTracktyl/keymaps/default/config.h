/*
Copyright 2012 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#define MASTER_LEFT
//#define MASTER_RIGHT

#define SERIAL_USART_FULL_DUPLEX   // Enable full duplex operation mode.
#define SERIAL_USART_TX_PIN GP0     // USART TX pin
#define SERIAL_USART_RX_PIN GP1     // USART RX pin


// OLED Defines
#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN GP6
#define I2C1_SCL_PIN GP7

#define OLED_TIMEOUT 120000
#define OLED_BRIGHTNESS 120

// Trackball
#define SPLIT_POINTING_ENABLE
#define ROTATIONAL_TRANSFORM_ANGLE -25
#define POINTING_DEVICE_LEFT
#define PMW33XX_CPI 2500

#define POINTING_DEVICE_INVERT_Y
#define POINTING_DEVICE_DEBUG

// Trackball Pins
#define PMW33XX_CS_PIN GP21
// #define SPI_SCK_PIN GP13
// #define SPI_MOSI_PIN GP11
// #define SPI_MISO_PIN GP12

#define POINTING_DEVICE_TASK_THROTTLE_MS 1
#define PMW33XX_LIFTOFF_DISTANCE 0x00

//#define SPLIT_TRANSACTION_IDS_KB RPC_ID_KB_CONFIG_SYNC
//#define CHARYBDIS_MINIMUM_DEFAULT_DPI 1600
//#define CHARYBDIS_DEFAULT_DPI_CONFIG_STEP 400
//#define CHARYBDIS_MINIMUM_SNIPING_DPI 400
//#define CHARYBDIS_SNIPING_DPI_CONFIG_STEP 200
//#define CHARYBDIS_DRAGSCROLL_DPI 200
//
//#define CHARYBDIS_POINTER_ACCELERATION_ENABLE


//#define EE_HANDS
