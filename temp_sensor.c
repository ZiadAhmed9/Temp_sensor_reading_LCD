 /******************************************************************************
 *
 * Module: temp_sensor
 *
 * File Name: temp_sensor.c
 *
 * Description: 
 *
 * Author: Ziad Ahmed
 *
 *******************************************************************************/

#include "LCD.h"
#include "ADC.h"





int main(void)
{
	uint32 temp;
	LCD_init();
	ADC_init();
	LCD_Clear();
	LCD_displayString("Temp = ");
	LCD_MoveTo_Row_Column(0,10);
	LCD_displayChar('C');

	while(1)
	{
		LCD_MoveTo_Row_Column(0,7);
		temp=ADC_read(2);
		temp=(temp*150*5)/(1023*1.5);
		LCD_integerToString( temp);
	}
}
