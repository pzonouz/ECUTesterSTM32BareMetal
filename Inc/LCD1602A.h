/*
 * LCD1602A.h
 *
 *  Created on: Nov 26, 2021
 *      Author: peyman
 */

#ifndef LCD1602A_H_
#define LCD1602A_H_
#define DATA_PORT GPIOA
#define CONTROL_PORT GPIOA
//Set pins
#define RST 6
#define RW  7
#define E   9
#define D4  10
#define D5  13
#define D6  14
#define D7  0

int initLC1602A(void);
void sendCommand(int command);

#endif /* LCD1602A_H_ */
