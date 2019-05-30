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

I2C_HandleTypeDef I2C_handle;

GPIO_InitTypeDef SCL_SDA_config;

#define TEMP_SENSOR_ADDRESS (0b1001000 << 1)
#define HT16K33_ADDRESS  (0b1110000 << 1)

/* regiszter címek */
#define SYSTEM_SETUP_REG	0x20
#define ROW_INT_SET_REG		0xA0
#define DISPLAY_SETUP_REG	0x80

/* regiszter értékek */
#define STANDBY_MODE		(0 << 0)
#define NORMAL_MODE			(1 << 0)
#define OUTPUT_MODE			(0 << 0)
#define DISP_ON_BLINK_OFF	(1 << 0)

/* regiszter címek */
#define READ_TEMP_REG		(0x00)
#define	CONFIG_REG			(0x01)

/* regiszter értékek */
#define	TEMP_STANDBY_MODE	(1 << 7)
#define	TEMP_NORMAL_MODE	(0 << 7)
#define	DATA_READY			(0 << 6)
#define	DATA_NOT_READY		(1 << 6)

uint8_t normal_mode = (SYSTEM_SETUP_REG | NORMAL_MODE);
uint8_t output_mode = (ROW_INT_SET_REG | OUTPUT_MODE);
uint8_t no_blinking = (DISPLAY_SETUP_REG | DISP_ON_BLINK_OFF);

void SystemClock_Config(void);

void SCL_SDA_init()
{
	__HAL_RCC_GPIOB_CLK_ENABLE();       /* enable GPIO clock */

	SCL_SDA_config.Pin         = GPIO_PIN_8 | GPIO_PIN_9;  /* PB8: SCL, PB9: SDA */
	SCL_SDA_config.Pull        = GPIO_PULLUP;
	SCL_SDA_config.Mode        = GPIO_MODE_AF_OD;          /* configure in pen drain mode */
	SCL_SDA_config.Alternate   = GPIO_AF4_I2C1;
	HAL_GPIO_Init(GPIOB, &SCL_SDA_config);
}

void I2C_init()
{
    __HAL_RCC_I2C1_CLK_ENABLE();        /* enable the clock of the used peripheral */

    I2C_handle.Instance             = I2C1;
    I2C_handle.Init.Timing          = 0x40912732;
    I2C_handle.Init.AddressingMode  = I2C_ADDRESSINGMODE_7BIT;

    HAL_I2C_Init(&I2C_handle);
}

void dot_matrix_init(void) {
	HAL_I2C_Master_Transmit(&I2C_handle, HT16K33_ADDRESS, &normal_mode, 1, 100);
	HAL_I2C_Master_Transmit(&I2C_handle, HT16K33_ADDRESS, &output_mode, 1, 100);
	HAL_I2C_Master_Transmit(&I2C_handle, HT16K33_ADDRESS, &no_blinking, 1, 100);
	//HAL_I2C_Master_Transmit(&hi2c1, HT16K33_ADDRESS, &max_brightness, 1, 100);
	HAL_Delay(50);
}

const uint8_t celsuis[8] = { 0x60, 0x60, 0x1e, 0x33, 0x81, 0x81, 0x33, 0x1e };

const uint8_t clear[] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
uint8_t temp_normal_mode = TEMP_NORMAL_MODE;
uint8_t temp_read_reg = READ_TEMP_REG;


