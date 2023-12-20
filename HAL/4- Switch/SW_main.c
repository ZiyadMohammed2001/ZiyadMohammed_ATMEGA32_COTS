
#include "STD_TYPES.h"

#include <util/delay.h>

#include "PORT_interface.h"

#include "DIO_interface.h"

#include "SW_interface.h"

void main (void)
{
	PORT_voidInit();
	uint8 Local_u8_SwitchState=0;
	Switch_Configuration_t LED_SW =
	{
			.Switch_Port = DIO_u8PORTD,
			.Switch_Pin = DIO_u8PIN2,
			.Switch_PullType =SWITCH_PULL_UP,
	};
	Switch_u8GetState(&LED_SW, &Local_u8_SwitchState);
	while (1)
	{
		Switch_u8GetState(&LED_SW, &Local_u8_SwitchState);
		if(Local_u8_SwitchState==1)
		{
			DIO_u8SetPinValue(DIO_u8PORTA,DIO_u8PIN0,DIO_u8_PIN_HIGH);
		}
		else
		{
			DIO_u8SetPinValue(DIO_u8PORTA,DIO_u8PIN0,DIO_u8_PIN_LOW);
		}
	}
}

