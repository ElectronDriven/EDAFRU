/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.8
        Device            :  PIC18F25K80
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.36 and above
        MPLAB 	          :  MPLAB X 6.00	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set WIDEBAND_UR aliases
#define WIDEBAND_UR_TRIS                 TRISAbits.TRISA0
#define WIDEBAND_UR_LAT                  LATAbits.LATA0
#define WIDEBAND_UR_PORT                 PORTAbits.RA0
#define WIDEBAND_UR_ANS                  ANCON0bits.ANSEL0
#define WIDEBAND_UR_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define WIDEBAND_UR_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define WIDEBAND_UR_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define WIDEBAND_UR_GetValue()           PORTAbits.RA0
#define WIDEBAND_UR_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define WIDEBAND_UR_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define WIDEBAND_UR_SetAnalogMode()      do { ANCON0bits.ANSEL0 = 1; } while(0)
#define WIDEBAND_UR_SetDigitalMode()     do { ANCON0bits.ANSEL0 = 0; } while(0)

// get/set WIDEBAND_UA aliases
#define WIDEBAND_UA_TRIS                 TRISAbits.TRISA1
#define WIDEBAND_UA_LAT                  LATAbits.LATA1
#define WIDEBAND_UA_PORT                 PORTAbits.RA1
#define WIDEBAND_UA_ANS                  ANCON0bits.ANSEL1
#define WIDEBAND_UA_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define WIDEBAND_UA_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define WIDEBAND_UA_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define WIDEBAND_UA_GetValue()           PORTAbits.RA1
#define WIDEBAND_UA_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define WIDEBAND_UA_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define WIDEBAND_UA_SetAnalogMode()      do { ANCON0bits.ANSEL1 = 1; } while(0)
#define WIDEBAND_UA_SetDigitalMode()     do { ANCON0bits.ANSEL1 = 0; } while(0)

// get/set VSENSE aliases
#define VSENSE_TRIS                 TRISAbits.TRISA5
#define VSENSE_LAT                  LATAbits.LATA5
#define VSENSE_PORT                 PORTAbits.RA5
#define VSENSE_ANS                  ANCON0bits.ANSEL4
#define VSENSE_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define VSENSE_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define VSENSE_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define VSENSE_GetValue()           PORTAbits.RA5
#define VSENSE_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define VSENSE_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define VSENSE_SetAnalogMode()      do { ANCON0bits.ANSEL4 = 1; } while(0)
#define VSENSE_SetDigitalMode()     do { ANCON0bits.ANSEL4 = 0; } while(0)

// get/set RB2 procedures
#define RB2_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define RB2_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define RB2_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define RB2_GetValue()              PORTBbits.RB2
#define RB2_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define RB2_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define RB2_SetPullup()             do { WPUBbits.WPUB2 = 1; } while(0)
#define RB2_ResetPullup()           do { WPUBbits.WPUB2 = 0; } while(0)

// get/set RB3 procedures
#define RB3_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define RB3_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define RB3_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define RB3_GetValue()              PORTBbits.RB3
#define RB3_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define RB3_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define RB3_SetPullup()             do { WPUBbits.WPUB3 = 1; } while(0)
#define RB3_ResetPullup()           do { WPUBbits.WPUB3 = 0; } while(0)

// get/set CAN_SLEEP aliases
#define CAN_SLEEP_TRIS                 TRISBbits.TRISB4
#define CAN_SLEEP_LAT                  LATBbits.LATB4
#define CAN_SLEEP_PORT                 PORTBbits.RB4
#define CAN_SLEEP_WPU                  WPUBbits.WPUB4
#define CAN_SLEEP_ANS                  ANCON1bits.ANSEL9
#define CAN_SLEEP_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define CAN_SLEEP_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define CAN_SLEEP_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define CAN_SLEEP_GetValue()           PORTBbits.RB4
#define CAN_SLEEP_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define CAN_SLEEP_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define CAN_SLEEP_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define CAN_SLEEP_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define CAN_SLEEP_SetAnalogMode()      do { ANCON1bits.ANSEL9 = 1; } while(0)
#define CAN_SLEEP_SetDigitalMode()     do { ANCON1bits.ANSEL9 = 0; } while(0)

