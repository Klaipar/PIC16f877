/* Microchip Technology Inc. and its subsidiaries.  You may use this software 
 * and any derivatives exclusively with Microchip products. 
 * 
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS".  NO WARRANTIES, WHETHER 
 * EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED 
 * WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A 
 * PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION 
 * WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION. 
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
 * INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
 * WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS 
 * BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE.  TO THE 
 * FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS 
 * IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF 
 * ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 * MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE 
 * TERMS. 
 */

/* 
 * Author: Miguel Meneses
 * Comments:
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef XC_HEADER_TEMPLATE_H
#define	XC_HEADER_TEMPLATE_H

#include <xc.h> // include processor files - each processor file is guarded.  

/* --COPYRIGHT--,BSD
 * Copyright (c) 2014, Texas Instruments Incorporated
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * *  Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * *  Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * *  Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * --/COPYRIGHT--*/

#include "global.h"


#define TDC1000_CS_EN	TDC1000_CSn_PxOUT &= ~TDC1000_CSn_PIN
#define TDC1000_CS_DIS	TDC1000_CSn_PxOUT |= TDC1000_CSn_PIN


/************************************************************
* TDC1000 REGISTER SET ADDRESSES
************************************************************/

#define TDC1000_CONFIG0_REG						0x00
#define TDC1000_CONFIG1_REG						0x01
#define TDC1000_CONFIG2_REG						0x02
#define TDC1000_CONFIG3_REG						0x03
#define TDC1000_CONFIG4_REG						0x04
#define TDC1000_TOF1_REG						0x05
#define TDC1000_TOF0_REG						0x06
#define TDC1000_ERROR_FLAGS_REG					0x07
#define TDC1000_TIMEOUT_REG						0x08
#define TDC1000_CLOCK_RATE_REG					0x09

// Useful definitions
#define TDC1000_WRITE_BIT						0x40

/*******************************/
/*** TDC1000 Config-0 (0x00) ***/
/*******************************/

#define TDC1000_NTX0							0x01
#define TDC1000_NTX1							0x02
#define TDC1000_NTX2							0x04
#define TDC1000_NTX3							0x08
#define TDC1000_NTX4							0x10
#define TDC1000_TX_FREQ_DIV0					0x20
#define TDC1000_TX_FREQ_DIV1					0x40
#define TDC1000_TX_FREQ_DIV2					0x80

