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

volatile int counter = 0;
volatile int last_button_press_time =0;

void init_user_button()
{
	__HAL_RCC_GPIOB_CLK_ENABLE();

	GPIO_InitTypeDef gpio_config2;

	gpio_config2.Pin = GPIO_PIN_4;
	gpio_config2.Mode = GPIO_MODE_IT_RISING;
	gpio_config2.Pull = GPIO_NOPULL;
	gpio_config2.Speed = GPIO_SPEED_FAST;

	HAL_GPIO_Init(GPIOB, &gpio_config2);
	HAL_NVIC_EnableIRQ(EXTI4_IRQn);
	HAL_NVIC_SetPriority(EXTI4_IRQn, 10, 0);
}
			
int main(void)
{
	HAL_Init();
	BSP_LED_Init(LED_GREEN);
	init_user_button();

	while (1){
	}
}

void EXTI4_IRQHandler(){
	HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_4);
}

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin){

	int current_time = HAL_GetTick();

	if ((last_button_press_time + 250) > current_time)
		return;

	last_button_press_time = current_time;

	counter ++;

	if (counter == 5) {
		BSP_LED_Toggle(LED_GREEN);
		HAL_NVIC_DisableIRQ(EXTI4_IRQn);
	}
}