int main(void)
{
	HAL_Init();
	SystemClock_Config();

	SCL_SDA_init();
	I2C_init();

	dot_matrix_init();

	uint8_t first_column = 0b11111111;
	uint8_t clear = 0;

    while (1) {

    	for (int i = 0; i <256; i++) {

		HAL_I2C_Mem_Write(&I2C_handle, HT16K33_ADDRESS, 0, I2C_MEMADD_SIZE_8BIT, &i, 1, 100);
		HAL_I2C_Mem_Write(&I2C_handle, HT16K33_ADDRESS, 2, I2C_MEMADD_SIZE_8BIT, &i, 1, 100);
		HAL_I2C_Mem_Write(&I2C_handle, HT16K33_ADDRESS, 4, I2C_MEMADD_SIZE_8BIT, &i, 1, 100);
		HAL_I2C_Mem_Write(&I2C_handle, HT16K33_ADDRESS, 6, I2C_MEMADD_SIZE_8BIT, &i, 1, 100);
		HAL_I2C_Mem_Write(&I2C_handle, HT16K33_ADDRESS, 8, I2C_MEMADD_SIZE_8BIT, &i, 1, 100);
		HAL_I2C_Mem_Write(&I2C_handle, HT16K33_ADDRESS, 10, I2C_MEMADD_SIZE_8BIT, &i, 1, 100);
		HAL_I2C_Mem_Write(&I2C_handle, HT16K33_ADDRESS, 12, I2C_MEMADD_SIZE_8BIT, &i, 1, 100);
		HAL_I2C_Mem_Write(&I2C_handle, HT16K33_ADDRESS, 14, I2C_MEMADD_SIZE_8BIT, &i, 1, 100);

		HAL_Delay(50);

		HAL_I2C_Mem_Write(&I2C_handle, HT16K33_ADDRESS, 0, I2C_MEMADD_SIZE_8BIT, &clear, 1, 100);
		HAL_I2C_Mem_Write(&I2C_handle, HT16K33_ADDRESS, 2, I2C_MEMADD_SIZE_8BIT, &clear, 1, 100);
		HAL_I2C_Mem_Write(&I2C_handle, HT16K33_ADDRESS, 4, I2C_MEMADD_SIZE_8BIT, &clear, 1, 100);
		HAL_I2C_Mem_Write(&I2C_handle, HT16K33_ADDRESS, 6, I2C_MEMADD_SIZE_8BIT, &clear, 1, 100);
		HAL_I2C_Mem_Write(&I2C_handle, HT16K33_ADDRESS, 8, I2C_MEMADD_SIZE_8BIT, &clear, 1, 100);
		HAL_I2C_Mem_Write(&I2C_handle, HT16K33_ADDRESS, 10, I2C_MEMADD_SIZE_8BIT, &clear, 1, 100);
		HAL_I2C_Mem_Write(&I2C_handle, HT16K33_ADDRESS, 12, I2C_MEMADD_SIZE_8BIT, &clear, 1, 100);
		HAL_I2C_Mem_Write(&I2C_handle, HT16K33_ADDRESS, 14, I2C_MEMADD_SIZE_8BIT, &clear, 1, 100);

		HAL_Delay(50);
    	}
    }
}

void SystemClock_Config(void) {
	RCC_OscInitTypeDef RCC_OscInitStruct = { 0 };
	RCC_ClkInitTypeDef RCC_ClkInitStruct = { 0 };
	RCC_PeriphCLKInitTypeDef PeriphClkInitStruct = { 0 };

	/** Configure the main internal regulator output voltage
	 */
	__HAL_RCC_PWR_CLK_ENABLE()
	;
	__HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE3);
	/** Initializes the CPU, AHB and APB busses clocks
	 */
	RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
	RCC_OscInitStruct.HSIState = RCC_HSI_ON;
	RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
	RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
	if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK) {
		Error_Handler();
	}
	/** Initializes the CPU, AHB and APB busses clocks
	 */
	RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK | RCC_CLOCKTYPE_SYSCLK
			| RCC_CLOCKTYPE_PCLK1 | RCC_CLOCKTYPE_PCLK2;
	RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
	RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
	RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
	RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

	if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK) {
		Error_Handler();
	}
	PeriphClkInitStruct.PeriphClockSelection = RCC_PERIPHCLK_I2C1;
	PeriphClkInitStruct.I2c1ClockSelection = RCC_I2C1CLKSOURCE_PCLK1;
	if (HAL_RCCEx_PeriphCLKConfig(&PeriphClkInitStruct) != HAL_OK) {
		Error_Handler();
	}
}

void Error_Handler(void) {
	/* USER CODE BEGIN Error_Handler_Debug */
	/* User can add his own implementation to report the HAL error return state */

	/* USER CODE END Error_Handler_Debug */
}
