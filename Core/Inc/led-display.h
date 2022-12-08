/*
 * led-display.h
 *
 *  Created on: Dec 8, 2022
 *      Author: FPTSHOP
 */

#ifndef INC_LED_DISPLAY_H_
#define INC_LED_DISPLAY_H_

#include "main.h"

extern const uint8_t led_buffer[2];
void latchEnable (void);
void latchDisable (void);
void outputEnable (void);
void outputDisable (void);
void clockON (void);
void clockOFF (void);
void dataOUT (GPIO_PinState);
uint8_t getBitValue (uint8_t, uint8_t);
void Led_Display(uint8_t);


#endif /* INC_LED_DISPLAY_H_ */
