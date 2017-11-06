/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs 

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs  - 1.45
        Device            :  PIC16F18855
        Driver Version    :  2.00
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.40
*/

/*
    (c) 2016 Microchip Technology Inc. and its subsidiaries. You may use this
    software and any derivatives exclusively with Microchip products.

    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
    WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
    PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION
    WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION.

    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
    BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
    FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
    ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
    THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.

    MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE
    TERMS.
*/

#include "mcc_generated_files/mcc.h"

uint8_t data[513];
uint16_t address = 1;
int16_t currentByte = -1;

void interrupt EUSART_Receive_ISR(void)
{
    TOGGLE_SetHigh();
    if(OERR)
    {
        // EUSART error - restart

        CREN = 0;
        CREN = 1;
    }
    
    if(FERR)
    {
        currentByte = 0;
    }
    while(RCIF)
    {
        uint8_t temp = RC1REG;

        if(currentByte >= 0)
        {
            data[currentByte++] = temp;
        }

        if(currentByte > 513)
        {
            PWM1_LoadDutyValue((255 - data[address + 1]) << 2);
            PWM2_LoadDutyValue((255 - data[address + 2]) << 2);
            PWM3_LoadDutyValue((255 - data[address + 3]) << 2);

            currentByte = -1;
        }
    }
 
    TOGGLE_SetLow();
}

void main(void)
{
    // initialize the device
    SYSTEM_Initialize();
    
    RCIE = 1;
    PEIE = 1;
    GIE = 1;
    
    IDLEN = 1;

    while (1)
    {
        SLEEP();
    }
}
/**
 End of File
*/