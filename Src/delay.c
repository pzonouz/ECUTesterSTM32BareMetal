/*
 * delay.c
 *
 *  Created on: Nov 26, 2021
 *      Author: peyman
 */

#include <stdint.h>
#include "delay.h"


void Delay_10us(__IO uint32_t nTime)
{
	TimingDelay = nTime;

	while(TimingDelay != 0);
}

void SysTick_Handler(void){
	if (TimingDelay != 0x00)
	{
		TimingDelay--;
	}
}
