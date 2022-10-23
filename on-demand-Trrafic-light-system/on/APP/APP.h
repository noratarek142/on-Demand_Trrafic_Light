/*
 * APP.h
 *
 *  Created on: Oct 17, 2022
 *      Author: norat
 */

#ifndef APP_APP_H_
#define APP_APP_H_

/**************************************************************************************************************************************************/
/*   Includes                                                                                                                                    */
/**************************************************************************************************************************************************/
#include"MCAL/DIO/DIO.h"
#include"MCAL/TIMER/TIMER.h"
#include"MCAL/INTERRUPT/INTERRUPT.h"
#include"BitMath.h"
#include"ECUAL/Buttons/BUTTONS.h"
#include"ECUAL/LED/LED.h"

/**************************************************************************************************************************************************/
/*   PROTOTYPES                                                                                                                                    */
/**************************************************************************************************************************************************/
void APP_Void_AppInit(void);
void APP_Void_AppStart(void);
void APP_Void_BlinkingYellow (void);
void APP_Void_Allowped (void);


#endif /* APP_APP_H_ */
