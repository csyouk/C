#include <stdio.h>

void main(void){
	//int a = -37; 
	//printf("=======================================\n");
	//
	//printf("%08d, %08u, %#x\n", -37, -37, -37);
	//printf("%08d, %08u, %#x\n", -122, -122, -122);
	//printf("%08d, %08u, %#.8x\n", 0xfe, 0xfe, 0xfe);
	//printf("%08d, %08u, %#x\n", -0xfe, -0xfe, -0xfe);
	//
	//printf("=======================================\n");
	//
	//printf("%d, %u\n", -1, -1);
	//printf("%d, %u\n", 4294967295u, 4294967295u);
	//printf("%#X, %#X\n", -1, 4294967295u);
	//
	//printf("=======================================\n");

	//printf("%hu, %hd, %#hx, %#hx, %#ho\n", 100u, -100, 0xf3, 0xfabcde, 0144);
	//printf("%hu, %hd, %#.8hx, %#.8hx, %#ho\n", 100u, -100, 0xf3, 0xfabcde, 0144);

	//printf("=======================================\n");

	//printf("result -> %#.16x\n", 0x123456789abcdef0LL);
	//printf("result -> %#llx\n", 0x123456789abcdef0LL);
	//printf("result -> %#llx\n", 0x13579abc);

	//printf("=======================================\n");

	printf("Willtek""Corporation\n");
	printf("Willtek" "Corporation\n");
	printf("Willtek"	"Corporation\n");
	printf("%s", "Willtek""Corporation\n");
	printf("%s", "Willtek"
		"Corporation\n");
	printf("%s", "Willtek"    \
		"Corporation\n");
}