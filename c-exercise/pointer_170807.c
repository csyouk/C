#include <stdio.h>
#define FIRST 0
#define SIZE(arr) (sizeof(arr) / sizeof(arr[FIRST]))
//#define MAIN(source_code)  void main(void){source_code}

#if 1

int sum(int num, int *p)
{
	int i, s = 0;
	for (i = 0; i < num; i++)
	{
		s += p[i];
	}
	return s;
}

int sum1(int *p)
{
	int i, s = 0;
	for (i = 0; i < 10; i++)
	{
		s += *(p + i);
	}
	return s;
}

void main(void){

	int a[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int r;


	r = sum(sizeof(a) / sizeof(a[0]), a);
	printf("SUM = %d\n", r);

	r = sum(5, a);
	printf("SUM = %d\n", r);

	printf("sum = %d\n", sum1(a));

}
#endif


#if 0
int * func(void)
{
	static int a[4] = { 10, 20, 30, 40 };
	return a;
}


MAIN(

	int i;
	int *p;

	p = func();
	for (i = 0; i < 4; i++)
	{
		printf("%d\n", p[i]);
	}

)
#endif

#if 0
void main(void)
{

	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int size = sizeof(a) / sizeof(a[0]);
	int size2 = SIZE(a);

	printf("%d\n", size2);

}
#endif


#if 0
void main(void)
{
	int a = 3;
	int *p = &a;


	printf("%d, %d, %d\n", *p, *(p + 0), p[0]);

	printf("%#.8x, %#.8x\n", *(p + 1), p[1]);
}
#endif

#if 0
void main(void)
{
	int a[4] = { 0x10, 0x20, 0x30, 0x40 };
	int *p;

	printf("p = &a[0]; ======================\n");

	p = &a[0];

	printf("%#.8x, %#.8x\n", &a[0], p);           // 같은 값이 나옴. (주소값)
	printf("%#.8x, %#.8x\n", &a[0], *p);          // 주소값, 0x10
	printf("%#.8x, %#.8x, %#.8x\n", &a[0] + 1, p + 1, &a[1]);   // &a[1], 
	printf("%#.8x, %#.8x\n", a[1], p[1]);   // 둘다 0x20 
	
	printf("p = a; ======================\n");

	p = a;
	printf("%#.8x, %#.8x\n", a, p);                    // a배열의 첫번째 요소의 주소값
	printf("%#.8x, %#.8x\n", *a, *p);                  // 둘다 0x10
	printf("%#.8x, %#.8x, %#.8x\n", a+1, p+1, &a[1]);  // &a[1]
	printf("%#.8x, %#.8x\n", *(a + 1), *(p + 1));      // 0x00000020, 0x00000020

	printf("======================\n");

}
#endif

#if 0
void main(void)
{
	int a[4] = { 10, 20, 30, 40 };

	printf("1 %#x\n", a);
	printf("2 %#x\n", &a);
	printf("3 %#x\n", &a+1);
	printf("4 %#x\n", *(&a + 1));
	// 왜 3,4번의 값이 같을까-? 
	printf("4-1 %#x\n", **(&a + 1));
	printf("5 %#x\n", *a);
	printf("6 %#x\n", *a + 1);
	printf("7 %#x\n", *(a + 1));
	printf("8 %#x\n", &*a);
	

}
#endif

#if 0

void f1(short *p)
{
	*(p+1) = 0;

}

void f2(short *p)
{
	*p = 0;
}


void main(void)
{

	unsigned int a = 0xffffffff;

	printf("%u\n", a);
	
	f1(&a);

	printf("%u\n", a);
}


#endif

#if 0
void main(void)
{

	int a = 100;

	int *p;
	unsigned char *q;
	unsigned short *r;

	p = &a;

	printf("%#.8x, %#.8x, %#.8x\n", p, p + 1, p - 1);
	printf("%#.8x, %#.8x, %#.8x\n", *p, *(p + 1), *(p - 1));

}
#endif


#if 0
void main(void)
{

	int a = 0x12345678;
	int *p = &a;
	short *q = &a;
	char *r = &a;

	//char *rr[3] = { &a };

	printf("%#x %#x %#x\n", *p, *q, *r);
	printf("=========================================\n");
	//printf("%#x %#x %#x\n", *rr[2], *rr[1], *rr[0]);
}

#endif

#if 0
void main(void){
	int a = 100;
	int *p;
	p = &a;

	printf("%#.8x %#.8x\n", p , &a);
	printf("%#.8x %#.8x\n", p+1, p-1);
	printf("%#.8x %#.8x\n", *(p + 1), *(p - 1));
}
#endif


#if 0
void main(void){

	int a = 10;
	int *p = &a;

	printf("sizeof a : %d / sizeof *p : %d / sizeof p : %d\n", sizeof(a), sizeof(*p), sizeof(p));

	printf("value of a : %x / value of &a : %x / value of *p : %x / value of &p : %x\n", a, &a, *p, &p);

	printf("=========================\n");

	char c = 'A';
	char *q = &c;

	printf("sizeof c : %d / sizeof *q : %d / sizeof q : %d\n",
		sizeof(c), sizeof(*q), sizeof(q));

	printf("value of c : %x / value of &c : %x / value of *q : %x / value of &q : %x\n", 
		c, &c, *q, &q);

}

#endif