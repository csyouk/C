/***********************************************************/
// [6-19] ���������� extern
/***********************************************************/

#if 0
#include <stdio.h>

extern int a;
int b = 20;

void func(void)
{
	a++;
	b++;

	printf("a=%d\n", a);
	printf("b=%d\n", b);
}
#endif

/***********************************************************/
// [6-20] ���������� extern
/***********************************************************/

#if 0
#include <stdio.h>

int b = 20;

void func(void)
{
	extern int a;

	a++;
	b++;

	printf("a=%d\n", a);
	printf("b=%d\n", b);
}
#endif

/***********************************************************/
// [6-21] ���������� static
/***********************************************************/

#if 0
#include <stdio.h>

extern int a;
static int b = 20;
static int c = 30;

void func(void)
{
	a++;
	b++;
	c++;

	printf("a=%d\n", a);
	printf("b=%d\n", b);
	printf("c=%d\n", c);
}
#endif

/***********************************************************/
// [6-29] �Լ��� extern ����
/***********************************************************/

#if 0
extern int sqr(int a);

int add_sqr(int a, int b)
{
	return sqr(a) + sqr(b);
}
#endif

/***********************************************************/
// [6-30] �Լ��� static ����
/***********************************************************/

#if 0
#include <stdio.h>

static int sqr(int a)
{
	return a * a * 2;
}

void func(void)
{
	printf("%d\n", sqr(3));
}
#endif
