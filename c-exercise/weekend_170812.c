#include <stdio.h>
#include <assert.h>

#if 0
int i = 1;
int j = k = 20; // error
void main(void)
{

}
#endif

#if 0
int ntoh(int n, int num)
{
	int d = 0, m = 1;
	while (num)
	{
		d += (num % 16) * m;
		num /= 16;
		m *= n;
	}
	return d;
}

int hton(int n, int num)
{
	int h = 0, m = 1;
	while(num)
	{
		h += (num % n) * m;
		num /= n;
		m *= 16;
}
	return h;
}

void main(void)
{
	int n, a, b, s;
	printf("진법 입력 : ");
	scanf("%d", &n);
	printf("피연산자 2개 입력 : ");
	scanf("%x %x", &a, &b);
	a = ntoh(n, a);
	b = ntoh(n, b);
	printf("%d %x\n", a + b, hton(n, a + b));
}
#endif


#if 0
void main(void)
{
	int a = -7;
	switch (a)
	{
	default: printf("-");
	case 1: printf("a");
	case 2: printf("b");
	case 3: printf("c");
	case 4: printf("d");
	case 5: printf("e"); break;
	case 6: printf("f");
	}
}
#endif

#if 0
char a[] = "abcdef";

void main(void)
{
	//char *p = a;
	//p[0] = 'c';

	//printf("%s\n", a);

	assert(3 == 4);
}

#endif


#if 0
void main(void)
{
	//printf("%u %ld %hd %f %Lf ", 100, 100l, 100, 123.45, 123.45L);

	float f = -3.625f;
	long int ld = 100l;
	long long int lld = 100ll;
	double d = 10.0 / 3;
	printf("sizeof ld : %d\n", sizeof(ld));
	printf("sizeof lld : %d\n", sizeof(lld));
	printf("sizeof f : %d\n", sizeof(f));
	printf("%x\n", f);

	printf("%lld\n", d);

	float a = 10.1f;

	printf("%x\n", *(int *)&a);
}
#endif

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