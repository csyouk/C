#include <stdio.h>

#define SIZE_ENABLE 0

#if SIZE_ENABLE
void main(void){

	int i;
	printf("size of int : %d", sizeof i);

}

#endif