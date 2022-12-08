/*
 * led-display.c
 *
 *  Created on: Dec 8, 2022
 *      Author: FPTSHOP
 */

#include "led-display.h"

const uint8_t led_buffer[2] = {0x01, 0x02};
void latchEnable (void){
	HAL_GPIO_WritePin(LED_LE_GPIO_Port, LED_LE_Pin, RESET);
}

void latchDisable (void){
	HAL_GPIO_WritePin(LED_LE_GPIO_Port, LED_LE_Pin, SET);
}

void outputEnable (void){
	HAL_GPIO_WritePin(LED_OE_GPIO_Port, LED_OE_Pin, SET);
}

void outputDisable (void){
	HAL_GPIO_WritePin(LED_OE_GPIO_Port, LED_OE_Pin, RESET);
}

void clockON (void){
	HAL_GPIO_WritePin(LED_SCK_GPIO_Port, LED_SCK_Pin, RESET);
	HAL_GPIO_WritePin(LED_SCK_GPIO_Port, LED_SCK_Pin, RESET);
	HAL_GPIO_WritePin(LED_SCK_GPIO_Port, LED_SCK_Pin, RESET);
	HAL_GPIO_WritePin(LED_SCK_GPIO_Port, LED_SCK_Pin, RESET);
	HAL_GPIO_WritePin(LED_SCK_GPIO_Port, LED_SCK_Pin, RESET);
	HAL_GPIO_WritePin(LED_SCK_GPIO_Port, LED_SCK_Pin, RESET);
	HAL_GPIO_WritePin(LED_SCK_GPIO_Port, LED_SCK_Pin, RESET);
	HAL_GPIO_WritePin(LED_SCK_GPIO_Port, LED_SCK_Pin, RESET);
	HAL_GPIO_WritePin(LED_SCK_GPIO_Port, LED_SCK_Pin, RESET);
	HAL_GPIO_WritePin(LED_SCK_GPIO_Port, LED_SCK_Pin, RESET);

}

void clockOFF (void){
	HAL_GPIO_WritePin(LED_SCK_GPIO_Port, LED_SCK_Pin, SET);
}

void dataOUT (GPIO_PinState state){
	HAL_GPIO_WritePin(LED_SDI_GPIO_Port, LED_SDI_Pin, state);
}

uint8_t getBitValue (uint8_t data, uint8_t index){
	data = (data >> index) && 0x01;
	return data;
}

//void Led_Display_1 (void){
//	uint8_t i;
//	uint8_t data = 0x10;
//	latchDisable();
//	for(i = 0; i<8; i++){
//		clockOFF();
//		//dataOUT(data & 0x01);
//		dataOUT(getBitValue(data, i));
//		clockON();
//	}
//	latchEnable();
//}

void Led_Display(uint8_t data){
	latchDisable();
	for(uint8_t i = 0; i < 8; i++){
		clockOFF();
		//dataOUT(data & 0x01);
		dataOUT(getBitValue(data, i));
		clockON();
	}
	latchEnable();
}