#define TDC1000_NTX_0							0x00
#define TDC1000_NTX_1							TDC1000_NTX0
#define TDC1000_NTX_2							TDC1000_NTX1
#define TDC1000_NTX_3							TDC1000_NTX1 + TDC1000_NTX0
#define TDC1000_NTX_4							TDC1000_NTX2
#define TDC1000_NTX_5							TDC1000_NTX2 + TDC1000_NTX0
#define TDC1000_NTX_6							TDC1000_NTX2 + TDC1000_NTX1
#define TDC1000_NTX_7							TDC1000_NTX2 + TDC1000_NTX1 + TDC1000_NTX0
#define TDC1000_NTX_8							TDC1000_NTX3
#define TDC1000_NTX_9							TDC1000_NTX3 + TDC1000_NTX0
#define TDC1000_NTX_10							TDC1000_NTX3 + TDC1000_NTX1
#define TDC1000_NTX_11							TDC1000_NTX3 + TDC1000_NTX1 + TDC1000_NTX0
#define TDC1000_NTX_12							TDC1000_NTX3 + TDC1000_NTX2
#define TDC1000_NTX_13							TDC1000_NTX3 + TDC1000_NTX2 + TDC1000_NTX0
#define TDC1000_NTX_14							TDC1000_NTX3 + TDC1000_NTX2 + TDC1000_NTX1
#define TDC1000_NTX_15							TDC1000_NTX3 + TDC1000_NTX2 + TDC1000_NTX1 + TDC1000_NTX0
#define TDC1000_NTX_16							TDC1000_NTX4
#define TDC1000_NTX_17							TDC1000_NTX4 + TDC1000_NTX0
#define TDC1000_NTX_18							TDC1000_NTX4 + TDC1000_NTX1
#define TDC1000_NTX_19							TDC1000_NTX4 + TDC1000_NTX1 + TDC1000_NTX0
#define TDC1000_NTX_20							TDC1000_NTX4 + TDC1000_NTX2
#define TDC1000_NTX_21							TDC1000_NTX4 + TDC1000_NTX2 + TDC1000_NTX0
#define TDC1000_NTX_22							TDC1000_NTX4 + TDC1000_NTX2 + TDC1000_NTX1
#define TDC1000_NTX_23							TDC1000_NTX4 + TDC1000_NTX2 + TDC1000_NTX1 + TDC1000_NTX0
#define TDC1000_NTX_24							TDC1000_NTX4 + TDC1000_NTX3
#define TDC1000_NTX_25							TDC1000_NTX4 + TDC1000_NTX3 + TDC1000_NTX0
#define TDC1000_NTX_26							TDC1000_NTX4 + TDC1000_NTX3 + TDC1000_NTX1
#define TDC1000_NTX_27							TDC1000_NTX4 + TDC1000_NTX3 + TDC1000_NTX1 + TDC1000_NTX0
#define TDC1000_NTX_28							TDC1000_NTX4 + TDC1000_NTX3 + TDC1000_NTX2
#define TDC1000_NTX_29							TDC1000_NTX4 + TDC1000_NTX3 + TDC1000_NTX2 + TDC1000_NTX0
#define TDC1000_NTX_30							TDC1000_NTX4 + TDC1000_NTX3 + TDC1000_NTX2 + TDC1000_NTX1
#define TDC1000_NTX_31							TDC1000_NTX4 + TDC1000_NTX3 + TDC1000_NTX2 + TDC1000_NTX1 + TDC1000_NTX0

#define TDC1000_TX_FREQ_DIV_0					0x00
#define TDC1000_TX_FREQ_DIV_1					TDC1000_TX_FREQ_DIV0
#define TDC1000_TX_FREQ_DIV_2					TDC1000_TX_FREQ_DIV1
#define TDC1000_TX_FREQ_DIV_3					TDC1000_TX_FREQ_DIV1 + TDC1000_TX_FREQ_DIV0
#define TDC1000_TX_FREQ_DIV_4					TDC1000_TX_FREQ_DIV2
#define TDC1000_TX_FREQ_DIV_5					TDC1000_TX_FREQ_DIV2 + TDC1000_TX_FREQ_DIV0
#define TDC1000_TX_FREQ_DIV_6					TDC1000_TX_FREQ_DIV2 + TDC1000_TX_FREQ_DIV1
#define TDC1000_TX_FREQ_DIV_7					TDC1000_TX_FREQ_DIV2 + TDC1000_TX_FREQ_DIV1 + TDC1000_TX_FREQ_DIV0

#define TDC1000_NTX__1							TDC1000_NTX_0
#define TDC1000_NTX__2							TDC1000_NTX_1
#define TDC1000_NTX__3							TDC1000_NTX_2
#define TDC1000_NTX__4							TDC1000_NTX_3
#define TDC1000_NTX__5							TDC1000_NTX_4
#define TDC1000_NTX__6							TDC1000_NTX_5
#define TDC1000_NTX__7							TDC1000_NTX_6
#define TDC1000_NTX__8							TDC1000_NTX_7
#define TDC1000_NTX__9							TDC1000_NTX_8
#define TDC1000_NTX__10							TDC1000_NTX_9
#define TDC1000_NTX__11							TDC1000_NTX_10
#define TDC1000_NTX__12							TDC1000_NTX_11
#define TDC1000_NTX__13							TDC1000_NTX_12
#define TDC1000_NTX__14							TDC1000_NTX_13
#define TDC1000_NTX__15							TDC1000_NTX_14
#define TDC1000_NTX__16							TDC1000_NTX_15
#define TDC1000_NTX__17							TDC1000_NTX_16
#define TDC1000_NTX__18							TDC1000_NTX_17
#define TDC1000_NTX__19							TDC1000_NTX_18
#define TDC1000_NTX__20							TDC1000_NTX_19
#define TDC1000_NTX__21							TDC1000_NTX_20
#define TDC1000_NTX__22							TDC1000_NTX_21
#define TDC1000_NTX__23							TDC1000_NTX_22
#define TDC1000_NTX__24							TDC1000_NTX_23
#define TDC1000_NTX__25							TDC1000_NTX_24
#define TDC1000_NTX__26							TDC1000_NTX_25
#define TDC1000_NTX__27							TDC1000_NTX_26
#define TDC1000_NTX__28							TDC1000_NTX_27
#define TDC1000_NTX__29							TDC1000_NTX_28
#define TDC1000_NTX__30							TDC1000_NTX_29
#define TDC1000_NTX__31							TDC1000_NTX_30
#define TDC1000_NTX__32							TDC1000_NTX_31

