/*
 * USART.h

 *
 * Created on: 15/2/2020
 *      Author: ABBAS SALAH HATATA
 */

#ifndef USART_H
#define USART_H
/***************************************INCLUDE_LIBREARY****************************************/
#include "../DIO_DRIVER_ABBAS/STD.h"
#include "../DIO_DRIVER_ABBAS/PLATFORM_TYPES.h"
#include "../DIO_DRIVER_ABBAS/COMPILER.h"
#include "USART_REGS.h"
#include "USART_CFG.h"
/**************************************#_DEFINES***********************************************/
//ACSSES UBRR_REG
#define BAUD_PRESCALE (((Fosc / (USART_BAUDRATE * 16UL))) - 1)


/***************************************function_prototypes************************************/
//INITIALIZE USART
void INIT_USART(void);
//TRANSMITTE DATA
void TRANSMITER_USART(uint8 DATA);
//RECEIVED DATA
uint8 RECEIVER_USART(void);
//FLUSHER USART
void FLUSHER_USART(void);
//TRANSIMETTER THE STRING
void TRANSMITTER_STRING_USART (uint8 *STRING);
//READ_ACSSES_UCSRC_REG
uint8 USART_READUCSRC (void);

#endif /* USART_H */
