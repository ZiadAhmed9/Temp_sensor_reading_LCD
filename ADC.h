 /******************************************************************************
 *
 * Module: ADC
 *
 * File Name: ADC.h
 *
 * Description: 
 *
 * Author: Ziad Ahmed
 *
 *******************************************************************************/

#ifndef ADC_H_
#define ADC_H_
#include "common_macros.h"
#include "std_types.h"
#include "micro_Config.h"



/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/
void ADC_init(void);
uint16 ADC_read(uint8 channel_num);

#endif /* ADC_H_ */
