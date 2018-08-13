/*! \file config.h
* \brief A basic configuration manager.
* \date  2018-08-13 11:22:56 AM
* \bug none
* \version V0.1
* \author Stephen Sampson [stephensampson@dal.ca]
*/

#include "ConfigPrereqs.h"

#ifndef CONFIG_H_
#define CONFIG_H_

#define NUMBER_OF_GPIO_LINES 4
#define DEFAULT_GPIO_MODE DIGITAL
#define DEFAULT_GPIO_DIRECTION IN

#define NUMBER_OF_UARTS 4
#define DEFAULT_UART_BAUD_RATE BAUD115200
#define DEFAULT_UART_STOP_BITS STOP_BITS_1
#define DEFAULT_UART_PARITY PARITY_EVEN

typedef struct {
    UartConfig  uartConfig[NUMBER_OF_UARTS];
    GpioConfig  gpioConfig[NUMBER_OF_GPIO_LINES];
} MasterConfig;

ConfigCodes InitializeConfigurationManager(void);
bool ConfigurationManagerInitialized(void);
const GpioConfig * GetGpioConfig(GpioID id);
ConfigCodes SetGpioConfig(const GpioID id, const GpioMode mode, const GpioDirection dir);
const UartConfig * GetUartConfig(UartId id);
ConfigCodes SetUartConfig(const UartId id, const BaudRate baud, const StopBits stop, const Parity parity);


#endif /* CONFIG_H_ */
