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

uint8_t getBitValue (uint32_t data, int index){
	data = (data >> index) & 0x01;
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

void Led_Display(uint32_t data){
	latchDisable();
	for(uint8_t i = 0; i < 24; i++){
		clockOFF();
		//dataOUT(data & 0x01);
		dataOUT(getBitValue(data, i));
		clockON();
	}
	latchEnable();
}

void ledDisplay1 (void){	//red1 + green2
	uint8_t i;
	uint32_t temp1 = 0x400020;
	latchDisable();
	for(i = 0; i < 24; i++){
		clockOFF();
		dataOUT(getBitValue(temp1, i));
		clockON();
	}
	latchEnable();
}

void ledDisplay2 (void){	//red1 + yellow2
	uint8_t i;
	uint32_t temp1 = 0x4000c0;
	latchDisable();
	for(i = 0; i < 24; i++){
		clockOFF();
		dataOUT(getBitValue(temp1, i));
		clockON();
	}
	latchEnable();
}

void ledDisplay3 (void){	//Green1 + Red2
	uint8_t i;
	uint32_t temp1 = 0x080100;
	latchDisable();
	for(i = 0; i < 24; i++){
		clockOFF();
		dataOUT(getBitValue(temp1, i));
		clockON();
	}
	latchEnable();
}

void ledDisplay4 (void){	//Yellow1 + Red2
	uint8_t i;
	uint32_t temp1 = 0x300100;
	latchDisable();
	for(i = 0; i < 24; i++){
		clockOFF();
		dataOUT(getBitValue(temp1, i));
		clockON();
	}
	latchEnable();
}


void enableLedPannel (int index){
	switch (index){
		case 1:
			ledDisplay1();
			break;
		case 2:
			ledDisplay2();
			break;
		case 3:
			ledDisplay3();
			break;
		case 4:
			ledDisplay4();
			break;
		default:
			break;
	}
}

//void displayNum(int num1, int num2){
//	char str1[2];
//	char str2[2];
//
//	sprintf(str1, "%d", num1);
//	sprintf(str2, "%d", num2);
//
//	Lcd_Goto_XY(0, 0);
//	Lcd_Send_String("Lane 1: ");
//	Lcd_Goto_XY(0, 8);
//	Lcd_Send_String(str1);
//
//	Lcd_Goto_XY(1, 0);
//	Lcd_Send_String("Lane 2: ");
//	Lcd_Goto_XY(1, 8);
//	Lcd_Send_String(str2);
//
//}

