/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
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
#include "stm32f0xx_hal.h"

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

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define Fan_power_Pin GPIO_PIN_1
#define Fan_power_GPIO_Port GPIOB
#define Acc_power_Pin GPIO_PIN_2
#define Acc_power_GPIO_Port GPIOB
#define Out_extra_1_Pin GPIO_PIN_10
#define Out_extra_1_GPIO_Port GPIOB
#define Out_extra_2_Pin GPIO_PIN_11
#define Out_extra_2_GPIO_Port GPIOB
#define Parking_lights_Pin GPIO_PIN_15
#define Parking_lights_GPIO_Port GPIOB
#define Start_switch_Pin GPIO_PIN_6
#define Start_switch_GPIO_Port GPIOC
#define PWM_H1_Pin GPIO_PIN_7
#define PWM_H1_GPIO_Port GPIOC
#define PWM_L1_Pin GPIO_PIN_8
#define PWM_L1_GPIO_Port GPIOC
#define Turn_left_Pin GPIO_PIN_9
#define Turn_left_GPIO_Port GPIOC
#define Turn_right_Pin GPIO_PIN_8
#define Turn_right_GPIO_Port GPIOA
#define Long_lights_Pin GPIO_PIN_9
#define Long_lights_GPIO_Port GPIOA
#define Short_lights_Pin GPIO_PIN_10
#define Short_lights_GPIO_Port GPIOA
#define In_extra_1_Pin GPIO_PIN_11
#define In_extra_1_GPIO_Port GPIOA
#define In_extra_2_Pin GPIO_PIN_12
#define In_extra_2_GPIO_Port GPIOA
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
