/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : PE_Const.h
**     Project     : toggle
**     Processor   : MKE04Z8VWJ4
**     Component   : PE_Const
**     Version     : Driver 01.00
**     Compiler    : GNU C Compiler
**     Date/Time   : 2017-08-03, 18:56, # CodeGen: 2
**     Abstract    :
**         This component "PE_Const" contains internal definitions
**         of the constants.
**     Contents    :
**         No public methods
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
** @file PE_Const.h
** @version 01.00
** @brief
**         This component "PE_Const" contains internal definitions
**         of the constants.
*/         
/*!
**  @addtogroup PE_Const_module PE_Const module documentation
**  @{
*/         

#ifndef __PE_Const_H
#define __PE_Const_H


/* Reset cause constants */
#define RSTSRC_WAKEUP     0x01U        /*!< LLWU module wakeup reset */
#define RSTSRC_LVD        0x02U        /*!< Low-voltage detect reset */
#define RSTSRC_LOC        0x04U        /*!< Loss-of-clock reset      */
#define RSTSRC_COP        0x20U        /*!< Watchdog reset           */
#define RSTSRC_WDOG       0x20U        /*!< Watchdog reset           */
#define RSTSRC_PIN        0x40U        /*!< External pin reset       */
#define RSTSRC_POR        0x80U        /*!< Power-on reset          */
#define RSTSRC_JTAG       0x0100U      /*!< JTAG reset pin          */
#define RSTSRC_LOCKUP     0x0200U      /*!< Core Lock-up reset      */
#define RSTSRC_SW         0x0400U      /*!< Software reset          */
#define RSTSRC_MDM_AP     0x0800U      /*!< Reset caused by host debugger system   */
#define RSTSRC_SACKERR    0x2000U      /*!< Stop Mode Acknowledge Error Reset      */


/* Low voltage interrupt cause constants */
#define LVDSRC_LVD        0x01U        /*!< Low voltage detect       */
#define LVDSRC_LVW        0x02U        /*!< Low-voltage warning      */

#endif /* _PE_Const_H */
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
