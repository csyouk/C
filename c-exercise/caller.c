#define HEADER_TEST 0

#include <stdio.h>
#include "body.h"



#if HEADER_TEST
void main(void){

	int result;

	result = add(add(add(2, 3), add(3, 4)), add(add(1, 9), add(5, 2)));
	printf("%d\n", result);

	printf("%d\n", HHEADER_TEST);
}
#endif