/*! \file config.cpp
* \brief A basic configuration manager.
* \date  2018-08-13 11:22:56 AM
* \bug none
* \version V0.1
* \author Stephen Sampson [stephensampson@dal.ca]
*/

#include <stdint.h>
#include <string.h>
#include "Config.h"

static MasterConfig ConfigurationManager;
static bool ConfigurationManagerInitalized = false;

ConfigCodes InitializeConfigurationManager(void)
{
	if (ConfigurationManagerInitalized)
		return CFG_MGR_ALREADY_INIT;

	for (int unsigned i = 0; i < NUMBER_OF_GPIO_LINES; i++) {
		ConfigurationManager.gpioConfig[i].direction = DEFAULT_GPIO_DIRECTION;
		ConfigurationManager.gpioConfig[i].mode = DEFAULT_GPIO_MODE;
	}

	for (int unsigned i = 0; i < NUMBER_OF_UARTS; i++) {
		ConfigurationManager.uartConfig[i].baudRate = DEFAULT_UART_BAUD_RATE;
		ConfigurationManager.uartConfig[i].stopBits = DEFAULT_UART_STOP_BITS;
		ConfigurationManager.uartConfig[i].parity = DEFAULT_UART_PARITY;
	}

	ConfigurationManagerInitalized = true;
	return CONFIG_OK;
}

bool ConfigurationManagerInitialized(void) 
{
	return ConfigurationManagerInitalized;
}

/*************************************************
				GPIO Config
*************************************************/

const GpioConfig *const GetGpioConfig(GpioID id)
{
	if (!ConfigurationManagerInitalized)
		return NULL;

	if((id >= GPIO_INVALID) || (id < 0))
		return NULL;

	return &ConfigurationManager.gpioConfig[id];
}

ConfigCodes SetGpioConfig(const GpioID id, const GpioMode mode, const GpioDirection dir)
{
	if (!ConfigurationManagerInitalized)
		return CFG_MGR_NOT_INIT;

	ConfigurationManager.gpioConfig[id].mode = mode;
	ConfigurationManager.gpioConfig[id].direction = dir;
	return CONFIG_OK;
}

/*************************************************
				 UART Config
*************************************************/

const UartConfig *const GetUartConfig(UartId id)
{
	if (!ConfigurationManagerInitalized)
		return NULL;

	if ((id >= UART_INVALID) || (id < 0))
		return NULL;

	return &ConfigurationManager.uartConfig[id];
}

ConfigCodes SetUartConfig(const UartId id, const BaudRate baud, const StopBits stop, const Parity parity)
{
	if (!ConfigurationManagerInitalized)
		return CFG_MGR_NOT_INIT;

	ConfigurationManager.uartConfig[id].baudRate = baud;
	ConfigurationManager.uartConfig[id].stopBits= stop;
	ConfigurationManager.uartConfig[id].parity = parity;


	return CONFIG_OK;
}

/*************************************************
	HELPER FUNCTIONS USED IN TEST PROJECT
*************************************************/

void HelperUninitializeConfigurationManager(void) {
	memset(&ConfigurationManager, 0, sizeof(ConfigurationManager));
	ConfigurationManagerInitalized = false;
}