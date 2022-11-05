/*
 * 7segment_led.c
 *
 *  Created on: Nov 4, 2022
 *      Author: HAU
 */
#include "global.h"
int led_index = 0;
int display_7segment[10] = {0x003F,0x0006, 0x005B, 0x004F, 0x0066, 0x006D, 0x00FD, 0x0007,0x00FF,0x00EF};
void segment_led_run(int led_index){
	switch(led_index){
	case 0:
		GPIOB->BSRR = ~display_7segment[0];
		//led_index = 1;
		//Set_timer2(100);
		break;
	case 1:
		GPIOB->BSRR = ~display_7segment[1];
		//if(timer2_flag == 1){
		//led_index = 2;
		//Set_timer2(100);
		//}
		break;
	case 2:
		GPIOB->BSRR = ~display_7segment[2];
		//if(timer2_flag == 1){
		//led_index = 3;
		//Set_timer2(100);
		//}
		break;
	case 3:
		GPIOB->BSRR = ~display_7segment[3];
		//if(timer2_flag == 1){
		//led_index = 4;
		//Set_timer2(100);
		//}
		break;
	case 4:
		GPIOB->BSRR = ~display_7segment[4];
		//if(timer2_flag == 1){
		//led_index = 5;
		//Set_timer2(100);
		//}
		break;
	case 5:
		GPIOB->BSRR = ~display_7segment[5];
		//if(timer2_flag == 1){
		//led_index = 6;
		//Set_timer2(100);
		//}
		break;
	case 6:
		GPIOB->BSRR = ~display_7segment[6];
		//if(timer2_flag == 1){
		//led_index = 7;
		//Set_timer2(100);
		//}
		break;
	case 7:
		GPIOB->BSRR = ~display_7segment[7];
		//if(timer2_flag == 1){
		//led_index = 8;
		//Set_timer2(100);
		//}
		break;
	case 8:
		GPIOB->BSRR = ~display_7segment[8];
		//if(timer2_flag == 1){
		//led_index = 9;
		//Set_timer2(100);
		//}
		break;
	case 9:
		GPIOB->BSRR = ~display_7segment[9];
		//if(timer2_flag == 1){
		//led_index = 10;
		//Set_timer2(100);
		//}
		break;
	case 10:
		GPIOB->BSRR = ~display_7segment[0];
		//if(timer2_flag == 1){
		//led_index = 0;
		//Set_timer2(100);
		//}
		break;
	}
}