#define TDC1000_TX_FREQ_DIV__2					TDC1000_TX_FREQ_DIV_0
#define TDC1000_TX_FREQ_DIV__4					TDC1000_TX_FREQ_DIV_1
#define TDC1000_TX_FREQ_DIV__8					TDC1000_TX_FREQ_DIV_2
#define TDC1000_TX_FREQ_DIV__16					TDC1000_TX_FREQ_DIV_3
#define TDC1000_TX_FREQ_DIV__32					TDC1000_TX_FREQ_DIV_4
#define TDC1000_TX_FREQ_DIV__64					TDC1000_TX_FREQ_DIV_5
#define TDC1000_TX_FREQ_DIV__128				TDC1000_TX_FREQ_DIV_6
#define TDC1000_TX_FREQ_DIV__256				TDC1000_TX_FREQ_DIV_7

/*******************************/
/*** TDC1000 Config-1 (0x01) ***/
/*******************************/

#define TDC1000_NRX0							0x01
#define TDC1000_NRX1							0x02
#define TDC1000_NRX2							0x04
#define TDC1000_NAVG0							0x08
#define TDC1000_NAVG1							0x10
#define TDC1000_NAVG2							0x20
// Reserved										0x40
// Reserved										0x80

#define TDC1000_NRX_0							0x00
#define TDC1000_NRX_1							TDC1000_NRX0
#define TDC1000_NRX_2							TDC1000_NRX1
#define TDC1000_NRX_3							TDC1000_NRX1 + TDC1000_NRX0
#define TDC1000_NRX_4							TDC1000_NRX2
#define TDC1000_NRX_5							TDC1000_NRX2 + TDC1000_NRX0
#define TDC1000_NRX_6							TDC1000_NRX2 + TDC1000_NRX1
#define TDC1000_NRX_7							TDC1000_NRX2 + TDC1000_NRX1 + TDC1000_NRX0

#define TDC1000_NAVG_0							0x00
#define TDC1000_NAVG_1							TDC1000_NAVG0
#define TDC1000_NAVG_2							TDC1000_NAVG1
#define TDC1000_NAVG_3							TDC1000_NAVG1 + TDC1000_NAVG0
#define TDC1000_NAVG_4							TDC1000_NAVG2
#define TDC1000_NAVG_5							TDC1000_NAVG2 + TDC1000_NAVG0
#define TDC1000_NAVG_6							TDC1000_NAVG2 + TDC1000_NAVG1
#define TDC1000_NAVG_7							TDC1000_NAVG2 + TDC1000_NAVG1 + TDC1000_NAVG0

#define TDC1000_NAVG__1							TDC1000_NAVG_0
#define TDC1000_NAVG__2							TDC1000_NAVG_1
#define TDC1000_NAVG__4							TDC1000_NAVG_2
#define TDC1000_NAVG__8							TDC1000_NAVG_3
#define TDC1000_NAVG__16						TDC1000_NAVG_4
#define TDC1000_NAVG__32						TDC1000_NAVG_5
#define TDC1000_NAVG__64						TDC1000_NAVG_6
#define TDC1000_NAVG__128						TDC1000_NAVG_7