// get/set LIN_SLEEP aliases
#define LIN_SLEEP_TRIS                 TRISBbits.TRISB5
#define LIN_SLEEP_LAT                  LATBbits.LATB5
#define LIN_SLEEP_PORT                 PORTBbits.RB5
#define LIN_SLEEP_WPU                  WPUBbits.WPUB5
#define LIN_SLEEP_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define LIN_SLEEP_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define LIN_SLEEP_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define LIN_SLEEP_GetValue()           PORTBbits.RB5
#define LIN_SLEEP_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define LIN_SLEEP_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define LIN_SLEEP_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define LIN_SLEEP_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)

// get/set RB6 procedures
#define RB6_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define RB6_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define RB6_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define RB6_GetValue()              PORTBbits.RB6
#define RB6_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define RB6_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define RB6_SetPullup()             do { WPUBbits.WPUB6 = 1; } while(0)
#define RB6_ResetPullup()           do { WPUBbits.WPUB6 = 0; } while(0)

// get/set RB7 procedures
#define RB7_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define RB7_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define RB7_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define RB7_GetValue()              PORTBbits.RB7
#define RB7_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define RB7_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define RB7_SetPullup()             do { WPUBbits.WPUB7 = 1; } while(0)
#define RB7_ResetPullup()           do { WPUBbits.WPUB7 = 0; } while(0)

// get/set EEPROM_W aliases
#define EEPROM_W_TRIS                 TRISCbits.TRISC0
#define EEPROM_W_LAT                  LATCbits.LATC0
#define EEPROM_W_PORT                 PORTCbits.RC0
#define EEPROM_W_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define EEPROM_W_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define EEPROM_W_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define EEPROM_W_GetValue()           PORTCbits.RC0
#define EEPROM_W_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define EEPROM_W_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)

// get/set EEPROM_S aliases
#define EEPROM_S_TRIS                 TRISCbits.TRISC1
#define EEPROM_S_LAT                  LATCbits.LATC1
#define EEPROM_S_PORT                 PORTCbits.RC1
#define EEPROM_S_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define EEPROM_S_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define EEPROM_S_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define EEPROM_S_GetValue()           PORTCbits.RC1
#define EEPROM_S_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define EEPROM_S_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)

// get/set WIDEBAND_SPI1_NSS aliases
#define WIDEBAND_SPI1_NSS_TRIS                 TRISCbits.TRISC2
#define WIDEBAND_SPI1_NSS_LAT                  LATCbits.LATC2
#define WIDEBAND_SPI1_NSS_PORT                 PORTCbits.RC2
#define WIDEBAND_SPI1_NSS_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define WIDEBAND_SPI1_NSS_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define WIDEBAND_SPI1_NSS_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define WIDEBAND_SPI1_NSS_GetValue()           PORTCbits.RC2
#define WIDEBAND_SPI1_NSS_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define WIDEBAND_SPI1_NSS_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)

// get/set RC3 procedures
#define RC3_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define RC3_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define RC3_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define RC3_GetValue()              PORTCbits.RC3
#define RC3_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define RC3_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)

// get/set RC4 procedures
#define RC4_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define RC4_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define RC4_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define RC4_GetValue()              PORTCbits.RC4
#define RC4_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define RC4_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)

// get/set RC5 procedures
#define RC5_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define RC5_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define RC5_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define RC5_GetValue()              PORTCbits.RC5
#define RC5_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define RC5_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)

// get/set RC6 procedures
#define RC6_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define RC6_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define RC6_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define RC6_GetValue()              PORTCbits.RC6
#define RC6_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define RC6_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)

// get/set RC7 procedures
#define RC7_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define RC7_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define RC7_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define RC7_GetValue()              PORTCbits.RC7
#define RC7_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define RC7_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/