/*
 * ASG_1_DIO.c
 *
 * Author : Abdullah Abdelgalel
 */ 

#define F_CPU 16000000UL
/*UTILITIES*/
#include "STD_TYPES.h"
#include "BIT_MATH.h"

/*MCAL*/
#include "DIO_interface.h"
#include <util/delay.h>

int main(void)
{
    DIO_setPinDirection(DIO_PORTC, DIO_PIN2, DIO_PIN_OUTPUT);
	DIO_setPinValue(DIO_PORTC, DIO_PIN2, DIO_PIN_LOW);
	
    while (1) 
    {
		_delay_ms(500);
		DIO_togglePinValue(DIO_PORTC, DIO_PIN2);
		_delay_ms(500);
    }
}

