/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
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
#include "stm32h7xx_hal.h"

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
#define LIM2_Pin GPIO_PIN_3
#define LIM2_GPIO_Port GPIOE
#define LED_G_Pin GPIO_PIN_5
#define LED_G_GPIO_Port GPIOE
#define LIM1_Pin GPIO_PIN_6
#define LIM1_GPIO_Port GPIOE
#define LED_B_Pin GPIO_PIN_6
#define LED_B_GPIO_Port GPIOF
#define LIM4_Pin GPIO_PIN_7
#define LIM4_GPIO_Port GPIOF
#define LIM3_Pin GPIO_PIN_8
#define LIM3_GPIO_Port GPIOF
#define LIM5_Pin GPIO_PIN_9
#define LIM5_GPIO_Port GPIOF
#define LED1_Pin GPIO_PIN_3
#define LED1_GPIO_Port GPIOC
#define SCK_Pin GPIO_PIN_5
#define SCK_GPIO_Port GPIOA
#define MISO_Pin GPIO_PIN_6
#define MISO_GPIO_Port GPIOA
#define CS1_Pin GPIO_PIN_0
#define CS1_GPIO_Port GPIOG
#define CS2_Pin GPIO_PIN_1
#define CS2_GPIO_Port GPIOG
#define LIM10_Pin GPIO_PIN_7
#define LIM10_GPIO_Port GPIOE
#define LIM9_Pin GPIO_PIN_8
#define LIM9_GPIO_Port GPIOE
#define ENC1_A_Pin GPIO_PIN_9
#define ENC1_A_GPIO_Port GPIOE
#define ENC1_B_Pin GPIO_PIN_11
#define ENC1_B_GPIO_Port GPIOE
#define UART3_TX_Pin GPIO_PIN_10
#define UART3_TX_GPIO_Port GPIOB
#define UART3_RX_Pin GPIO_PIN_11
#define UART3_RX_GPIO_Port GPIOB
#define ENC3_B_Pin GPIO_PIN_7
#define ENC3_B_GPIO_Port GPIOC
#define LED_R_Pin GPIO_PIN_8
#define LED_R_GPIO_Port GPIOC
#define ENC2_A_Pin GPIO_PIN_15
#define ENC2_A_GPIO_Port GPIOA
#define CAN1_RX_Pin GPIO_PIN_0
#define CAN1_RX_GPIO_Port GPIOD
#define CAN1_TX_Pin GPIO_PIN_1
#define CAN1_TX_GPIO_Port GPIOD
#define BUSY2_Pin GPIO_PIN_3
#define BUSY2_GPIO_Port GPIOD
#define BUSY1_Pin GPIO_PIN_4
#define BUSY1_GPIO_Port GPIOD
#define UART2_TX_Pin GPIO_PIN_5
#define UART2_TX_GPIO_Port GPIOD
#define UART2_RX_Pin GPIO_PIN_6
#define UART2_RX_GPIO_Port GPIOD
#define MOSI_Pin GPIO_PIN_7
#define MOSI_GPIO_Port GPIOD
#define LIM6_Pin GPIO_PIN_14
#define LIM6_GPIO_Port GPIOG
#define ENC2_B_Pin GPIO_PIN_3
#define ENC2_B_GPIO_Port GPIOB
#define ENC3_A_Pin GPIO_PIN_4
#define ENC3_A_GPIO_Port GPIOB
#define CAN2_RX_Pin GPIO_PIN_5
#define CAN2_RX_GPIO_Port GPIOB
#define CAN2_TX_Pin GPIO_PIN_6
#define CAN2_TX_GPIO_Port GPIOB
#define LIM8_Pin GPIO_PIN_7
#define LIM8_GPIO_Port GPIOB
#define LIM7_Pin GPIO_PIN_9
#define LIM7_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
