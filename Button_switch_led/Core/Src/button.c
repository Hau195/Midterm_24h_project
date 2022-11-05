/*
 * button.c
 *
 *  Created on: Nov 2, 2022
 *      Author: HAU
 */
#include "button.h"

int State0[3] = {Normal_state,Normal_state,Normal_state};
int State1[3] = {Normal_state,Normal_state,Normal_state};
int State2[3] = {Normal_state,Normal_state,Normal_state};
int State3[3] = {Normal_state,Normal_state,Normal_state};
int Waiting_time = 200;
int button1_flag = 0;
int buttonINC_flag = 0;
int buttonDEC_flag = 0;
int button1_long_pressed_flag = 0;
int buttonINC_long_pressed_flag = 0;
int buttonDEC_long_pressed_flag = 0;


int Is_button1_pressed(){
	if(button1_flag == 1){
		button1_flag = 0;
		return 1;
	}
	else{
		return 0;
	}
}
int Is_button1_long_pressed(){
	if(button1_long_pressed_flag == 1){
		button1_long_pressed_flag = 0;
		return 1;
	}
	else{
		return 0;
	}
}
int Is_buttonINC_pressed(){
	if(buttonINC_flag == 1){
		buttonINC_flag = 0;
		return 1;
	}
	else{
		return 0;
	}
}
int Is_buttonINC_long_pressed(){
	if(buttonINC_long_pressed_flag == 1){
		buttonINC_long_pressed_flag = 0;
		return 1;
	}
	else{
		return 0;
	}
}
int Is_buttonDEC_pressed(){
	if(buttonDEC_flag == 1){
		buttonDEC_flag = 0;
		return 1;
	}
	else{
		return 0;
	}
}
int Is_buttonDEC_long_pressed(){
	if(buttonDEC_long_pressed_flag == 1){
		buttonDEC_long_pressed_flag = 0;
		return 1;
	}
	else{
		return 0;
	}
}
void Sub_key_pressed(int index){
	if(index == 0)	button1_flag = 1;
	if(index == 1)	buttonINC_flag = 1;
	if(index == 2)	buttonDEC_flag = 1;
}
void Sub_long_pressed(int index){
	if(index == 0)	button1_long_pressed_flag = 1;
	if(index == 1)	buttonINC_long_pressed_flag = 1;
	if(index == 2)	buttonDEC_long_pressed_flag = 1;
}
void Button_undebounce(){
	for(int i= 0; i<= 2;i++){
	State0[i] = State1[i];
	State1[i] = State2[i];
	State2[0]  = HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_13);
	State2[1]  = HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_14);
	State2[2]  = HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_15);

	if((State0[i] == State1[i]) && (State1[i] == State2[i])){
		if(State2[i] != State3[i]){
			State3[i] = State2[i];
			if(State3[i] == Press_state){
				//TODO
				Waiting_time = 300;
				Sub_key_pressed(i);
			}
		}
		else{
			if(State3[i] == Press_state){
			Waiting_time --;
			if(Waiting_time == 0){
				//TODO
				Waiting_time = 100;
				Sub_long_pressed(i);
			}
			}
		}

	}
}
}
