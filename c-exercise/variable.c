#include <stdio.h>

#define CAL_SIZE 0
#define DECLAR_VAR 0
#define EX16 0
#define EX17 0
#define POINTER 0

#if CAL_SIZE
void main(void){

	unsigned i = 0;
	signed j = 0;

	long long int k = 0;
	
	printf("size of unsigned integer : %d Bytes \n", sizeof(i));
	printf("size of signed integer : %d Bytes \n", sizeof(j));
	printf("size of long long integer : %d Bytes \n", sizeof(k));

}
#endif


#if DECLAR_VAR
void main(void){
	int i;
	int *j = &i;

	printf("Address of i : %#x \n", &i);
	printf("Value of j : %d \n", j);
}
#endif

#if EX16
void main(void){
	char name[12] = "honggildong"; // null 문자 포함 12바이트 차지함. 
	char name2[7] = "육창수"; // 한글은 한문자당 2바이트씩. + NULL 문자
	printf("%s\n", name);
	printf("%s\n", name2);
}
#endif

#if EX17
void main(void){
	int eng = 80, math = 78, korean = 99, sum;
	
	float size = 3.0, avg;
	sum = eng + math + korean;
	avg = sum / size;

	printf("%d, %f \n", sum, avg);

}
#endif


#if POINTER
void main(void){

}
#endif

/*
#if 0
#endif
*/