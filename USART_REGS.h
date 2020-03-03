/*
 * USART_REGS.h

 *
 *   Created on: 15/2/2020
 *      Author: ABBAS SALAH HATATA
 */

#ifndef USART_REGS_H
#define USART_REGS_H
/*******************************************#DEFINE***********************************************/

/***********************************DEFINITION_OF_USART_REGS**************************************/
#define UDR_REG   (*(volatile uint8 * const)0x002C)
#define UCSRA_REG (*(volatile uint8 * const)0x002B)
#define UCSRB_REG (*(volatile uint8 * const)0x002A)
#define UCSRC_REG (*(volatile uint8 * const)0x0040)
#define UBRRH_REG (*(volatile uint8 * const)0x0040)
#define UBRRL_REG (*(volatile uint8 * const)0x0029)





#endif /* USART_REGS_H */
