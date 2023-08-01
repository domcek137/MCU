/*
 * tools.c
 *
 *  Created on: Jul 31, 2023
 *      Author: dodok
 */


#include "main.h"
#include "stm32l4xx_hal_uart.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>


void myPrint(const char* paper, ...){
	va_list param;
	char result[256];

	va_start(param, paper);
	vsprintf(result, paper, param);
	va_end(param);

	HAL_UART_Transmit(&hlpuart1, (uint8_t*)result, strlen(result), 100);
	HAL_Delay(1000);
}
