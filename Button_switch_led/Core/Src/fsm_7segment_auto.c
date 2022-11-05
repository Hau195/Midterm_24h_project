/*
 * fsm_7segment_auto.c
 *
 *  Created on: Nov 5, 2022
 *      Author: HAU
 */

#include "fsm_7segment_auto.h"

void fsm_7segment_auto_run(){
		switch(led_counter){
		case 30:
			segment_led_run(0);
			if(Is_button1_pressed() == 1){
				led_counter = 0;
			}
			if(Is_buttonINC_pressed() == 1){
				led_counter = 1;
			}
			if(Is_buttonDEC_pressed() == 1){
				led_counter = 9;
			}
			if(Is_buttonINC_long_pressed() == 1){
				led_counter = 21;
				Set_timer1(100);
			}
			if(Is_buttonDEC_long_pressed() == 1){
				led_counter = 29;
				Set_timer1(100);
			}
			if(timer1_flag == 1){
					led_counter = 30;
					Set_timer1(100);
			}
			break;
		case 31:
			segment_led_run(1);
			if(Is_button1_pressed()==1){
				led_counter = 0;
			}
			if(Is_buttonINC_pressed() == 1){
				led_counter = 2;
			}
			if(Is_buttonDEC_pressed() == 1){
				led_counter = 0;
			}
			if(Is_buttonINC_long_pressed() == 1){
				led_counter = 22;
				Set_timer1(100);
			}
			if(Is_buttonDEC_long_pressed() == 1){
				led_counter = 20;
				Set_timer1(100);
			}
			if(timer1_flag == 1){
				led_counter = 30;
				Set_timer1(100);

			}
			break;
		case 32:
			segment_led_run(2);
			if(Is_button1_pressed()==1){
				led_counter = 0;
			}
			if(Is_buttonINC_pressed() == 1){
				led_counter = 3;
			}
			if(Is_buttonDEC_pressed() == 1){
				led_counter = 1;
			}
			if(Is_buttonINC_long_pressed() == 1){
				led_counter = 23;
				Set_timer1(100);
			}
			if(Is_buttonDEC_long_pressed() == 1){
				led_counter = 21;
				Set_timer1(100);
			}
			if(timer1_flag == 1){
				led_counter = 31;
				Set_timer1(100);
			}
			break;
		case 33:
			segment_led_run(3);
			if(Is_button1_pressed()==1){
				led_counter = 0;
			}
			if(Is_buttonINC_pressed() == 1){
				led_counter = 4;
			}
			if(Is_buttonDEC_pressed() == 1){
				led_counter = 2;
			}
			if(Is_buttonINC_long_pressed() == 1){
				led_counter = 24;
				Set_timer1(100);
			}
			if(Is_buttonDEC_long_pressed() == 1){
				led_counter = 22;
				Set_timer1(100);
			}
			if(timer1_flag == 1){
				led_counter = 32;
				Set_timer1(100);
			}
			break;
		case 34:
			segment_led_run(4);
			if(Is_button1_pressed()==1){
				led_counter = 0;
			}
			if(Is_buttonINC_pressed() == 1){
				led_counter = 5;
			}
			if(Is_buttonDEC_pressed() == 1){
				led_counter = 3;
			}
			if(Is_buttonINC_long_pressed() == 1){
				led_counter = 25;
				Set_timer1(100);
			}
			if(Is_buttonDEC_long_pressed() == 1){
				led_counter = 23;
				Set_timer1(100);
			}
			if(timer1_flag == 1){
				led_counter = 33;
				Set_timer1(100);
			}
			break;
		case 35:
			segment_led_run(5);
			if(Is_button1_pressed()==1){
				led_counter = 0;
			}
			if(Is_buttonINC_pressed() == 1){
				led_counter = 6;
			}
			if(Is_buttonDEC_pressed() == 1){
				led_counter = 4;
			}
			if(Is_buttonINC_long_pressed() == 1){
				led_counter = 26;
				Set_timer1(100);
			}
			if(Is_buttonDEC_long_pressed() == 1){
				led_counter = 24;
				Set_timer1(100);
			}
			if(timer1_flag == 1){
				led_counter = 34;
				Set_timer1(100);
			}
			break;
		case 36:
			segment_led_run(6);
			if(Is_button1_pressed()==1){
				led_counter = 0;
			}
			if(Is_buttonINC_pressed() == 1){
				led_counter = 7;
			}
			if(Is_buttonDEC_pressed() == 1){
				led_counter = 5;
			}
			if(Is_buttonINC_long_pressed() == 1){
				led_counter = 27;
				Set_timer1(100);
			}
			if(Is_buttonDEC_long_pressed() == 1){
				led_counter = 25;
				Set_timer1(100);
			}
			if(timer1_flag == 1){
				led_counter = 35;
				Set_timer1(100);
			}
			break;
		case 37:
			segment_led_run(7);
			if(Is_button1_pressed()==1){
				led_counter = 0;
			}
			if(Is_buttonINC_pressed() == 1){
				led_counter = 8;
			}
			if(Is_buttonDEC_pressed() == 1){
				led_counter = 6;
			}
			if(Is_buttonINC_long_pressed() == 1){
				led_counter = 28;
				Set_timer1(100);
			}
			if(Is_buttonDEC_long_pressed() == 1){
				led_counter = 26;
				Set_timer1(100);
			}
			if(timer1_flag == 1){
				led_counter = 36;
				Set_timer1(100);

			}
			break;
		case 38:
			segment_led_run(8);
			if(Is_button1_pressed()==1){
				led_counter = 0;
			}
			if(Is_buttonINC_pressed() == 1){
				led_counter = 9;
			}
			if(Is_buttonDEC_pressed() == 1){
				led_counter = 7;
			}
			if(Is_buttonINC_long_pressed() == 1){
				led_counter = 29;
				Set_timer1(100);
			}
			if(Is_buttonDEC_long_pressed() == 1){
				led_counter = 27;
				Set_timer1(100);
			}
			if(timer1_flag == 1){
				led_counter = 37;
				Set_timer1(100);
			}
			break;
		case 39:
			segment_led_run(9);
			if(Is_button1_pressed()==1){
				led_counter = 0;
			}
			if(Is_buttonINC_pressed() == 1){
				led_counter = 0;
			}
			if(Is_buttonDEC_pressed() == 1){
				led_counter = 8;
			}
			if(Is_buttonINC_long_pressed() == 1){
				led_counter = 0;
				Set_timer1(100);
			}
			if(Is_buttonDEC_long_pressed() == 1){
				led_counter = 2;
				Set_timer1(100);
			}
			if(timer1_flag == 1){
				led_counter = 38;
				Set_timer1(100);
			}
			break;
		}

}