/*******************************/
/*** TDC1000 Config-2 (0x02) ***/
/*******************************/
#define TDC1000_MEAS_MODE0						0x01
#define TDC1000_MEAS_MODE1						0x02
#define TDC1000_CH_SEL							0x04
#define TDC1000_MANUAL_CH_SEL					0x08
#define TDC1000_CH_SWP							0x01
#define TDC1000_DMP_EN							0x02
#define TDC1000_TOF_TEMP_MX_SEL					0x04
#define TDC1000_EXT_CMBUF_SEL					0x08

#define TDC1000_MEAS_MODE_0						0x00
#define TDC1000_MEAS_MODE_1						TDC1000_MEAS_MODE0
#define TDC1000_MEAS_MODE_2						TDC1000_MEAS_MODE1
// Reserved										TDC1000_MEAS_MODE1 + TDC1000_MEAS_MODE0

#define TDC1000_MEAS_MODE__INDEPENDENT			TDC1000_MEAS_MODE_0
#define TDC1000_MEAS_MODE__SINGLE				TDC1000_MEAS_MODE_1
#define TDC1000_MEAS_MODE__MULTI_CYCLE			TDC1000_MEAS_MODE_2

/*******************************/
/*** TDC1000 Config-3 (0x03) ***/
/*******************************/
#define TDC1000_ZEROCROSS_THLD0					0x01
#define TDC1000_ZEROCROSS_THLD1					0x02
#define TDC1000_ZEROCROSS_THLD2					0x04
#define TDC1000_BLANK_OUT_EN					0x08
#define TDC1000_TEMP_CLK_DIV_EN					0x10
#define TDC1000_TEMP_RTD500_SEL					0x20
#define TDC1000_TEMP_MODE						0x40
// Reserved										0x80

#define TDC1000_ZEROCROSS_THLD_0				0x00
#define TDC1000_ZEROCROSS_THLD_1				TDC1000_ZEROCROSS_THLD0
#define TDC1000_ZEROCROSS_THLD_2				TDC1000_ZEROCROSS_THLD1
#define TDC1000_ZEROCROSS_THLD_3				TDC1000_ZEROCROSS_THLD1 + TDC1000_ZEROCROSS_THLD0
#define TDC1000_ZEROCROSS_THLD_4				TDC1000_ZEROCROSS_THLD2
#define TDC1000_ZEROCROSS_THLD_5				TDC1000_ZEROCROSS_THLD2 + TDC1000_ZEROCROSS_THLD0
#define TDC1000_ZEROCROSS_THLD_6				TDC1000_ZEROCROSS_THLD2 + TDC1000_ZEROCROSS_THLD1
#define TDC1000_ZEROCROSS_THLD_7				TDC1000_ZEROCROSS_THLD2 + TDC1000_ZEROCROSS_THLD1 + TDC1000_ZEROCROSS_THLD0

#define TDC1000_ZEROCROSS_THLD__10mV			TDC1000_ZEROCROSS_THLD_0
#define TDC1000_ZEROCROSS_THLD__20mV			TDC1000_ZEROCROSS_THLD_1
#define TDC1000_ZEROCROSS_THLD__40mV			TDC1000_ZEROCROSS_THLD_2
#define TDC1000_ZEROCROSS_THLD__80mV			TDC1000_ZEROCROSS_THLD_3
#define TDC1000_ZEROCROSS_THLD__160mV			TDC1000_ZEROCROSS_THLD_4
#define TDC1000_ZEROCROSS_THLD__320mV			TDC1000_ZEROCROSS_THLD_5
#define TDC1000_ZEROCROSS_THLD__640mV			TDC1000_ZEROCROSS_THLD_6
#define TDC1000_ZEROCROSS_THLD__1280mV			TDC1000_ZEROCROSS_THLD_7

/*******************************/
/*** TDC1000 Config-4 (0x04) ***/
/*******************************/
#define TDC1000_TX_PH_SHIFT_POS0				0x01
#define TDC1000_TX_PH_SHIFT_POS1				0x02
#define TDC1000_TX_PH_SHIFT_POS2				0x04
#define TDC1000_TX_PH_SHIFT_POS3				0x08
#define TDC1000_TX_PH_SHIFT_POS4				0x10
#define TDC1000_TRIG_EDGE_POLARITY				0x20
#define TDC1000_RECEIVE_MODE					0x40
// Reserved										0x80

