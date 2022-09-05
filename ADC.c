 /******************************************************************************
 *
 * Module: ADC
 *
 * File Name: ADC.c
 *
 * Description: 
 *
 * Author: Ziad Ahmed
 *
 *******************************************************************************/

#include "ADC.h"


void ADC_init(void)
{
	ADMUX=0;
	ADCSRA = (1<<ADEN) | (1<<ADPS1) | (1<<ADPS0);
}


uint16 ADC_read(uint8 channel_num)
{
	channel_num&=0x07;
	ADMUX&=0X0E;
	ADMUX|=channel_num;
	SET_BIT(ADCSRA,ADSC);
	while(IS_CLEAR(ADCSRA,ADIF));
	SET_BIT(ADCSRA,ADIF);
	return ADC;
}
