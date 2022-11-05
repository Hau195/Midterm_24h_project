/*
 * fsm_simple_button.c
 *
 *  Created on: Nov 5, 2022
 *      Author: HAU
 */

#ifndef SRC_FSM_SIMPLE_BUTTON_C_
#define SRC_FSM_SIMPLE_BUTTON_C_


#include "global.h"

int led_counter = 0;

void fsm_simple_button_run(){
	switch(led_counter){
	case 0:
		segment_led_run(0);
		if(Is_button1_pressed() == 1){
			led_counter = 0;
		}
		if(Is_buttonINC_pressed() == 1){
			led_counter = 1;
			Set_timer1(1000);
		}
		if(Is_buttonDEC_pressed() == 1){
			led_counter = 9;
			Set_timer1(1000);
		}
		if(Is_buttonINC_long_pressed() == 1){
			led_counter = 21;
			Set_timer1(100);
		}
		if(Is_buttonDEC_long_pressed() == 1){
			led_counter = 29;
			Set_timer1(100);
		}
		break;
	case 1:
		if(Is_button1_pressed()==1){
			led_counter = 0;
		}
		if(Is_buttonINC_pressed()==1){
			led_counter = 2;
			Set_timer1(1000);
		}
		if(Is_buttonDEC_pressed()==1){
			led_counter = 0;
			Set_timer1(1000);
		}
		if(Is_buttonINC_long_pressed() == 1){
			led_counter = 22 ;
			Set_timer1(100);
		}
		if(Is_buttonDEC_long_pressed() == 1){
			led_counter = 20;
			Set_timer1(100);
		}
		else {
			if(timer1_flag == 1){
		}
			led_counter = 31;
			Set_timer1(100);
		}
		break;
	case 2:
		segment_led_run(2);
		if(Is_button1_pressed()==1){
			led_counter = 0;
		}
		if(Is_buttonINC_pressed()==1){
			led_counter = 3;
			Set_timer1(1000);
		}
		if(Is_buttonDEC_pressed()==1){
			led_counter = 1;
			Set_timer1(1000);
		}
		if(Is_buttonINC_long_pressed() == 1){
			led_counter = 23;
			Set_timer1(100);
		}
		if(Is_buttonDEC_long_pressed() == 1){
			led_counter = 21;
			Set_timer1(100);
		}
		else{
			if(timer1_flag == 1){
				led_counter = 32;
				Set_timer1(100);
			}
		}
		break;
	case 3:
		segment_led_run(3);
		if(Is_button1_pressed()==1){
			led_counter = 0;
		}
		if(Is_buttonINC_pressed()==1){
			led_counter = 4;
			Set_timer1(1000);
		}
		if(Is_buttonDEC_pressed()==1){
			led_counter = 2;
			Set_timer1(1000);
		}
		if(Is_buttonINC_long_pressed() == 1){
			led_counter = 24;
			Set_timer1(100);
		}
		if(Is_buttonDEC_long_pressed() == 1){
			led_counter = 22;
			Set_timer1(100);
		}
		else{
			if(timer1_flag == 1){
				led_counter = 33;
				Set_timer1(100);
			}
		}
		break;
	case 4:
		segment_led_run(4);
		if(Is_button1_pressed()==1){
			led_counter = 0;
		}
		if(Is_buttonINC_pressed()==1){
			led_counter = 5;
			Set_timer1(1000);
		}
		if(Is_buttonDEC_pressed()==1){
			led_counter = 3;
			Set_timer1(1000);
		}
		if(Is_buttonINC_long_pressed() == 1){
			led_counter = 25;
			Set_timer1(100);
		}
		if(Is_buttonDEC_long_pressed() == 1){
			led_counter = 23;
			Set_timer1(100);
		}
		else{
				if(timer1_flag == 1){
				led_counter = 34;
				Set_timer1(100);
			}
		}
		break;
	case 5:

		segment_led_run(5);
		if(Is_button1_pressed()==1){
			led_counter = 0;
		}
		if(Is_buttonINC_pressed()==1){
			led_counter = 6;
			Set_timer1(1000);
		}
		if(Is_buttonDEC_pressed()==1){
			led_counter = 4;
			Set_timer1(1000);
		}
		if(Is_buttonINC_long_pressed() == 1){
			led_counter = 26;
			Set_timer1(100);
		}
		if(Is_buttonDEC_long_pressed() == 1){
			led_counter = 24;
			Set_timer1(100);
		}
		else{
				if(timer1_flag == 1){
				led_counter = 35;
				Set_timer1(100);
			}
		}
		break;
	case 6:

		segment_led_run(6);
		if(Is_button1_pressed()==1){
			led_counter = 0;

		}
		if(Is_buttonINC_pressed()==1){
			led_counter = 7;
			Set_timer1(1000);
		}
		if(Is_buttonDEC_pressed()==1){
			led_counter = 5;
			Set_timer1(1000);
		}
		if(Is_buttonINC_long_pressed() == 1){
			led_counter = 27;
			Set_timer1(100);
		}
		if(Is_buttonDEC_long_pressed() == 1){
			led_counter = 25;
			Set_timer1(100);
		}
		else{
				if(timer1_flag == 1){
				led_counter = 36;
				Set_timer1(100);
			}
		}
		break;
	case 7:

		segment_led_run(7);
		if(Is_button1_pressed()==1){
			led_counter = 0;
		}
		if(Is_buttonINC_pressed()==1){
			led_counter = 8;
			Set_timer1(1000);
		}
		if(Is_buttonDEC_pressed()==1){
			led_counter = 6;
			Set_timer1(1000);
		}
		if(Is_buttonINC_long_pressed() == 1){
			led_counter = 28;
			Set_timer1(100);
		}
		if(Is_buttonDEC_long_pressed() == 1){
			led_counter = 26;
			Set_timer1(100);
		}
		else{
				if(timer1_flag == 1){
				led_counter = 37;
				Set_timer1(100);
			}
		}
		break;
	case 8:

		segment_led_run(8);
		if(Is_button1_pressed()==1){
			led_counter = 0;
		}
		if(Is_buttonINC_pressed()==1){
			led_counter = 9;
			Set_timer1(1000);
		}
		if(Is_buttonDEC_pressed()==1){
			led_counter = 7;
			Set_timer1(1000);
		}
		if(Is_buttonINC_long_pressed() == 1){
			led_counter = 29;
			Set_timer1(100);
		}
		if(Is_buttonDEC_long_pressed() == 1){
			led_counter = 27;
			Set_timer1(100);
		}
		else{
				if(timer1_flag == 1){
				led_counter = 38;
				Set_timer1(100);
			}
		}
		break;
	case 9:

		segment_led_run(9);
		if(Is_button1_pressed()==1){
			led_counter = 0;
		}
		if(Is_buttonINC_pressed()==1){
			led_counter = 0;
			Set_timer1(1000);
		}
		if(Is_buttonDEC_pressed()==1){
			led_counter = 8;
			Set_timer1(1000);
		}
		if(Is_buttonINC_long_pressed() == 1){
			led_counter = 20;
			Set_timer1(100);
		}
		if(Is_buttonDEC_long_pressed() == 1){
			led_counter = 28;
			Set_timer1(100);
		}
		else{
			if(timer1_flag == 1){
				led_counter = 39;
				Set_timer1(100);
			}
		}
		break;
	}
}

#endif /* SRC_FSM_SIMPLE_BUTTON_C_ */