#define TDC1000_TX_PH_SHIFT_POS_0				0x00
#define TDC1000_TX_PH_SHIFT_POS_1				TDC1000_TX_PH_SHIFT_POS0
#define TDC1000_TX_PH_SHIFT_POS_2				TDC1000_TX_PH_SHIFT_POS1
#define TDC1000_TX_PH_SHIFT_POS_3				TDC1000_TX_PH_SHIFT_POS1 + TDC1000_TX_PH_SHIFT_POS0
#define TDC1000_TX_PH_SHIFT_POS_4				TDC1000_TX_PH_SHIFT_POS2
#define TDC1000_TX_PH_SHIFT_POS_5				TDC1000_TX_PH_SHIFT_POS2 + TDC1000_TX_PH_SHIFT_POS0
#define TDC1000_TX_PH_SHIFT_POS_6				TDC1000_TX_PH_SHIFT_POS2 + TDC1000_TX_PH_SHIFT_POS1
#define TDC1000_TX_PH_SHIFT_POS_7				TDC1000_TX_PH_SHIFT_POS2 + TDC1000_TX_PH_SHIFT_POS1 + TDC1000_TX_PH_SHIFT_POS0
#define TDC1000_TX_PH_SHIFT_POS_8				TDC1000_TX_PH_SHIFT_POS3
#define TDC1000_TX_PH_SHIFT_POS_9				TDC1000_TX_PH_SHIFT_POS3 + TDC1000_TX_PH_SHIFT_POS0
#define TDC1000_TX_PH_SHIFT_POS_10				TDC1000_TX_PH_SHIFT_POS3 + TDC1000_TX_PH_SHIFT_POS1
#define TDC1000_TX_PH_SHIFT_POS_11				TDC1000_TX_PH_SHIFT_POS3 + TDC1000_TX_PH_SHIFT_POS1 + TDC1000_TX_PH_SHIFT_POS0
#define TDC1000_TX_PH_SHIFT_POS_12				TDC1000_TX_PH_SHIFT_POS3 + TDC1000_TX_PH_SHIFT_POS2
#define TDC1000_TX_PH_SHIFT_POS_13				TDC1000_TX_PH_SHIFT_POS3 + TDC1000_TX_PH_SHIFT_POS2 + TDC1000_TX_PH_SHIFT_POS0
#define TDC1000_TX_PH_SHIFT_POS_14				TDC1000_TX_PH_SHIFT_POS3 + TDC1000_TX_PH_SHIFT_POS2 + TDC1000_TX_PH_SHIFT_POS1
#define TDC1000_TX_PH_SHIFT_POS_15				TDC1000_TX_PH_SHIFT_POS3 + TDC1000_TX_PH_SHIFT_POS2 + TDC1000_TX_PH_SHIFT_POS1 + TDC1000_TX_PH_SHIFT_POS0
#define TDC1000_TX_PH_SHIFT_POS_16				TDC1000_TX_PH_SHIFT_POS4
#define TDC1000_TX_PH_SHIFT_POS_17				TDC1000_TX_PH_SHIFT_POS4 + TDC1000_TX_PH_SHIFT_POS0
#define TDC1000_TX_PH_SHIFT_POS_18				TDC1000_TX_PH_SHIFT_POS4 + TDC1000_TX_PH_SHIFT_POS1
#define TDC1000_TX_PH_SHIFT_POS_19				TDC1000_TX_PH_SHIFT_POS4 + TDC1000_TX_PH_SHIFT_POS1 + TDC1000_TX_PH_SHIFT_POS0
#define TDC1000_TX_PH_SHIFT_POS_20				TDC1000_TX_PH_SHIFT_POS4 + TDC1000_TX_PH_SHIFT_POS2
#define TDC1000_TX_PH_SHIFT_POS_21				TDC1000_TX_PH_SHIFT_POS4 + TDC1000_TX_PH_SHIFT_POS2 + TDC1000_TX_PH_SHIFT_POS0
#define TDC1000_TX_PH_SHIFT_POS_22				TDC1000_TX_PH_SHIFT_POS4 + TDC1000_TX_PH_SHIFT_POS2 + TDC1000_TX_PH_SHIFT_POS1
#define TDC1000_TX_PH_SHIFT_POS_23				TDC1000_TX_PH_SHIFT_POS4 + TDC1000_TX_PH_SHIFT_POS2 + TDC1000_TX_PH_SHIFT_POS1 + TDC1000_TX_PH_SHIFT_POS0
#define TDC1000_TX_PH_SHIFT_POS_24				TDC1000_TX_PH_SHIFT_POS4 + TDC1000_TX_PH_SHIFT_POS3
#define TDC1000_TX_PH_SHIFT_POS_25				TDC1000_TX_PH_SHIFT_POS4 + TDC1000_TX_PH_SHIFT_POS3 + TDC1000_TX_PH_SHIFT_POS0
#define TDC1000_TX_PH_SHIFT_POS_26				TDC1000_TX_PH_SHIFT_POS4 + TDC1000_TX_PH_SHIFT_POS3 + TDC1000_TX_PH_SHIFT_POS1
#define TDC1000_TX_PH_SHIFT_POS_27				TDC1000_TX_PH_SHIFT_POS4 + TDC1000_TX_PH_SHIFT_POS3 + TDC1000_TX_PH_SHIFT_POS1 + TDC1000_TX_PH_SHIFT_POS0
#define TDC1000_TX_PH_SHIFT_POS_28				TDC1000_TX_PH_SHIFT_POS4 + TDC1000_TX_PH_SHIFT_POS3 + TDC1000_TX_PH_SHIFT_POS2
#define TDC1000_TX_PH_SHIFT_POS_29				TDC1000_TX_PH_SHIFT_POS4 + TDC1000_TX_PH_SHIFT_POS3 + TDC1000_TX_PH_SHIFT_POS2 + TDC1000_TX_PH_SHIFT_POS0
#define TDC1000_TX_PH_SHIFT_POS_30				TDC1000_TX_PH_SHIFT_POS4 + TDC1000_TX_PH_SHIFT_POS3 + TDC1000_TX_PH_SHIFT_POS2 + TDC1000_TX_PH_SHIFT_POS1
#define TDC1000_TX_PH_SHIFT_POS_31				TDC1000_TX_PH_SHIFT_POS4 + TDC1000_TX_PH_SHIFT_POS3 + TDC1000_TX_PH_SHIFT_POS2 + TDC1000_TX_PH_SHIFT_POS1 + TDC1000_TX_PH_SHIFT_POS0

