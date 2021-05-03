/* 
 * Copyright (c) 2016 Nordic Semiconductor ASA
 * All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 * 
 *   1. Redistributions of source code must retain the above copyright notice, this list 
 *      of conditions and the following disclaimer.
 *
 *   2. Redistributions in binary form, except as embedded into a Nordic Semiconductor ASA 
 *      integrated circuit in a product or a software update for such product, must reproduce 
 *      the above copyright notice, this list of conditions and the following disclaimer in 
 *      the documentation and/or other materials provided with the distribution.
 *
 *   3. Neither the name of Nordic Semiconductor ASA nor the names of its contributors may be 
 *      used to endorse or promote products derived from this software without specific prior 
 *      written permission.
 *
 *   4. This software, with or without modification, must only be used with a 
 *      Nordic Semiconductor ASA integrated circuit.
 *
 *   5. Any software provided in binary or object form under this license must not be reverse 
 *      engineered, decompiled, modified and/or disassembled. 
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * 
 */

/* MBED TARGET LIST: ZEST_CORE_NRF52832 */

#ifndef MBED_PINNAMES_H
#define MBED_PINNAMES_H

#include "cmsis.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    PIN_INPUT,
    PIN_OUTPUT
} PinDirection;

typedef enum {
    P0_0  = 0,
    P0_1  = 1,
    P0_2  = 2,
    P0_3  = 3,
    P0_4  = 4,
    P0_5  = 5,
    P0_6  = 6,
    P0_7  = 7,

    P0_8  = 8,
    P0_9  = 9,
    P0_10 = 10,
    P0_11 = 11,
    P0_12 = 12,
    P0_13 = 13,
    P0_14 = 14,
    P0_15 = 15,

    P0_16 = 16,
    P0_17 = 17,
    P0_18 = 18,
    P0_19 = 19,
    P0_20 = 20,
    P0_21 = 21,
    P0_22 = 22,
    P0_23 = 23,

    P0_24 = 24,
    P0_25 = 25,
    P0_26 = 26,
    P0_27 = 27,
    P0_28 = 28,
    P0_29 = 29,
    P0_30 = 30,
    P0_31 = 31,

    /**** Zest connector signal namings (J1) ****/
    I2C1_SCL    = P0_25,
    I2C1_SDA    = P0_26,
    UART1_RX    = P0_27, // if R4 is mounted
    UART1_TX    = P0_28, // if R11 is mounted
    SPI1_MOSI   = P0_29,
    SPI1_MISO   = P0_30,
    SPI1_SCK    = P0_31,
    SPI1_CS     = P0_6,
    PWM1_OUT    = P0_7,
    PWM2_OUT    = P0_8,
    PWM3_OUT    = P0_9,
    ICAPT1      = P0_10,
    WKUP        = P0_11,
    ADC_IN1     = P0_2,
    ADC_IN2     = P0_3,
    ADC_IN3     = P0_4,
    ADC_IN4     = P0_5,
    DIO1        = P0_12,
    DIO2        = P0_13,
    DIO3        = P0_17,
    DIO4        = P0_19,
    DIO5        = P0_22, // Or MOTHER_DAUGHTER signal if R22 is mounted
    DIO6        = P0_14,
    DIO7        = P0_15,
    DIO8        = P0_16,
    DIO10       = P0_18,
    DIO11       = P0_20,
    MD          = P0_22, // MOTHER_DAUGHTER signal

    // STDIO for console print
#ifdef MBED_CONF_TARGET_STDIO_UART_TX
    CONSOLE_TX = MBED_CONF_TARGET_STDIO_UART_TX,
#else
    CONSOLE_TX = P0_28,
#endif
#ifdef MBED_CONF_TARGET_STDIO_UART_RX
    CONSOLE_RX = MBED_CONF_TARGET_STDIO_UART_RX,
#else
    CONSOLE_RX = P0_27,
#endif

    /**** DEBUG pins ****/
    //SYS_JTCK_SWCLK = PA_14,
    //SYS_JTDI = PA_15,
    SYS_JTDO_SWO = P0_18,
    //SYS_JTMS_SWDIO = PA_13,
    //SYS_WKUP2 = WKUP,

    // Not connected
    NC = (int)0xFFFFFFFF,
    STDIO_UART_CTS = NC,
    STDIO_UART_RTS = NC
} PinName;

typedef enum {
    PullNone = 0,
    PullDown = 1,
    PullUp = 3,
    PullDefault = PullNone
} PinMode;

// Standardized LED and button names
#define LED1    P0_23
#define BUTTON1 P0_24

#ifdef __cplusplus
}
#endif

#endif
