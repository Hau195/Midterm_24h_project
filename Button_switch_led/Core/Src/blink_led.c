/*
 * blink_led.c
 *
 *  Created on: Nov 5, 2022
 *      Author: HAU
 */
#include "blink_led.h"
int led_state = 0;

void blink_led_run(){
	switch(led_state){
	case 0:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, RESET);
		led_state = 1;
		Set_timer2(100);
		break;
	case 1:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, SET);

		if(timer2_flag == 1){
		led_state = 2;
		Set_timer2(100);
		}
		break;
	case 2:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, RESET);

		if(timer2_flag == 1){
		led_state = 1;
		Set_timer2(100);
		}
		break;
	}
}