#define TDC1000_TRIG_EDGE_POLARITY__RISING		0x00
#define TDC1000_TRIG_EDGE_POLARITY__FALLING		TDC1000_TRIG_EDGE_POLARITY

#define TDC1000_RECEIVE_MODE__SINGLE			0x00
#define TDC1000_RECEIVE_MODE__BURST				TDC1000_RECEIVE_MODE

/****************************/
/*** TDC1000 TOF-1 (0x05) ***/
/****************************/

#define TDC1000_TOF_EXP8						0x01
#define TDC1000_TOF_EXP9						0x02
#define TDC1000_LNA_FB							0x04
#define TDC1000_LNA_BYP							0x08
#define TDC1000_PGA_BYP							0x10
#define TDC1000_PGA_GAIN0						0x20
#define TDC1000_PGA_GAIN1						0x40
#define TDC1000_PGA_GAIN2						0x80

#define TDC1000_PGA_GAIN_0						0x00
#define TDC1000_PGA_GAIN_1						TDC1000_PGA_GAIN0
#define TDC1000_PGA_GAIN_2						TDC1000_PGA_GAIN1
#define TDC1000_PGA_GAIN_3						TDC1000_PGA_GAIN1 + TDC1000_PGA_GAIN0
#define TDC1000_PGA_GAIN_4						TDC1000_PGA_GAIN2
#define TDC1000_PGA_GAIN_5						TDC1000_PGA_GAIN2 + TDC1000_PGA_GAIN0
#define TDC1000_PGA_GAIN_6						TDC1000_PGA_GAIN2 + TDC1000_PGA_GAIN1
#define TDC1000_PGA_GAIN_7						TDC1000_PGA_GAIN2 + TDC1000_PGA_GAIN1 + TDC1000_PGA_GAIN0

