#include <stdio.h>
//#if 1
//void main(void)
//{
//
//}
//#endif

#if 1
void swap(int *p, int *q)
{
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
}

void main(void)
{
	int a = 10, b = 20;
	//printf("%d\n", *a);
	printf("before : %d, %d\n", a, b);
	swap(&a, &b);
	printf("after  : %d, %d\n", a, b);
}
#endif
