
#include "STD_TYPES.h"

#include <util/delay.h>

#include "PORT_interface.h"

#include "DIO_interface.h"

#include "LED_interface.h"

void main (void)
{
	PORT_voidInit();
	while (1)
	{
		LED_u8SetLEDON(LED_ACTIVE_HIGH,DIO_u8PORTA,DIO_u8PIN0);
		_delay_ms(1000);
		LED_u8SetLEDOFF(LED_ACTIVE_HIGH,DIO_u8PORTA,DIO_u8PIN0);
		_delay_ms(1000);
	}
}

