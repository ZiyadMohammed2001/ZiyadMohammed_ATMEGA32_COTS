#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include <avr/io.h>
#include <util/delay.h>

#define F_CPU 16000000UL

#include "DIO_interface.h"


#include "CLCD_interface.h"

int main (void)
{
	/*For *-Bit Mode*/
	//LCD Pins Initialization.
	/*DIO_u8SetPinDirection(DIO_u8PORTA,DIO_u8PIN0,DIO_u8_PIN_OUTPUT); //Rs Pin
	DIO_u8SetPinDirection(DIO_u8PORTA,DIO_u8PIN1,DIO_u8_PIN_OUTPUT); //Rw Pin
	DIO_u8SetPinDirection(DIO_u8PORTA,DIO_u8PIN2,DIO_u8_PIN_OUTPUT); //E Pin

	DIO_u8SetPortDirection(DIO_u8PORTB,0xff); //Data Port.
	PORTB =0xff;

	DIO_u8SetPortValue(DIO_u8PORTB,0xff);

	CLCD_voidInit();

	CLCD_voidSendData('Z');
	CLCD_voidSendData('i');
	CLCD_voidSendData('y');
	CLCD_voidSendData('a');
	CLCD_voidSendData('d');

	CLCD_vodDisplayClear();

	///CLCD_u8SendString("Ziyad Mohammed");
	CLCD_voidSendNumber(5000);
	*/
	uint8 Local_u8MyPattern[8] = {0,0b00010001,0b00010001,0b00010001,0b00011111,0b00011111,0b00000100,0};
	/*For 4-Bit Mode.*/
	/*LCD Pins Initialization.*/
	DIO_u8SetPinDirection(DIO_u8PORTA,DIO_u8PIN1,DIO_u8_PIN_OUTPUT); /*Rs Pin*/
	DIO_u8SetPinDirection(DIO_u8PORTA,DIO_u8PIN2,DIO_u8_PIN_OUTPUT); /*E Pin*/
	DIO_u8SetPinDirection(DIO_u8PORTA,DIO_u8PIN3,DIO_u8_PIN_OUTPUT); /*D4 Pin*/
	DIO_u8SetPinDirection(DIO_u8PORTA,DIO_u8PIN4,DIO_u8_PIN_OUTPUT); /*D5 Pin*/
	DIO_u8SetPinDirection(DIO_u8PORTA,DIO_u8PIN5,DIO_u8_PIN_OUTPUT); /*D6 Pin*/
	DIO_u8SetPinDirection(DIO_u8PORTA,DIO_u8PIN6,DIO_u8_PIN_OUTPUT); /*D7 Pin*/

	CLCD_voidInit();

	CLCD_voidSendData('Z');
	CLCD_voidSendData('i');
	CLCD_voidSendData('y');
	CLCD_voidSendData('a');
	CLCD_voidSendData('d');

	_delay_ms(2000);

	CLCD_vodDisplayClear();
	CLCD_u8GoToXY(CLCD_X_POSITION_2,CLCD_Y_ROW_1);
	CLCD_u8SendString("Ziyad Mohammed");

	_delay_ms(2000);

	CLCD_voidSendSpecialCharacter(&Local_u8MyPattern[0],0,0,0);

	while(1)
	{
	}
}
