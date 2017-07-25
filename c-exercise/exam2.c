/***********************************************************/
// [6-19] 전역변수와 extern
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
// [6-20] 지역변수와 extern
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
// [6-21] 전역변수와 static
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
// [6-29] 함수의 extern 선언
/***********************************************************/

#if 0
extern int sqr(int a);

int add_sqr(int a, int b)
{
	return sqr(a) + sqr(b);
}
#endif

/***********************************************************/
// [6-30] 함수의 static 선언
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
