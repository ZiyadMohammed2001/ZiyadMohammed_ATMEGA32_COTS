
#include "STD_TYPES.h"

#include "PORT_interface.h"

#include "CLCD_interface.h"
#include "KPD_interface.h"

void main (void)
{
	uint8 Local_u8PressedKey = 0xff;

	PORT_voidInit();
	CLCD_voidInit();
	KPD_u8GetPressedKey(&Local_u8PressedKey);
	while(1)
	{
		KPD_u8GetPressedKey(&Local_u8PressedKey);
		if(Local_u8PressedKey != 0xff)
		{
			CLCD_vodDisplayClear();
			CLCD_voidSendNumber(Local_u8PressedKey);
		}
	}
}

