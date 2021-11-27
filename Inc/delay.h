/*
 * delay.h
 *
 *  Created on: Nov 26, 2021
 *      Author: peyman
 */

#ifndef DELAY_H_
#define DELAY_H_
#include <stdint.h>
#include "stm32f0xx.h"

//void SysTick_Handler(void);
void Delay_10us(__IO uint32_t nTime);
static __IO uint32_t TimingDelay;
//SystemCoreClock=48000000;

#endif /* DELAY_H_ */
