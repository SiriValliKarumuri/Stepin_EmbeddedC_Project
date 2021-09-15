/*K.S.N.Ratna Sri*/

#ifndef __ACTIVITY_4_H__
#define __ACTIVITY_4_H__

/**
 * Macro Definitions
 */

#define F_CPU 16000000UL /**< Clock Frequency of MCU is 16 MHz */
#define USART_BAUDRATE 9600 /**< Baud rate for serial communication  */
#define UBRR_VALUE (((F_CPU / (USART_BAUDRATE * 16UL))) - 1) /**< Formula to calculate UBRR value */

/**
 * Include files
 */ 

#include <util/delay.h>
#include <avr/io.h>

/**
 * Function Definitions
 */

void USARTInit();
int USARTRead();
void activity4_USARTWrite(uint16_t temp);

#endif /* __ACTIVITY_4_H__ */