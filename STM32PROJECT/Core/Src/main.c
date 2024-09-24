/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{

  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  /* USER CODE BEGIN 2 */

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */

  void display7SEG(int num) {
    if (num < 0 || num > 9) return; // Ensure the number is between 0 and 9
    switch (num) {
        case 0:
            HAL_GPIO_WritePin(GPIOA, SEG_0_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOA, SEG_1_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOA, SEG_2_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOA, SEG_3_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOA, SEG_4_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOA, SEG_5_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOA, SEG_6_Pin, GPIO_PIN_SET);
            break;
        case 1:
            HAL_GPIO_WritePin(GPIOA, SEG_0_Pin, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIOA, SEG_1_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOA, SEG_2_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOA, SEG_3_Pin, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIOA, SEG_4_Pin, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIOA, SEG_5_Pin, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIOA, SEG_6_Pin, GPIO_PIN_SET);
            break;
        case 2:
            HAL_GPIO_WritePin(GPIOA, SEG_0_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOA, SEG_1_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOA, SEG_2_Pin, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIOA, SEG_3_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOA, SEG_4_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOA, SEG_5_Pin, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIOA, SEG_6_Pin, GPIO_PIN_RESET);
            break;
        case 3:
            HAL_GPIO_WritePin(GPIOA, SEG_0_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOA, SEG_1_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOA, SEG_2_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOA, SEG_3_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOA, SEG_4_Pin, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIOA, SEG_5_Pin, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIOA, SEG_6_Pin, GPIO_PIN_RESET);
            break;
        case 4:
            HAL_GPIO_WritePin(GPIOA, SEG_0_Pin, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIOA, SEG_1_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOA, SEG_2_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOA, SEG_3_Pin, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIOA, SEG_4_Pin, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIOA, SEG_5_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOA, SEG_6_Pin, GPIO_PIN_RESET);
            break;
        case 5:
            HAL_GPIO_WritePin(GPIOA, SEG_0_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOA, SEG_1_Pin, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIOA, SEG_2_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOA, SEG_3_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOA, SEG_4_Pin, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIOA, SEG_5_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOA, SEG_6_Pin, GPIO_PIN_RESET);
            break;
        case 6:
            HAL_GPIO_WritePin(GPIOA, SEG_0_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOA, SEG_1_Pin, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIOA, SEG_2_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOA, SEG_3_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOA, SEG_4_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOA, SEG_5_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOA, SEG_6_Pin, GPIO_PIN_RESET);
            break;
        case 7:
            HAL_GPIO_WritePin(GPIOA, SEG_0_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOA, SEG_1_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOA, SEG_2_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOA, SEG_3_Pin, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIOA, SEG_4_Pin, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIOA, SEG_5_Pin, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIOA, SEG_6_Pin, GPIO_PIN_SET);
            break;
        case 8:
            HAL_GPIO_WritePin(GPIOA, SEG_0_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOA, SEG_1_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOA, SEG_2_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOA, SEG_3_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOA, SEG_4_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOA, SEG_5_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOA, SEG_6_Pin, GPIO_PIN_RESET);
            break;
        case 9:
            HAL_GPIO_WritePin(GPIOA, SEG_0_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOA, SEG_1_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOA, SEG_2_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOA, SEG_3_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOA, SEG_4_Pin, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIOA, SEG_5_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOA, SEG_6_Pin, GPIO_PIN_RESET);
            break;
        default:
            // Handle invalid input
            break;
    }
  }

  void display7SEG2(int num) {
    if (num < 0 || num > 9) return; // Ensure the number is between 0 and 9
    switch (num) {
        case 0:
            HAL_GPIO_WritePin(GPIOB, SEG_0b_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_1b_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_2b_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_3b_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_4b_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_5b_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_6b_Pin, GPIO_PIN_SET);
            break;
        case 1:
            HAL_GPIO_WritePin(GPIOB, SEG_0b_Pin, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIOB, SEG_1b_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_2b_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_3b_Pin, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIOB, SEG_4b_Pin, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIOB, SEG_5b_Pin, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIOB, SEG_6b_Pin, GPIO_PIN_SET);
            break;
        case 2:
            HAL_GPIO_WritePin(GPIOB, SEG_0b_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_1b_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_2b_Pin, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIOB, SEG_3b_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_4b_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_5b_Pin, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIOB, SEG_6b_Pin, GPIO_PIN_RESET);
            break;
        case 3:
            HAL_GPIO_WritePin(GPIOB, SEG_0b_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_1b_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_2b_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_3b_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_4b_Pin, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIOB, SEG_5b_Pin, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIOB, SEG_6b_Pin, GPIO_PIN_RESET);
            break;
        case 4:
            HAL_GPIO_WritePin(GPIOB, SEG_0b_Pin, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIOB, SEG_1b_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_2b_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_3b_Pin, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIOB, SEG_4b_Pin, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIOB, SEG_5b_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_6b_Pin, GPIO_PIN_RESET);
            break;
        case 5:
            HAL_GPIO_WritePin(GPIOB, SEG_0b_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_1b_Pin, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIOB, SEG_2b_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_3b_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_4b_Pin, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIOB, SEG_5b_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_6b_Pin, GPIO_PIN_RESET);
            break;
        case 6:
            HAL_GPIO_WritePin(GPIOB, SEG_0b_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_1b_Pin, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIOB, SEG_2b_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_3b_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_4b_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_5b_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_6b_Pin, GPIO_PIN_RESET);
            break;
        case 7:
            HAL_GPIO_WritePin(GPIOB, SEG_0b_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_1b_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_2b_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_3b_Pin, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIOB, SEG_4b_Pin, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIOB, SEG_5b_Pin, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIOB, SEG_6b_Pin, GPIO_PIN_SET);
            break;
        case 8:
            HAL_GPIO_WritePin(GPIOB, SEG_0b_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_1b_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_2b_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_3b_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_4b_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_5b_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_6b_Pin, GPIO_PIN_RESET);
            break;
        case 9:
            HAL_GPIO_WritePin(GPIOB, SEG_0b_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_1b_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_2b_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_3b_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_4b_Pin, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIOB, SEG_5b_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOB, SEG_6b_Pin, GPIO_PIN_RESET);
            break;
        default:
            // Handle invalid input
            break;
    }
  }

  void set_light_state(int way, int state) {
      switch (way) {
          case 0:
              switch (state) {
                  case 0:
                      // Set GPIO pins for RED light
                      HAL_GPIO_WritePin(GPIOB, LED_1_Pin, GPIO_PIN_SET);
                      HAL_GPIO_WritePin(GPIOB, LED_12_Pin, GPIO_PIN_RESET);
                      HAL_GPIO_WritePin(GPIOB, LED_11_Pin, GPIO_PIN_RESET);
                      break;
                  case 1:
                      // Set GPIO pins for YELLOW light
                      HAL_GPIO_WritePin(GPIOB, LED_1_Pin, GPIO_PIN_RESET);
                      HAL_GPIO_WritePin(GPIOB, LED_12_Pin, GPIO_PIN_SET);
                      HAL_GPIO_WritePin(GPIOB, LED_11_Pin, GPIO_PIN_RESET);
                      break;
                  case 2:
                      // Set GPIO pins for GREEN light
                      HAL_GPIO_WritePin(GPIOB, LED_1_Pin, GPIO_PIN_RESET);
                      HAL_GPIO_WritePin(GPIOB, LED_12_Pin, GPIO_PIN_RESET);
                      HAL_GPIO_WritePin(GPIOB, LED_11_Pin, GPIO_PIN_SET);
                      break;
              }
              break;
          case 1:
              switch (state) {
                  case 0:
                      // Set GPIO pins for RED light
                      HAL_GPIO_WritePin(GPIOB, LED_4_Pin, GPIO_PIN_SET);
                      HAL_GPIO_WritePin(GPIOB, LED_3_Pin, GPIO_PIN_RESET);
                      HAL_GPIO_WritePin(GPIOB, LED_2_Pin, GPIO_PIN_RESET);
                      break;
                  case 1:
                      // Set GPIO pins for YELLOW light
                      HAL_GPIO_WritePin(GPIOB, LED_4_Pin, GPIO_PIN_RESET);
                      HAL_GPIO_WritePin(GPIOB, LED_3_Pin, GPIO_PIN_SET);
                      HAL_GPIO_WritePin(GPIOB, LED_2_Pin, GPIO_PIN_RESET);
                      break;
                  case 2:
                      // Set GPIO pins for GREEN light
                      HAL_GPIO_WritePin(GPIOB, LED_4_Pin, GPIO_PIN_RESET);
                      HAL_GPIO_WritePin(GPIOB, LED_3_Pin, GPIO_PIN_RESET);
                      HAL_GPIO_WritePin(GPIOB, LED_2_Pin, GPIO_PIN_SET);
                      break;
              }
              break;

      }
    }

  // void CountDownNumofSec(int numOfSec) {
  //   for (int i = numOfSec; i > 0; i--) {
  //       display7SEG(i);
  //       HAL_Delay(1000);
  //   }
  // }

typedef enum {
    STATE_WAY1_GREEN,
    STATE_WAY1_YELLOW,
    STATE_WAY1_RED,
    STATE_WAY2_GREEN,
    STATE_WAY2_YELLOW,
    STATE_WAY2_RED
} TrafficLightState;

TrafficLightState state = STATE_WAY1_GREEN;
TrafficLightState state2 = STATE_WAY2_RED;
int count=1;
int count2=1;
static int num1 = 3;
static int num2 = 5;
  while (1)
  {



      switch (state) {
        case STATE_WAY1_GREEN:
            // Way 1: GREEN
            set_light_state(0, 2); // Way 1 GREEN

            if (num1 < 1) {
                num1 = 3; // Reset to 3 after reaching 1
            }

            display7SEG(num1);
            num1--;

            if (count == 3) {
                state = STATE_WAY1_YELLOW;
                count = 0;
            }
            break;

        case STATE_WAY1_YELLOW:
            // Way 1: YELLOW
            set_light_state(0, 1); // Way 1 YELLOW

            if (num1 < 1) {
                num1 = 2; // Reset to 2 after reaching 1
            }

            display7SEG(num1);
            num1--;

            if (count == 2) {
                state = STATE_WAY1_RED;
                count = 0;
            }
            break;
        case STATE_WAY1_RED:
            // Way 1: RED
            set_light_state(0, 0); // Way 1 RED

            if (num1 < 1) {
                num1 = 5; // Reset to 5 after reaching 1
            }

            display7SEG(num1);
            num1--;

            if (count == 5) {
                state = STATE_WAY1_GREEN;
                count = 0;
            }
            break;


    }

      switch (state2) {
          case STATE_WAY2_RED:
              // Way 2: RED
              set_light_state(1, 0); // Way 2 RED

              if (num2 < 1) {
                  num2 = 5; // Reset to 5 after reaching 1
              }

              display7SEG2(num2);
              num2--;

              if (count2 == 5) {
                  state2 = STATE_WAY2_GREEN;
                  count2 = 0;
              }
              break;

          case STATE_WAY2_GREEN:
              // Way 2: GREEN
              set_light_state(1, 2); // Way 2 GREEN

              if (num2 < 1) {
                  num2 = 3; // Reset to 3 after reaching 1
              }

              display7SEG2(num2);
              num2--;

              if (count2 == 3) {
                  state2 = STATE_WAY2_YELLOW;
                  count2 = 0;
              }
              break;

          case STATE_WAY2_YELLOW:
              // Way 2: YELLOW
              set_light_state(1, 1); // Way 2 YELLOW

              if (num2 < 1) {
                  num2 = 2; // Reset to 2 after reaching 1
              }

              display7SEG2(num2);
              num2--;

              if (count2 == 2) {
                  state2 = STATE_WAY2_RED;
                  count2 = 0;
              }
              break;
      }

      count++;
      count2++;
      HAL_Delay(1000);



    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};
/* USER CODE BEGIN MX_GPIO_Init_1 */
/* USER CODE END MX_GPIO_Init_1 */

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOD_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, SEG_0_Pin|SEG_1_Pin|SEG_2_Pin|SEG_3_Pin
                          |SEG_4_Pin|LED_RED_Pin|LED_YELLOW_Pin|LED_GREEN_Pin
                          |SEG_5_Pin|SEG_6_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, LED_1_Pin|LED_2_Pin|LED_10_Pin|LED_11_Pin
                          |LED_12_Pin|SEG_5b_Pin|SEG_6b_Pin|LED_3_Pin
                          |LED_4_Pin|SEG_0b_Pin|SEG_1b_Pin|SEG_2b_Pin
                          |SEG_3b_Pin|SEG_4b_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : SEG_0_Pin SEG_1_Pin SEG_2_Pin SEG_3_Pin
                           SEG_4_Pin LED_RED_Pin LED_YELLOW_Pin LED_GREEN_Pin
                           SEG_5_Pin SEG_6_Pin */
  GPIO_InitStruct.Pin = SEG_0_Pin|SEG_1_Pin|SEG_2_Pin|SEG_3_Pin
                          |SEG_4_Pin|LED_RED_Pin|LED_YELLOW_Pin|LED_GREEN_Pin
                          |SEG_5_Pin|SEG_6_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : LED_1_Pin LED_2_Pin LED_10_Pin LED_11_Pin
                           LED_12_Pin SEG_5b_Pin SEG_6b_Pin LED_3_Pin
                           LED_4_Pin SEG_0b_Pin SEG_1b_Pin SEG_2b_Pin
                           SEG_3b_Pin SEG_4b_Pin */
  GPIO_InitStruct.Pin = LED_1_Pin|LED_2_Pin|LED_10_Pin|LED_11_Pin
                          |LED_12_Pin|SEG_5b_Pin|SEG_6b_Pin|LED_3_Pin
                          |LED_4_Pin|SEG_0b_Pin|SEG_1b_Pin|SEG_2b_Pin
                          |SEG_3b_Pin|SEG_4b_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

/* USER CODE BEGIN MX_GPIO_Init_2 */
/* USER CODE END MX_GPIO_Init_2 */
}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */
