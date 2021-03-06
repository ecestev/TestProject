/*! \file TestFramework.cpp
* \brief A basic framework for running tests.
* \date  2018-08-13 11:22:56 AM
* \bug none
* \version V0.1
* \author Stephen Sampson [stephensampson@dal.ca]
*/

#include <stdbool.h>
#include "TestFramework.h"
#include "Tests.h"
#include "stdio.h"

static TestFrame tests[] = TESTS;

int main()
{
	for (unsigned i = 0; i < sizeof(tests) / sizeof(tests[i]); i++) {
		printf("%-50s", tests[i].string);
		if (tests[i].fn())
			printf(": Passed\n\r");
		else 
			printf(": Failed\n\r");
	}

	while (1) {

	}

    return 0;
}

