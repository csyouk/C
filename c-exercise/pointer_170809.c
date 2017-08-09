#include <stdio.h>
#include <string.h>
#include "pointer_string_lib.h"

#if 0
void main(void)
{

}
#endif

#if 1
struct test
{
	int id;
	char *name;
	struct test *p;
}x, y;

void main(void)
{
	y.id = 2;
	y.name = "Lew";
	y.p = (struct test *) NULL;

	x.id = 1;
	x.name = "Song";
	x.p = &y;

	printf("id %d / name %s\n", x.id, x.name);
	printf("id %d / name %s\n", x.p->id, x.p->name );
}
#endif


#if 0
struct st
{
	int num;
	char name[10];
	int score;
};
void cheat1(struct st * p)
{
	p->score = 50;
	(*p).score = 80;
}

void cheat2(struct st * p)
{
	(p + 1)->score = 100;
	p[1].score = 200;
	(*(p + 1)).score = 300;
	
}

void main(void)
{
	struct st math[4] = { { 1, "KIM", 10 }, { 2, "KIM", 20 }, };
	cheat1(&math[1]);
	printf("score - %d\n", math[1].score);

	cheat2(math);
	printf("score - %d\n", math[1].score);
}
#endif

#if 0
struct st
{
	int num;
	char name[10];
	int score;
};
void cheat(struct st * math)
{
	(*math).score = 100;
	//math -> score = 100;
}
void main(void)
{
	struct st math = { 1, "KIM", 10 };
	cheat(&math);
	printf("score - %d\n", math.score);
}
#endif

#if 0
void main(void)
{
	char *ps[5] = { "base", "3", "s", "dd", "ga" };

	char *(*p)[5] = ps;



	
}
#endif


#if 0
void main(void)
{
	char str1[10] = "abcdefghi";
	char str2[10] = "123456789";
	strncpy(str2, str1, 4);
	printf("%s\n", str2);       // abcd56789
}
#endif

#if 0
void sort_ascending( char *(*p)[5] )
{
	char *temp;
	int i, j;

	for (i = 0; i < 5 - 1; i++)
	{
		for (j = i; j < 5; j++)
		{
			if (str_comp((*p)[i], (*p)[j]) > 0)
			{
				swap(&(*p)[i], &(*p)[j]);
			}
		}
	}
}
void main(void)
{
	//char *a[5] = { "welsdfsdl", "hddggis", \
	//	"good", "oksdsdfsdfsdfsd", "begst" };

	char *a[5] = { "ABC", "ADC", "AAB", "AED", "AZF"};
	sort_ascending(&a);

	//char *temp;
	//int i, j;

	//for (i = 0; i < 5-1; i++)
	//{
	//	for (j = i; j < 5; j++)
	//	{
	//		if (str_comp(a[i], a[j]) > 0)
	//		//if (str_cmp_size(a[i], a[j]) > 0)
	//		{
	//			//temp = a[i];
	//			//a[i] = a[j];
	//			//a[j] = temp;
	//			swap(&a[i], &a[j]);
	//		}
	//	}
	//}

	for (int i = 0; i < 5; i++)
	{
		printf("%s \n", a[i]);
	}
}
#endif

#if 0
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
