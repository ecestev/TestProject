#pragma once

/* Define a function pointer for a bool with no arguments */
typedef bool(*BoolFuncPtr)(void);

/* Define an object that will hold a pointer to the function to be called
as well as a formatted string to be printed */
typedef struct {
	char string[64];
	BoolFuncPtr fn;
} TestFrame;

#define TESTS {\
{"TestConfigIsInitReturnsFalseIfNotInitialized", TestConfigIsInitReturnsFalseIfNotInitialized},\
{ "TestInitializeConfigurationManagerReturnsConfigOk", TestInitializeConfigurationManagerReturnsConfigOk },\
{ "TestConfigIsInitReturnsTrueIfInitialized", TestConfigIsInitReturnsTrueIfInitialized }\
/* Above this line, add your tests as per the following format:*/\
/* {FormattedTestStringToPrint, FunctionNameOfTestToCall} */\
};