#define TDC1000_PGA_GAIN__0dB					TDC1000_PGA_GAIN_0
#define TDC1000_PGA_GAIN__3dB					TDC1000_PGA_GAIN_1
#define TDC1000_PGA_GAIN__6dB					TDC1000_PGA_GAIN_2
#define TDC1000_PGA_GAIN__9dB					TDC1000_PGA_GAIN_3
#define TDC1000_PGA_GAIN__12dB					TDC1000_PGA_GAIN_4
#define TDC1000_PGA_GAIN__15dB					TDC1000_PGA_GAIN_5
#define TDC1000_PGA_GAIN__18dB					TDC1000_PGA_GAIN_6
#define TDC1000_PGA_GAIN__21dB					TDC1000_PGA_GAIN_7

#define TDC1000_LNA_FB__CAPACITIVE				0x00
#define TDC1000_LNA_FB__RESISTIVE				TDC1000_LNA_FB

/****************************/
/*** TDC1000 TOF-0 (0x06) ***/
/****************************/
// TOF_EXP = 10 bit number
// Bit 8-9 = TDC1000_TOF_EXP8 and TDC1000_TOF_EXP9 of Config-5
// Bit 0-7 = 8 bit number of Config-6

/**********************************/
/*** TDC1000 Error Flags (0x07) ***/
/**********************************/

#define TDC1000_ERR_SIG_HIGH					0x01
#define TDC1000_ERR_NO_SIG						0x02
#define TDC1000_ERR_SIG_WEAK					0x04
// Reserved										0x08
// Reserved										0x10
// Reserved										0x20
// Reserved										0x40
// Reserved										0x80

/******************************/
/*** TDC1000 Timeout (0x08) ***/
/******************************/

#define TDC1000_TOF_TIMOUT_CTRL0				0x01
#define TDC1000_TOF_TIMOUT_CTRL1				0x02
#define TDC1000_ECHO_TIMEOUT_DIS				0x04
#define TDC1000_SHORT_TOF_BLANK_PERIOD0			0x08
#define TDC1000_SHORT_TOF_BLANK_PERIOD1			0x10
#define TDC1000_SHORT_TOF_BLANK_PERIOD2			0x20
#define TDC1000_FORCE_SHORT_TOF					0x40
// Reserved										0x80

#define TDC1000_TOF_TIMOUT_CTRL_0				0x00
#define TDC1000_TOF_TIMOUT_CTRL_1				TDC1000_TOF_TIMOUT_CTRL0
#define TDC1000_TOF_TIMOUT_CTRL_2				TDC1000_TOF_TIMOUT_CTRL1
#define TDC1000_TOF_TIMOUT_CTRL_3				TDC1000_TOF_TIMOUT_CTRL1 + TDC1000_TOF_TIMOUT_CTRL0

