/*! \file Application.cpp
* \brief A basic application.
* \date  2018-08-13 11:22:56 AM
* \bug none
* \version V0.1
* \author Stephen Sampson [stephensampson@dal.ca]
*/

#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>
#include "ConfigPrereqs.h"
#include "Config.h"

void error_handler(void);

int main()
{
	ConfigCodes res;
	
	res = InitializeConfigurationManager();
	if (res != CONFIG_OK)
		error_handler();

	printf("Getting UART0 Config...\n\n\r");
	const UartConfig *const config = GetUartConfig(UART0);
	if (config == NULL)
		error_handler();

	printf("Uart0 Config:\n\r   BaudRate: %d\n\r   StopBits: %d\n\r   Parity:   %d\n\n\r", config->baudRate, config->stopBits, config->parity);

	
	printf("\nGetting GPIO1 Config...\n\n\r");
	const GpioConfig *const config1 = GetGpioConfig(GPIO1);
	if (config1 == NULL)
		error_handler();

	printf("GPIO1 Config:\n\r   Direction: %d\n\r   Mode: %d\n\n\r", config1->direction, config1->mode);

	printf("Setting GPIO1 Config...\n\n\r");
	SetGpioConfig(GPIO1, ANALOG, OUT);

	printf("Getting GPIO1 Config...\n\n\r");
	const GpioConfig *const config2 = GetGpioConfig(GPIO1);
	if (config2 == NULL)
		error_handler();

	printf("GPIO1 Config:\n\r   Direction: %d\n\r   Mode: %d\n\n\r", config2->direction, config2->mode);

	while (1) {

	}

    return 0;
}

void error_handler(void) {
	printf("An internal error has occured... Halting Program\n\n\r");
	while (1) {

	}
}