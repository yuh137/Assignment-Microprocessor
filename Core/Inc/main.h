/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED_SCK_Pin GPIO_PIN_3
#define LED_SCK_GPIO_Port GPIOC
#define PDST_BUTTON_Pin GPIO_PIN_0
#define PDST_BUTTON_GPIO_Port GPIOA
#define BUTTON_1_Pin GPIO_PIN_1
#define BUTTON_1_GPIO_Port GPIOA
#define BUTTON_2_Pin GPIO_PIN_4
#define BUTTON_2_GPIO_Port GPIOA
#define BUZZER_Pin GPIO_PIN_6
#define BUZZER_GPIO_Port GPIOA
#define LED_LE_Pin GPIO_PIN_4
#define LED_LE_GPIO_Port GPIOC
#define LED_OE_Pin GPIO_PIN_5
#define LED_OE_GPIO_Port GPIOC
#define BUTTON_3_Pin GPIO_PIN_0
#define BUTTON_3_GPIO_Port GPIOB
#define LED_BLINKY_Pin GPIO_PIN_2
#define LED_BLINKY_GPIO_Port GPIOB
#define RED_LED_PDST_Pin GPIO_PIN_10
#define RED_LED_PDST_GPIO_Port GPIOB
#define LED_SDI_Pin GPIO_PIN_6
#define LED_SDI_GPIO_Port GPIOC
#define GREEN_LED_PDST_Pin GPIO_PIN_8
#define GREEN_LED_PDST_GPIO_Port GPIOA
#define RED_LED_1_Pin GPIO_PIN_10
#define RED_LED_1_GPIO_Port GPIOA
#define OE_245_Pin GPIO_PIN_2
#define OE_245_GPIO_Port GPIOD
#define GREEN_LED_1_Pin GPIO_PIN_3
#define GREEN_LED_1_GPIO_Port GPIOB
#define RED_LED_2_Pin GPIO_PIN_4
#define RED_LED_2_GPIO_Port GPIOB
#define GREEN_LED_2_Pin GPIO_PIN_5
#define GREEN_LED_2_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
