#include <stdio.h>

#define CONTENTS_SIZE 3

#define PRINT 0
#define CALCULATE_SIZE 0
#define ASCII_CODE 0
#define TEST_ASCII 0
#define FORMAT_DIRECTIVE 0
#define EX12 0
#define EX13 0
#define EX14 0
#define LONGLONG 0
#define FORMAT_INT_DECIMAL 0



#if PRINT
void main(void){
	// printf("Hello\n");
	printf("%d, %d \n", 100, -100);
	printf("%d, %d \n", 100+ 100, -100-100);
	printf("%d, %x, %o\n", 100, 100, 100);
	printf("%d, %x, %o\n", 0x64, 0x64, 0x64);
	printf("%d, %x, %o\n", 014, 0144, 0134);
	printf("%d, %#x, %#o\n", 100, 100, 100);
	printf("%d, %#x, %#o\n", 89, 89, 89);
	printf("%d, %x, %o\n", 89, 89, 89);
}
#endif

#if CALCULATE_SIZE

void main(void){
	int i = 1;
	char j = ' ';

	printf("size of integer : %d \n", sizeof(i));
	printf("size of character : %d \n", sizeof(j));

	for (int k = 0; k < 97; k++)
	{
		int temp = j + k;
		printf("ASCII : %c, %3dth, %#x \n", temp, temp, temp);
	}

	printf("==============================\n");
	printf("%d \n", '5' - '0');
	printf("%c \n", 5 + '0');
	printf()

	for (int ii = 0; ii < 128; ii++)
	{
		printf("ASCII : %c, %3dth, %#x \n", ii, ii, ii);
	}

}

#endif


#if ASCII_CODE
void main(void){
	for (int ii = 0; ii < 128; ii++)
	{
		printf("ASCII : %c, %3dth, %#x \n", ii, ii, ii);
	}
}
#endif


#if TEST_ASCII
void main(void){
	printf("\x41 \n");        // A
	printf("\101 \n");        // A 
	printf("A    \n");        // A
	printf("%c   \n", 'A');   // A input as char from
	printf("%c   \n", 0x41);  // A input as hexadecimal form
	printf("%c   \n", 65);    // A input as decimal form
	printf("%c   \n", 0101);  // A input as octal form
}
#endif

#if FORMAT_DIRECTIVE
void main(void){
	printf("%c %c %c\n", 'A', 65, 0x41);
	printf("%c %c %c\n", 'A'+1, 'B', 'C'-1);
	printf("%d %d %d %d\n", 1, 1+1, '1', '1'+1);
	printf("%c%c%c\n", 'A', 'B', 'C');
	printf("%s\n", "ABC");
}
#endif

#if EX12
void main(void){

	char* titles[CONTENTS_SIZE] = { "성명", "과목", "학점" };
	char* contents[CONTENTS_SIZE] = { "홍길동", "C언어", "A" };

	for (int i = 0; i < CONTENTS_SIZE; i++)
	{
		printf("%s : %s \n", titles[i], contents[i]);
	}
}
#endif


#if EX13
void main(void){
	printf("%f, %f \n", 3.14, -3.14);
	printf("%.5f, %.3f \n", 123.4567, 123.4567);
	printf("%10.2f, %5.2f, \n", 123.4567, 123.4567);
	printf("%10.2f, %010.2f \n", 123.4567, 123.4567);
}
#endif

#if EX14
void main(void){
	printf("%.1f \n", 3.14 * 3.0 * 3.0);
}
#endif

#if LONGLONG
void main(void){
	unsigned long long tera = 1024 * 1024 * 1024 * 1024ll; // 반드시 ll suffix를 붙여줘야 함.
	printf("%lld", tera); //  %lld 가 format directive 이다.
}
#endif


#if FORMAT_INT_DECIMAL
void main(void){
	printf("%10.2f \n", 123.4567);   // [    123.45]
	printf("%010.2f \n", 123.4567);  // [0000123.45]
}
#endif