#define TDC1000_SHORT_TOF_BLANK_PERIOD_0		0x00
#define TDC1000_SHORT_TOF_BLANK_PERIOD_1		TDC1000_SHORT_TOF_BLANK_PERIOD0
#define TDC1000_SHORT_TOF_BLANK_PERIOD_2		TDC1000_SHORT_TOF_BLANK_PERIOD1
#define TDC1000_SHORT_TOF_BLANK_PERIOD_3		TDC1000_SHORT_TOF_BLANK_PERIOD1 + TDC1000_SHORT_TOF_BLANK_PERIOD0
#define TDC1000_SHORT_TOF_BLANK_PERIOD_4		TDC1000_SHORT_TOF_BLANK_PERIOD2
#define TDC1000_SHORT_TOF_BLANK_PERIOD_5		TDC1000_SHORT_TOF_BLANK_PERIOD2 + TDC1000_SHORT_TOF_BLANK_PERIOD0
#define TDC1000_SHORT_TOF_BLANK_PERIOD_6		TDC1000_SHORT_TOF_BLANK_PERIOD2 + TDC1000_SHORT_TOF_BLANK_PERIOD1
#define TDC1000_SHORT_TOF_BLANK_PERIOD_7		TDC1000_SHORT_TOF_BLANK_PERIOD2 + TDC1000_SHORT_TOF_BLANK_PERIOD1 + TDC1000_SHORT_TOF_BLANK_PERIOD0

#define TDC1000_TOF_TIMOUT_CTRL__16uS			TDC1000_TOF_TIMOUT_CTRL_0
#define TDC1000_TOF_TIMOUT_CTRL__32uS			TDC1000_TOF_TIMOUT_CTRL_1
#define TDC1000_TOF_TIMOUT_CTRL__64uS			TDC1000_TOF_TIMOUT_CTRL_2
#define TDC1000_TOF_TIMOUT_CTRL__128uS			TDC1000_TOF_TIMOUT_CTRL_3

#define TDC1000_SHORT_TOF_BLANK_PERIOD__1uS		TDC1000_SHORT_TOF_BLANK_PERIOD_0
#define TDC1000_SHORT_TOF_BLANK_PERIOD__2uS		TDC1000_SHORT_TOF_BLANK_PERIOD_1
#define TDC1000_SHORT_TOF_BLANK_PERIOD__4uS		TDC1000_SHORT_TOF_BLANK_PERIOD_2
#define TDC1000_SHORT_TOF_BLANK_PERIOD__8uS		TDC1000_SHORT_TOF_BLANK_PERIOD_3
#define TDC1000_SHORT_TOF_BLANK_PERIOD__16uS	TDC1000_SHORT_TOF_BLANK_PERIOD_4
#define TDC1000_SHORT_TOF_BLANK_PERIOD__32uS	TDC1000_SHORT_TOF_BLANK_PERIOD_5
#define TDC1000_SHORT_TOF_BLANK_PERIOD__64uS	TDC1000_SHORT_TOF_BLANK_PERIOD_6
#define TDC1000_SHORT_TOF_BLANK_PERIOD__128uS	TDC1000_SHORT_TOF_BLANK_PERIOD_7

/*********************************/
/*** TDC1000 Clock Rate (0x09) ***/
/*********************************/

#define TDC1000_AUTOZERO_PERIOD0				0x01
#define TDC1000_AUTOZERO_PERIOD1				0x02
#define TDC1000_CLK_16M							0x04
// Reserved										0x08
// Reserved										0x10
// Reserved										0x20
// Reserved										0x40
// Reserved										0x80

#define TDC1000_AUTOZERO_PERIOD_0				0x00
#define TDC1000_AUTOZERO_PERIOD_1				TDC1000_AUTOZERO_PERIOD0
#define TDC1000_AUTOZERO_PERIOD_2				TDC1000_AUTOZERO_PERIOD1
#define TDC1000_AUTOZERO_PERIOD_3				TDC1000_AUTOZERO_PERIOD1 + TDC1000_AUTOZERO_PERIOD0

#define TDC1000_AUTOZERO_PERIOD__8X				TDC1000_AUTOZERO_PERIOD_0
#define TDC1000_AUTOZERO_PERIOD__16X			TDC1000_AUTOZERO_PERIOD_1
#define TDC1000_AUTOZERO_PERIOD__32X			TDC1000_AUTOZERO_PERIOD_2
#define TDC1000_AUTOZERO_PERIOD__64X			TDC1000_AUTOZERO_PERIOD_3


void		TDC_SPISetup(void);

void		TDC1000_SPIByteWriteReg(uint8_t, uint8_t);
uint8_t		TDC1000_SPIByteReadReg(uint8_t);



#endif	/* XC_HEADER_TEMPLATE_H */

