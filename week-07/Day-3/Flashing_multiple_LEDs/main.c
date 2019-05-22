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

	uint32_t led1On = (1 << 10) | (1 << 9) | (1 << 8) | (1 << 7);

	uint32_t led1Off = (1 << 26) | (1 << 25) | (1 << 24) | (1 << 23);

	while (1) {

		GPIOF->BSRR = led1On;

		HAL_Delay(1000);

		GPIOF->BSRR = led1Off;

		HAL_Delay(1000);

	}
}
