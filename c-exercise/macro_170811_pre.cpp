#include <stdio.h>

#define PRT(x) printf("NO_"#x" = %d\n", NO_##x)
#define UI unsigned int

int NO_1 = 128;
int NO_2 = 555;
int NO_A = 888;

typedef struct st
{
	int a;
	char b[4];
} STUDENT;
void main(void)
{
	
	PRT(1); 
	PRT(2);
	PRT(A);

	UI a = 3;
	printf("%d\n", 0x80000000);

	STUDENT stu = { 0, "hel" };
	printf("%d %s\n", stu.a, stu.b);
}