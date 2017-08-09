#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pointer_string_lib.h"

// 아침 쪽지 시험.
#if 1
void main(void){
	char a[] = "SCSA";
	char *p = a;

	printf("%x\n", &a);     // 가능
	printf("%x\n", &a++);   // 불가
	printf("%c\n", *a);     // 
	printf("%x\n", p);		// 가능
	printf("%x\n", ++p);	// 가능
	printf("%s\n", *++p);	// 가능
	printf("%c", ++*p);		// 가능
	printf("%s", a++);      // 불가
}
#endif


#if 0
struct tagA
{
	int i;
	struct tagA *pA;
} x;
void main(void)
{
	printf("%d\n", sizeof(x));
}
#endif


#if 0
struct st
{
	int a;
	char b;
	short c[3];
} x = { 10, 'A' };

void main(void)
{
	struct st *p = &x;
	(*p).b = 'L';

	printf("%c\n", x.b);

	int *q = calloc(10, sizeof(struct st));
	printf("%d\n", sizeof(struct st));
}
#endif


#if 0
void main(void)
{
	short a = 3;
	short *p = &a;
	short **q = &p;

	printf("%x %x\n", q, q + 1);
	printf("%x %x\n", *q, *q + 1);
	printf("%x %x\n", **q, **q + 1);

}
#endif

#if 0
void main(void)
{
	int a = 1, b = 2, c = 3, d = 4;
	int *p = &a, *q = &b, *r = &c, *s = &d;
	int *aa[4] = { p, q, r, s };

	printf("%d %d %d %d\n", *aa[0], *aa[1], *aa[2], *aa[3]);

	int e[4] = { 0x1, 0x2, 0x3, 0x4 };
	int (*f)[4] = &e;

	printf("%d %d %d %d\n", (*f)[0], (*f)[1], (*f)[2], (*f)[3] );
}
#endif
#if 0

void share(int *basket, int*monkey, int *person, int avg, int cnt)
{
	int p_index = 0, m_index=0;
	for (int i = 0; i < cnt; i++)
	{
		if (basket[i] >= avg)
		{
			//printf("p basket : %d \n", basket[i]);
			person[p_index] = basket[i];
			p_index++;
		}
		else {
			//printf("m basket : %d \n", basket[i]);
			monkey[m_index] = basket[i];
			m_index++;
		}
	}
}

int avg(int *coconuts, int cnt)
{
	int total = 0;
	for (int i = 0; i < cnt; i++)
	{
		total += coconuts[i];
	}
	return total/cnt;
}

void main(void)
{
	int coconut;
	int average;
	int num_larger_than_avg=0, num_smaller_than_avg=0;
	int *p_total, *p_to_monkey, *p_to_person;
	scanf("%d", &coconut);

	p_total = (int *)malloc(coconut*sizeof(int));
	if (p_total == NULL) return;


	for (int i = 0; i < coconut; i++)
	{
		scanf("%d", p_total + i);
	}
	average = avg(p_total, coconut);

	for (int i = 0; i < coconut; i++)
	{
		if (p_total[i] >= average) num_larger_than_avg++;
		else num_smaller_than_avg++;
	}
	//printf("%d %d\n", num_smaller_than_avg, num_larger_than_avg);
	p_to_monkey = calloc(num_smaller_than_avg, sizeof(int));
	if (p_to_monkey == NULL) return;

	p_to_person = calloc(num_larger_than_avg, sizeof(int));
	if (p_to_person == NULL) return;

	share(p_total, p_to_monkey, p_to_person, average, coconut);



	printf("AVG : %d\n", average);




	printf("monkey basket : ");
	for (int i = 0; i < num_smaller_than_avg; i++)
	{
		printf("%d ", p_to_monkey[i]);
	}
	printf("\n");



	printf("person basket : ");
	for (int i = 0; i < num_larger_than_avg; i++)
	{
		printf("%d ", p_to_person[i]);
	}
	printf("\n");


	free(p_total);
	free(p_to_monkey);
	free(p_to_person);
}


#endif

#if 0
void main(void)
{
	int i;
	int *p;
	p = (int *)malloc(10 * sizeof(int));

	for (i = 0; i < 10; i++)
	{
		*(p + i) = 10-i;
	}

	for (i = 0;	i < 10; i++)
	{
		printf("%d\n", *(p+i));
	}

}
#endif


#if 0
void main(void)
{
	void *p = malloc(40);
	printf("%d\n", p);
	printf("%f\n", p);
	printf("%s\n", p);
	printf("%c\n", p);
	printf("%Lf\n", p);
	

}
#endif


#if 0
char * Vending_Machine(int num)
{
	static char * drink[4] = { "Cola", "Beer", "Rice alchol", "Fanta" };
	return drink[num];
}
void main(void)
{

	char *p[4] = { 0 };

	for (int i = 0; i < 4; i++)
	{
		printf("%s\n", Vending_Machine(i));
		p[i] = Vending_Machine(i);
	}


	//printf("=======================================\n");
	//char *temp;

	//for (int i = 0; i < 3; i++)
	//{
	//	for (int j = i; j < 4; j++)
	//	{
	//		if (p[i] > p[j])
	//		{
	//			temp = p[i];
	//			p[i] = p[j];
	//			p[j] = p[i];
	//		}
	//	}
	//}

	//for (int i = 0; i < 4; i++)
	//{
	//	printf("%s\n", p[i]);
	//}

}
#endif

#if 0
void main(void){

	int a[4] = { 0x10, 0x20, 0x30, 0x40 };

	int(*p)[4] = &a;


	printf("%x\n", (*p)[2]);

}
#endif


#if 0
void main(void)
{
	int a = 1, b = 2, c = 3, d = 4;
	int *p = &a, *q = &b, *r = &c, *s = &d;
	int *aa[4] = {p,q,r,s};

	printf("%d %d %d %d\n", *aa[0], *aa[1], *aa[2], *aa[3]);
}
#endif

#if 0
void main(void)
{

	int a = 10;   // a는 int 타입.
	int *p = &a;  // p는 int * 타입.
	              // 변수에 &가 하나 붙으면 타입의 *가 하나 증가한다.
	int **q = &p; // q는 int ** 타입.

	
	printf("%x %x %x %x %d\n", q, q + 1, *q, *q + 1, **q);
	printf("%x %x %d %d\n", p, p + 1, *p, *p + 1);

}
#endif


#if 0
void main(void){

	char *p = "hello world";
	printf("%d\n", str_length(p));

	for (int i = 0; i <= str_length(p); i++)
	{
		printf("%c, %d\n", p[i], i);
	}
}
#endif

#if 0
void main(void){

	char *p = "Hello";

	//p[0] = "G";  // error try to write Read Only data.
	printf("%s\n", p);
}
#endif


#if 0
void main(void)
{
	char arr[5];
	char *p = "1234";
	char *q = &arr;

	*q++ = *p++;
	*q++ = *++p;
	*++q = *p++;

	printf("%s\n", q);
}
#endif