#include <stdio.h>

#if 0
int fact(int n)
{
	if (n == 0) return 1;
	return n*fact(n - 1);
}
void main(void)
{
	printf("%d\n", fact(5));
}
#endif


#if 0
int prt(int x)
{
	if (x == 0)return x;
	else if (x % 2)
	{
		printf("%d\n", x + prt(x - 1));
		return x;
	}
	else
	{
		printf("%d\n", x + prt(x - 1));
		return x;
	}
}
void main(void)
{
	int i;
	prt(5);
	//printf("3 - %d\n", i = prt(5));
}
#endif