/*
 * fsm.c
 *
 *  Created on: Dec 15, 2022
 *      Author: FPTSHOP
 */

#include "fsm.h"

void fsm(){
	switch (status){
	case INIT:
		status = NORTH_RED_EAST_GREEN;
		setTimer1(green_light_duration);
		break;
	case NORTH_RED_EAST_GREEN:
		ledDisplay1();

		if (timer1_flag == 1){
			status = NORTH_RED_EAST_YELLOW;
			setTimer1(yellow_light_duration);
		}

		break;
	case NORTH_RED_EAST_YELLOW:
		ledDisplay2();

		if (timer1_flag == 1){
			status = EAST_RED_NORTH_GREEN;
			setTimer1(green_light_duration);
		}

		break;
	case EAST_RED_NORTH_GREEN:
		ledDisplay3();

		if (timer1_flag == 1){
			status = EAST_RED_NORTH_YELLOW;
			setTimer1(yellow_light_duration);
		}

		break;
	case EAST_RED_NORTH_YELLOW:
		ledDisplay4();

		if (timer1_flag == 1){
			status = INIT;
		}

		break;
	default:
		break;
	}
}
