#include <stdio.h>
#include ".\aaa\level.h"
#include "c:\Users\student\Documents\Visual Studio 2013\Projects\c-exercise\c-exercise\aaa\level.h"

#define HEADER_LEVEL_TEST 0
#define HHEADER_LEVEL_TEST 0

#if HEADER_LEVEL_TEST

void main(void)
{

#if HHEADER_LEVEL_TEST
	int result;

	add_2(2, 3);

	result = add_2(3, 4);

	printf("Result is : %d\n", result);

#endif
}


int add_2(int a, int b)
{
	return a + b;
}

#endif