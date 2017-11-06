/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : PwmLdd3.h
**     Project     : dmx
**     Processor   : MKE04Z8VWJ4
**     Component   : PWM_LDD
**     Version     : Component 01.014, Driver 01.03, CPU db: 3.00.000
**     Repository  : Kinetis
**     Compiler    : GNU C Compiler
**     Date/Time   : 2017-10-18, 02:18, # CodeGen: 49
**     Abstract    :
**          This component implements a pulse-width modulation generator
**          that generates signal with variable duty and fixed cycle.
**          This PWM component provides a high level API for unified
**          hardware access to various timer devices using the TimerUnit
**          component.
**     Settings    :
**          Component name                                 : PwmLdd3
**          Period device                                  : FTM2_MOD
**          Duty device                                    : FTM2_C2V
**          Output pin                                     : PTC2/KBI1_P4/FTM2_CH2/ADC0_SE10
**          Output pin signal                              : 
**          Counter                                        : FTM2_CNT
**          Interrupt service/event                        : Disabled
**          Period                                         : 1 ms
**          Starting pulse width                           : 0 ms
**          Initial polarity                               : low
**          Initialization                                 : 
**            Enabled in init. code                        : yes
**            Auto initialization                          : yes
**            Event mask                                   : 
**              OnEnd                                      : Disabled
**          CPU clock/configuration selection              : 
**            Clock configuration 0                        : This component enabled
**            Clock configuration 1                        : This component disabled
**            Clock configuration 2                        : This component disabled
**            Clock configuration 3                        : This component disabled
**            Clock configuration 4                        : This component disabled
**            Clock configuration 5                        : This component disabled
**            Clock configuration 6                        : This component disabled
**            Clock configuration 7                        : This component disabled
**          Referenced components                          : 
**            Linked component                             : TU1
**     Contents    :
**         Init      - LDD_TDeviceData* PwmLdd3_Init(LDD_TUserData *UserDataPtr);
**         SetRatio8 - LDD_TError PwmLdd3_SetRatio8(LDD_TDeviceData *DeviceDataPtr, uint8_t Ratio);
**
**     Copyright : 1997 - 2015 Freescale Semiconductor, Inc. 
**     All Rights Reserved.
**     
**     Redistribution and use in source and binary forms, with or without modification,
**     are permitted provided that the following conditions are met:
**     
**     o Redistributions of source code must retain the above copyright notice, this list
**       of conditions and the following disclaimer.
**     
**     o Redistributions in binary form must reproduce the above copyright notice, this
**       list of conditions and the following disclaimer in the documentation and/or
**       other materials provided with the distribution.
**     
**     o Neither the name of Freescale Semiconductor, Inc. nor the names of its
**       contributors may be used to endorse or promote products derived from this
**       software without specific prior written permission.
**     
**     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**     ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**     WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**     ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**     ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**     (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**     SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**     
**     http: www.freescale.com
**     mail: support@freescale.com
** ###################################################################*/
/*!
** @file PwmLdd3.h
** @version 01.03
** @brief
**          This component implements a pulse-width modulation generator
**          that generates signal with variable duty and fixed cycle.
**          This PWM component provides a high level API for unified
**          hardware access to various timer devices using the TimerUnit
**          component.
*/         
/*!
**  @addtogroup PwmLdd3_module PwmLdd3 module documentation
**  @{
*/         

#ifndef __PwmLdd3_H
#define __PwmLdd3_H

/* MODULE PwmLdd3. */

/* Include shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
/* Include inherited beans */
#include "TU1.h"
#include "FTM_PDD.h"

#include "Cpu.h"

#ifdef __cplusplus
extern "C" {
#endif 


#define PwmLdd3_PERIOD_VALUE 0x1770UL  /* Initial period value in ticks of the timer. */
#define PwmLdd3_PERIOD_VALUE_0 0x1770UL /* Period value in ticks of the timer in clock configuration 0. */

/*! Peripheral base address of a device allocated by the component. This constant can be used directly in PDD macros. */
#define PwmLdd3_PRPH_BASE_ADDRESS  0x4003A000U
  
/*! Device data structure pointer used when auto initialization property is enabled. This constant can be passed as a first parameter to all component's methods. */
#define PwmLdd3_DeviceData  ((LDD_TDeviceData *)PE_LDD_GetDeviceStructure(PE_LDD_COMPONENT_PwmLdd3_ID))

/* Methods configuration constants - generated for all enabled component's methods */
#define PwmLdd3_Init_METHOD_ENABLED    /*!< Init method of the component PwmLdd3 is enabled (generated) */
#define PwmLdd3_SetRatio8_METHOD_ENABLED /*!< SetRatio8 method of the component PwmLdd3 is enabled (generated) */

/* Events configuration constants - generated for all enabled component's events */



/*
** ===================================================================
**     Method      :  PwmLdd3_Init (component PWM_LDD)
*/
/*!
**     @brief
**         Initializes the device. Allocates memory for the device data
**         structure, allocates interrupt vectors and sets interrupt
**         priority, sets pin routing, sets timing, etc. If the
**         property ["Enable in init. code"] is set to "yes" value then
**         the device is also enabled (see the description of the
**         [Enable] method). In this case the [Enable] method is not
**         necessary and needn't to be generated. This method can be
**         called only once. Before the second call of Init the [Deinit]
**         must be called first.
**     @param
**         UserDataPtr     - Pointer to the user or
**                           RTOS specific data. This pointer will be
**                           passed as an event or callback parameter.
**     @return
**                         - Pointer to the dynamically allocated private
**                           structure or NULL if there was an error.
*/
/* ===================================================================*/
LDD_TDeviceData* PwmLdd3_Init(LDD_TUserData *UserDataPtr);

/*
** ===================================================================
**     Method      :  PwmLdd3_SetRatio8 (component PWM_LDD)
*/
/*!
**     @brief
**         This method sets a new duty-cycle ratio. Ratio is expressed
**         as an 8-bit unsigned integer number. 0 - FF value is
**         proportional to ratio 0 - 100%. The method is available
**         only if it is not selected list of predefined values in
**         [Starting pulse width] property. 
**         Note: Calculated duty depends on the timer capabilities and
**         on the selected period.
**     @param
**         DeviceDataPtr   - Device data structure
**                           pointer returned by [Init] method.
**     @param
**         Ratio           - Ratio to set. 0 - 255 value is
**                           proportional to ratio 0 - 100%
**     @return
**                         - Error code, possible codes:
**                           ERR_OK - OK
**                           ERR_SPEED - The component does not work in
**                           the active clock configuration
*/
/* ===================================================================*/
LDD_TError PwmLdd3_SetRatio8(LDD_TDeviceData *DeviceDataPtr, uint8_t Ratio);

/* END PwmLdd3. */

#ifdef __cplusplus
}  /* extern "C" */
#endif 

#endif 
/* ifndef __PwmLdd3_H */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.5 [05.21]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
