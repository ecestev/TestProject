#pragma once

#include "ConfigPrereqs.h"

#define NUMBER_OF_GPIO_LINES 4
#define DEFAULT_GPIO_MODE DIGITAL
#define DEFAULT_GPIO_DIRECTION IN

#define NUMBER_OF_UARTS 4
#define DEFAULT_UART_BAUD_RATE BAUD115200
#define DEFAULT_UART_STOP_BITS STOP_BITS_1
#define DEFAULT_UART_PARITY PARITY_EVEN

typedef struct {
	UartConfig	uartConfig[NUMBER_OF_UARTS];
	GpioConfig	gpioConfig[NUMBER_OF_GPIO_LINES];
} MasterConfig;

ConfigCodes InitializeConfigurationManager(void);
bool ConfigurationManagerInitialized(void);
const GpioConfig *const GetGpioConfig(GpioID id);
ConfigCodes SetGpioConfig(const GpioID id, const GpioMode mode, const GpioDirection dir);
const UartConfig *const GetUartConfig(UartId id);
ConfigCodes SetUartConfig(const UartId id, const BaudRate baud, const StopBits stop, const Parity parity);
