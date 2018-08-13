/*! \file Tests.cpp
* \brief A basic framework for running tests.
* \date  2018-08-13 11:22:56 AM
* \bug none
* \version V0.1
* \author Stephen Sampson [ssampson@dal.com]
*/

#include <stdint.h>
#include "Config.h"

/* Helper functions that are not used by the application but are used
by the test project to set up the environment as needed by the test
should be declared here as extern and defined within the module they
modify */
extern void HelperUninitializeConfigurationManager(void);

/* TEST DSCRIPTION */
bool TestConfigIsInitReturnsFalseIfNotInitialized(void) 
{
	/* SETUP */
	bool expected = false;

	/* CODE UNDER TEST */
	bool actual = ConfigurationManagerInitialized();

	/* VERIFY RESTULS */
	return (expected == actual);
}

/* TEST DSCRIPTION */
bool TestInitializeConfigurationManagerReturnsConfigOk(void)
{
	/* SETUP */
	ConfigCodes expected = CONFIG_OK;
	
	/* CODE UNDER TEST */
	ConfigCodes actual = InitializeConfigurationManager();

	/* VERIFY RESTULS */
	return (expected == actual);
}

/* TEST DSCRIPTION */
bool TestConfigIsInitReturnsTrueIfInitialized(void) 
{
	/* SETUP */
	bool expected = true;
	bool actual = false;

	/* CODE UNDER TEST */
	HelperUninitializeConfigurationManager();
	if(InitializeConfigurationManager() == CONFIG_OK)
		actual = ConfigurationManagerInitialized();

	/* VERIFY RESTULS */
	return (expected == actual);
}