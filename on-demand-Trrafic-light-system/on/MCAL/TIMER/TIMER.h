/*
 * TIMER.h
 *
 *  Created on: Oct 17, 2022
 *      Author: norat
 */

#ifndef MCAL_TIMER_TIMER_H_
#define MCAL_TIMER_TIMER_H_

/**************************************************************************************************************************************************/
/*   Includes                                                                                                                                    */
/**************************************************************************************************************************************************/
#include"DIO/DIO.h"
#include"UTILITIES/BitMath.h"
#include "UTILITIES/STD.h"

/**************************************************************************************************************************************************/
/*   Defines                                                                                                                                    */
/**************************************************************************************************************************************************/
#define TCCR0_REG     *((volatile u8*)0x53)
#define TCNT0_REG     *((volatile u8*)0x52)
#define OCR0_REG      *((volatile u8*)0x5C)
#define TIMSK_REG     *((volatile u8*)0x59)
#define TIFR_REG      *((volatile u8*)0x58)
#define SREG_REG      *((volatile u8*)0x5f)

/**************************************************************************************************************************************************/
/*   PROTOTYPES                                                                                                                                    */
/**************************************************************************************************************************************************/

void MCAL_Void_Timer0_Init();
void MCAL_Void_Timer0_delay(int);

#endif /* MCAL_TIMER_TIMER_H_ */
