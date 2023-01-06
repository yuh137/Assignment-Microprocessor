/*
 * lcd.h
 *
 *  Created on: Jan 4, 2023
 *      Author: FPTSHOP
 */

#ifndef INC_LCD_H_
#define INC_LCD_H_

#include "main.h"

void LCD_Testing(void);

void Lcd_Initialization (void);   // initialize lcd

void Lcd_Send_Cmd (char cmd);  // send command to the lcd

void Lcd_Send_Data (char data);  // send data to the lcd

void Lcd_Send_String (char *str);  // send string to the lcd

void Lcd_Clear_Display (void);	//clear display lcd

void Lcd_Goto_XY (int row, int col); //set proper location on screen, index starts from 0

void Show_Box_ID(uint16_t bID);

void Show_KWH(uint32_t ws);

#endif /* INC_LCD_H_ */
