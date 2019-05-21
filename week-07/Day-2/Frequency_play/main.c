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

int main(void) {
	HAL_Init();

	BSP_PB_Init(BUTTON_KEY, BUTTON_MODE_GPIO);

	BSP_LED_Init(LED1);

	int startDelay = 2000;

	while (1) {
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				BSP_LED_On(LED1);
				HAL_Delay(startDelay);
				BSP_LED_Off(LED1);
				HAL_Delay(startDelay);
			}
			HAL_Delay(500);
			startDelay = startDelay / 2;
		}

		for (int k = 0; k < 3; k++) {
			for (int l = 0; l < 3; l++) {
				BSP_LED_On(LED1);
				HAL_Delay(startDelay);
				BSP_LED_Off(LED1);
				HAL_Delay(startDelay);
			}
			HAL_Delay(500);
			startDelay = startDelay * 2;
		}
	}
}
