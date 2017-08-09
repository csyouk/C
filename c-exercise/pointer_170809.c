#include <stdio.h>
//#if 1
//void main(void)
//{
//
//}
//#endif

#if 1
void main(void)
{
	char *a[5] = { "well", "hi", "good", "ok", "best" };
	char *temp;
	int i, j;
	for (i = 0; i < 5-1; i++)
	{
		for (j = i; j < 5; j++)
		{
			if (*a[i] > *a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	for (i = 0; i < 5; i++)
	{
		printf("%s \n", a[i]);
	}
}
#endif

#if 0
void swap(char **pa, char **pb)
{
	char *temp = *pb;
	*pb = *pa;
	*pa = temp;
}

void main(void)
{
	char *a = "scsa";
	char *b = "hi";
	printf("%s %s\n", a, b);
	swap(&a, &b);
	printf("%s %s\n", a, b);
}
#endif

#if 0
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
