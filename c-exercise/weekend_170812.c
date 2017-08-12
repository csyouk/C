#include <stdio.h>

#if 1
int prt(int x)
{
	if (x == 0)return x;
	else if (x % 2)
	{
		printf("1 - %d\n", x + prt(x - 1));
		return x;
	}
	else
	{
		printf("2 - %d\n", x + prt(x - 1));
		return x;
	}
}
void main(void)
{
	int i;
	printf("3 - %d\n", i = prt(5));
}
#endif