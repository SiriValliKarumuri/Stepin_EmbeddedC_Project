/*K.S.N.Ratna Sri*/

#ifndef __ACTIVITY_2_H__
#define __ACTIVITY_2_H__

/**
 * Include files
 */ 

#include <util/delay.h>
#include <avr/io.h>

/**
 * Function Definitions
 */

void InitADC();
uint16_t ReadADC(uint8_t ch);
uint16_t activity2_GetADC(void);

#endif /* __ACTIVITY_2_H__ */