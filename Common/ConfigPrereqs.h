#pragma once

/***********************************************/
/*	  	 PUT ALL ENUMS IN THIS SECTION		   */		
/***********************************************/
typedef enum {
	CFG_MGR_NOT_INIT = -100,
	CFG_INVALID_ID,
	CFG_MGR_ALREADY_INIT,
	CONFIG_FAIL_CONDITION3,
	CONFIG_FAIL_CONDITION4,
	CONFIG_FAIL_CONDITION5,
	CONFIG_OK = 0

} ConfigCodes;

typedef enum {
	GPIO0,
	GPIO1,
	GPIO2,
	GPIO3,
	GPIO_INVALID
} GpioID;

typedef enum {
	ANALOG,
	DIGITAL
} GpioMode;

typedef enum {
	IN,
	OUT
} GpioDirection;

typedef enum {
	UART0,
	UART1,
	UART_INVALID
} UartId;

typedef enum {
    PARITY_NONE,
    PARITY_EVEN,
    PARITY_ODD,
    PARITY_SPACE,
    PARITY_MARK,
} Parity;

typedef enum {
    STOP_BITS_1,
    STOP_BITS_1_5,
    STOP_BITS_2,
} StopBits;

typedef enum {
	BAUD9600,
	BAUD115200,
} BaudRate;

/***********************************************/
/* 	 DEFINE ALL STRUCTURES IN THIS SECTION	   */
/***********************************************/

typedef struct {
	GpioMode mode;
	GpioDirection direction;
} GpioConfig;

typedef struct {
	uint32_t baudRate;
	uint8_t stopBits;
	uint8_t parity;
} UartConfig;