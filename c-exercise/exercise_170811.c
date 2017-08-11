#include <stdio.h>


#if 0
void main(void)
{

	short a = 3;
	short *p = &a;
	short **pp = &p;
	

	printf("%x %x\n", pp, pp + 1);
	printf("%x %x\n", *pp, *pp + 1);
	printf("%d %d\n", **pp, **pp + 1);
}
#endif

#if 0
void test(void)
{
	printf("test invoked!\n");
}
int test2(int num, int num2)
{
	return num * num2;
}
void main(void)
{
	int result;
	void (*p)(void) = &test;
	int(*q)(int, int) = &test2;
	p();
	result = q(2, 3);

	printf("result=%d\n", result);
}
#endif