/*! \file TestFramework.h
* \brief A basic framework for running tests.
* \date  2018-08-13 11:22:56 AM
* \bug none
* \version V0.1
* \author Stephen Sampson [stephensampson@dal.ca]
*/

#pragma once

/* Define a function pointer for a bool with no arguments */
typedef bool(*BoolFuncPtr)(void);

/* Define an object that will hold a pointer to the function to be called
as well as a formatted string to be printed */
typedef struct {
	char string[64];
	BoolFuncPtr fn;
} TestFrame;

/* Here we create a define that will be used to initialize an array of 
	of TestFrames in 'TestFramework.c' */
#define TESTS {\
	{"TestConfigIsInitReturnsFalseIfNotInitialized", TestConfigIsInitReturnsFalseIfNotInitialized},\
	{ "TestInitializeConfigurationManagerReturnsConfigOk", TestInitializeConfigurationManagerReturnsConfigOk },\
	{ "TestConfigIsInitReturnsTrueIfInitialized", TestConfigIsInitReturnsTrueIfInitialized }\
	/* Above this line, add your tests as per the following format:*/\
	/* {FormattedTestStringToPrint, FunctionNameOfTestToCall} */\
};
