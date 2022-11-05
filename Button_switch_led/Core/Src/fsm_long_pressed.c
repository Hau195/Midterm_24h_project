/*
 * fsm_long_pressed.c
 *
 *  Created on: Nov 5, 2022
 *      Author: HAU
 */
#include "global.h"


void fsm_button_long_pressed_run(){
	switch(led_counter){
	case 20:
		segment_led_run(0);
		if(Is_button1_pressed() == 1){
			led_counter = 0;
		}
		if(timer1_flag == 1){
			if(Is_buttonINC_long_pressed()==1){
			led_counter = 21;
			Set_timer1(100);
			}
			else if(Is_buttonINC_long_pressed()==1){
			led_counter = 29;
			Set_timer1(100);
				}
			else{
			led_counter = 0;

			}
		}
		break;
	case 21:
		segment_led_run(1);
		if(Is_button1_pressed()==1){
			led_counter = 0;
		}
		if(timer1_flag == 1){
			if(Is_buttonINC_long_pressed()==1){
			led_counter = 22;
			Set_timer1(100);
			}
			else if(Is_buttonDEC_long_pressed()==1){
			led_counter = 20;
			Set_timer1(100);
				}
			else{
			led_counter = 1;

			}
		}
		break;
	case 22:
		segment_led_run(2);
		if(Is_button1_pressed()==1){
			led_counter = 0;
		}
		if(timer1_flag == 1){
			if(Is_buttonINC_long_pressed()==1){
			led_counter = 23;
			Set_timer1(100);
			}
			else if(Is_buttonDEC_long_pressed()==1){
			led_counter = 21;
			Set_timer1(100);
				}
			else{
			led_counter = 2;

			}
		}
		break;
	case 23:
		segment_led_run(3);
		if(Is_button1_pressed()==1){
			led_counter = 0;
		}
		if(timer1_flag == 1){
			if(Is_buttonINC_long_pressed()==1){
			led_counter = 24;
			Set_timer1(100);
			}
			else if(Is_buttonDEC_long_pressed()==1){
			led_counter = 22;
			Set_timer1(100);
				}
			else{
			led_counter = 3;

			}
		}
		break;
	case 24:
		segment_led_run(4);
		if(Is_button1_pressed()==1){
			led_counter = 0;
		}
		if(timer1_flag == 1){
			if(Is_buttonINC_long_pressed()==1){
			led_counter = 25;
			Set_timer1(100);
			}
			else if(Is_buttonDEC_long_pressed()==1){
			led_counter = 23;
			Set_timer1(100);
				}
			else{
			led_counter = 4;

			}
		}
		break;
	case 25:
		segment_led_run(5);
		if(Is_button1_pressed()==1){
			led_counter = 0;
		}
		if(timer1_flag == 1){
			if(Is_buttonINC_long_pressed()==1){
			led_counter = 26;
			Set_timer1(100);
			}
			else if(Is_buttonDEC_long_pressed()==1){
			led_counter = 24;
			Set_timer1(100);
				}
			else{
			led_counter = 5;
			}
		}
		break;
	case 26:
		segment_led_run(6);
		if(Is_button1_pressed()==1){
			led_counter = 0;
		}
		if(timer1_flag == 1){
			if(Is_buttonINC_long_pressed()==1){
			led_counter = 27;
			Set_timer1(100);
			}
			else if(Is_buttonDEC_long_pressed()==1){
			led_counter = 25;
			Set_timer1(100);
				}
			else{
			led_counter = 6;
			}
		}
		break;
	case 27:
		segment_led_run(7);
		if(Is_button1_pressed()==1){
			led_counter = 0;
		}
		if(timer1_flag == 1){
			if(Is_buttonINC_long_pressed()==1){
			led_counter = 28;
			Set_timer1(100);
			}
			else if(Is_buttonDEC_long_pressed()==1){
			led_counter = 26;
			Set_timer1(100);
				}
			else{
			led_counter = 7;
			}
		}
		break;
	case 28:
		segment_led_run(8);
		if(Is_button1_pressed()==1){
			led_counter = 0;
		}
		if(timer1_flag == 1){
			if(Is_buttonINC_long_pressed()==1){
			led_counter = 29;
			Set_timer1(100);
			}
			else if(Is_buttonDEC_long_pressed()==1){
			led_counter = 27;
				}
			else{
			led_counter = 8;
			}
		}
		break;
	case 29:
		segment_led_run(9);
		if(Is_button1_pressed()==1){
			led_counter = 0;
		}
		if(timer1_flag == 1){
			if(Is_buttonINC_long_pressed()==1){
			led_counter = 20;
			Set_timer1(100);
			}
			else if(Is_buttonDEC_long_pressed()==1){
			led_counter = 28;
			Set_timer1(100);
				}
			else{
			led_counter = 9;
			}
		}
		break;
	}
}

