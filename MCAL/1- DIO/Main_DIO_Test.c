#include <util/delay.h>
#include "DIO_interface.h"
#include "STD_TYPES.h"
#include "BIT_MATH.h"

#define F_CPU	16000000UL

int main ()
{
	/*DIO_u8SetPinDirection(DIO_u8PORTA,DIO_u8PIN0,DIO_u8_PIN_OUTPUT);

	while (1)
	{
		DIO_u8SetPinValue(DIO_u8PORTA,DIO_u8PIN0,DIO_u8_PIN_HIGH);
		_delay_ms(1000);
		DIO_u8SetPinValue(DIO_u8PORTA,DIO_u8PIN0,DIO_u8_PIN_LOW);
		_delay_ms(1000);
	}*/

	/*uint8 Local_u8PinState = DIO_u8_PIN_HIGH;
	DIO_u8SetPinDirection(DIO_u8PORTC,DIO_u8PIN0,DIO_u8_PIN_OUTPUT); 	//Led Pin.
	DIO_u8SetPinDirection(DIO_u8PORTD,DIO_u8PIN2,DIO_u8_PIN_INPUT);		//Switch Pin.
	while(1)
	{
		DIO_u8GetPinValue(DIO_u8PORTD,DIO_u8PIN2,&Local_u8PinState);
		if(Local_u8PinState == DIO_u8_PIN_LOW)
		{
			//Switch is pressed.
			DIO_u8SetPinValue(DIO_u8PORTC,DIO_u8PIN0,DIO_u8_PIN_HIGH);
		}
		else
		{
			//Switch is not pressed.
			DIO_u8SetPinValue(DIO_u8PORTC,DIO_u8PIN0,DIO_u8_PIN_LOW);
		}
	}*/
	DIO_u8SetPinDirection(DIO_u8PORTC,DIO_u8PIN0,DIO_u8_PIN_OUTPUT); 	//Led Pin.
	while (1)
	{
		DIO_u8TogglePinValue(DIO_u8PORTC,DIO_u8PIN0);
		_delay_ms(1000);
	}
}
