#include <stdio.h>
#define HELLO 0
#define NAME 0
#define SPECIAL_CHARATERS 0

#if HELLO
void main(void){
	printf("helllo C! \n");
}
#endif

#if NAME
void main(void){
	printf("my name \nis cscs \nddfddddfd");
}
#endif

#if SPECIAL_CHARATERS
void main(void){
	printf("Hello C \n");
	printf("Return\rSa");
	printf("\nTab\tTab\n");
	printf("Back!\bBack!");
	printf("\nAlarm\a\a\a\n");
	// printf("Character\0 Ghost\n");
	printf("===================\n");
	printf("\"Hello\"\n");
	printf("\\n은 줄바꾸기를 합니다.\n");
}
#endif