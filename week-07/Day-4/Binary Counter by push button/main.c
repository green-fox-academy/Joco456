/**
  ******************************************************************************
  * @file    main.c
  * @author  Ac6
  * @version V1.0
  * @date    01-December-2013
  * @brief   Default main function.
  ******************************************************************************
*/


#include "stm32f7xx.h"
#include "stm32746g_discovery.h"

void init_led_pin()
{
	__HAL_RCC_GPIOF_CLK_ENABLE();

	GPIO_InitTypeDef gpio_config;

	gpio_config.Pin = GPIO_PIN_10 | GPIO_PIN_9 | GPIO_PIN_8 | GPIO_PIN_7;
	gpio_config.Mode = GPIO_MODE_OUTPUT_PP;
	gpio_config.Pull = GPIO_NOPULL;
	gpio_config.Speed = GPIO_SPEED_FAST;

	HAL_GPIO_Init(GPIOF, &gpio_config);
}

void init_user_button()
{
	__HAL_RCC_GPIOB_CLK_ENABLE();

	GPIO_InitTypeDef gpio_config2;

	gpio_config2.Pin = GPIO_PIN_4;
	gpio_config2.Mode = GPIO_MODE_IT_RISING;
	gpio_config2.Pull = GPIO_NOPULL;
	gpio_config2.Speed = GPIO_SPEED_FAST;

	HAL_GPIO_Init(GPIOB, &gpio_config2);
}
			
int main(void)
{
	HAL_Init();
	init_led_pin();
	init_user_button();

	int counter = 0;

	while (1) {

		if (HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_4)) {
			counter ++;
			HAL_Delay(200);
		}

		if ((counter % 2) > 0) {
			HAL_GPIO_WritePin(GPIOF, GPIO_PIN_7, GPIO_PIN_SET);
		} else {
			HAL_GPIO_WritePin(GPIOF, GPIO_PIN_7, GPIO_PIN_RESET);
		}

		if ((counter % 4) > 1) {
			HAL_GPIO_WritePin(GPIOF, GPIO_PIN_8, GPIO_PIN_SET);
		} else {
			HAL_GPIO_WritePin(GPIOF, GPIO_PIN_8, GPIO_PIN_RESET);
		}

		if ((counter % 8) > 3) {
			HAL_GPIO_WritePin(GPIOF, GPIO_PIN_9, GPIO_PIN_SET);
		} else {
			HAL_GPIO_WritePin(GPIOF, GPIO_PIN_9, GPIO_PIN_RESET);
		}

		if ((counter % 16) > 7) {
			HAL_GPIO_WritePin(GPIOF, GPIO_PIN_10, GPIO_PIN_SET);
		} else {
			HAL_GPIO_WritePin(GPIOF, GPIO_PIN_10, GPIO_PIN_RESET);
		}

		if (counter == 16) {
			counter = 0;
		}
	}
}
