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

void init_pins() {
	RCC->AHB1ENR |= RCC_AHB1ENR_GPIOFEN; /* GPIOF clock enable */

	// Init user led (F10-7)
	GPIOF->MODER |= (GPIO_MODER_MODER10_0); /* _0 jelenti: 01: General purpose output mode */
	GPIOF->MODER |= (GPIO_MODER_MODER9_0);
	GPIOF->MODER |= (GPIO_MODER_MODER8_0);
	GPIOF->MODER |= (GPIO_MODER_MODER7_0);

}

int main(void) {
	HAL_Init();
	init_pins();

	int delay = 60;

	while (1) {

		for (int i = 0; i < 4; i++) {
			GPIOF->BSRR = (1 << (7 + i));
			HAL_Delay(delay);
			GPIOF->BSRR = (1 << (23 + i));
		}

		for (int l = 3; l >= 0; l--) {
			GPIOF->BSRR = (1 << (7 + l));
			HAL_Delay(delay);
			GPIOF->BSRR = (1 << (23 + l));
		}
	}
}

