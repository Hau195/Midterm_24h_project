/*
 * button.h
 *
 *  Created on: Nov 2, 2022
 *      Author: HAU
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_
#include "main.h"

#define Normal_state SET
#define Press_state RESET

//extern int button1_flag;

void Button_undebounce();
int Is_button1_pressed();
int Is_buttonINC_pressed();
int Is_buttonDEC_pressed();
int Is_button1_long_pressed();
int Is_buttonINC_long_pressed();
int Is_buttonDEC_long_pressed();

#endif /* INC_BUTTON_H_ */
