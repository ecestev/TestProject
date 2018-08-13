#include "Tests.h"
#include "stdio.h"

/* Define a function pointer for a bool with no arguments */
typedef bool(*BoolFuncPtr)(void);

/* Create an array of function pointers where we will register the tests 
	to be run */
static BoolFuncPtr tests[] = {
	TestConfigIsInitReturnsFalseIfNotInitialized,		// Test 0
	TestInitializeConfigurationManagerReturnsConfigOk,	// Test 1
	TestConfigIsInitReturnsTrueIfInitialized			// Test 1
	/* Continue adding your tests above this line */
};

/* Execute the tests. This section should not be modified */
int main()
{
	for (unsigned i = 0; i < sizeof(tests) / sizeof(tests[i]); i++) {
		if (tests[i]())
			printf("Test %d: Passed\n\r", i);
		else 
			printf("Test %d: Failed\n\r", i);
	}

	while (1) {

	}

    return 0;
}

