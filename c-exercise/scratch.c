#include <stdio.h>

#define TEST 0

#if TEST
void main(void){
	printf("printf(\"Hel\\0lo\\n\")  \n");
	printf("%d %d %d   \n", 1024, 1048576, 1073741824);
	printf("%d %o %x  \n", 0xFE, 0xFE, 0xFE);
	printf("%d, %#x, %#o   \n", 0100, 100, 0x100);
	printf("%c   \n", '\40');
	printf("%c   \n", '3'-'1'+'F');
	printf("%d-%02d-%02d   \n", 2017, 7, 17);

	printf("%d원 %d%%할인가격 : %.2f원 \n", 12345, 50, 12345/2.0);
}
#endif