//#include <stdio.h>
//void main(void)
//{
//	register int i, j;
//	for (i = 0; i < 1000000; i++)
//	{
//		for (j = 0; j < 10000; j++)
//		{
//		}
//	}
//}
/***********************************************************/
// [6과] p10
/***********************************************************/

#if 0
int a, b, c;
int d = 10, e = 20;
int f, g = 40;
int h = 20; i;
int j = k = 20;
int l = h;
int m; char n;
int o, char p;

void main(void)
{
	int q;
	int r = 10;
	int s = r;
	int t = h;
	int u = v;
	int v = 20;
}
#endif
/***********************************************************/
// [6-1] 변수 선언이 가능한 위치
/***********************************************************/

#if 0
#include <stdio.h>

int Global1;
int Global2 = 10;
int Global3 = 10 * 2;

Global1 = 5;

void main(void)
{
	int local1;
	int local2 = 20;
	int local3 = 20 * 2;
	int local4 = Global1 + local2 + 2;

	Global1 = local2;
	local1 = 30;
	printf("%d %d %d\n", Global1, Global2, Global3);
	printf("%d %d %d %d\n", local1, local2, local3, local4);

	int local5 = 100;

	printf("%d\n", local5);

	{
		int local6 = local3;
		printf("%d\n", local3);
	}
}
#endif

/***********************************************************/
// [6-2] 변수 초기화와 메모리
/***********************************************************/

#if 0
#include <stdio.h>

int a = -100;
unsigned int b = 100;
char c = 'A';
short s = -100;
float f = 3.14f;
double d = 3.14;
long double ld = 3.14L;
int global;

void main(void)
{
	int local;
	int x = a;

	printf("%d %d\n", global, local);
	printf("%d %u %c %hd %d\n", a, b, c, s, x);
	printf("%f %f %Lf\n", f, d, ld);

	a = b;
	x = a + 10;
	printf("%d %d\n", a, x);
}
#endif

/***********************************************************/
// [6-3] 지역 변수의 유효범위
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int a = 1, b = 2, c = 3;

	{
		int a = 5, d = 4;
		printf("%d %d %d %d\n", a, b, c, d);
	}

	{
		int d = 6;
		printf("%d %d %d %d\n", a, b, c, d);
	}

	printf("%d %d %d\n", a, b, c);
	printf("%d %d %d %d\n", a, b, c, d);
}
#endif

/***********************************************************/
// [6-4] 전역 변수의 유효범위
/***********************************************************/

#if 0
#include <stdio.h>

int a = 10;
int b;
int c = 5;

void main(void)
{
	int c = 20;

	printf("%d %d %d\n", a, b, c);
	{
		int b = 30;
		printf("%d %d %d\n", a, b, c);
		//printf("%d %d %d %d\n", a, b, c, d);
	}
	printf("%d %d %d\n", a, b, c);
}
#endif

/***********************************************************/
// [6-5] 지역변수의 유효 범위
/***********************************************************/

#if 0
#include <stdio.h>

int ch6_add(int a, int b)
{
	int c;

	a++;
	b++;
	c = a + b;

	printf("add: %d %d %d\n", a, b, c);
	return c;
}

void main(void)
{
	int r;
	int a = 3;
	int b = 5;
	int c = 100;

	printf("main: %d %d %d\n", a, b, c);
	r = ch6_add(a, b);
	printf("add() = %d\n", r);
	printf("main: %d %d %d\n", a, b, c);
}
#endif

/***********************************************************/
// [6-6] 지역함수가 있는가?
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	void weight(int w)
	{
		printf("Weight = %d Kg\n", w);
	}

	weight(50);
}
#endif

/***********************************************************/
// [6-7] 지역함수가 있는가?
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	void weight(int w);

	weight(50);
}

void weight(int w)
{
	printf("Weight = %d Kg\n", w);
}
#endif

/***********************************************************/
// [6-8] 지역변수에 스택의 활용
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int a = 0x12345678;
	char b = 0x75;
	int c = 0xABCDEF01;
	short d = 0x1234;
	double e = 3.14;

	printf("%#p, %#p, %#p, %#p, %#p\n", &a, &b, &c, &d, &e);
	printf("%#.8x, %#.8x, %#.8x, %#.8x, %#.8x\n", a, b, c, d, e);
}
#endif

/***********************************************************/
// [6-9] argument 전달과 스택 운용
/***********************************************************/

#if 0
#include <stdio.h>

int ch6_add(int a, int b)
{
	int c;

	c = a + b;
	printf("%#p, %#p\n", &a, &b);

	return c;
}

void main(void)
{
	int r;

	r = ch6_add(3, 4);

	printf("%#p, %d\n", &r, r);
}
#endif

/***********************************************************/
// [6-10] 지역변수의 독립성과 스택의 운용
/***********************************************************/

#if 0
#include <stdio.h>

int add(int a, int b)
{
	int c;

	c = a + b;

	return c;
}

void main(void)
{
	int c;
	int a = 3;
	int b = 4;

	c = add(b, a);

	printf("%d\n", c);
}
#endif

/***********************************************************/
// [6-11] 전역변수의 메모리 저장과 변수 은닉
/***********************************************************/

#if 0
#include <stdio.h>

int a = 10;
int b;
int c = 20;

void main(void)
{
	int a = 5;
	int b = 7;

	c = a + b + 100;

	printf("%d, %d, %d\n", a, b, c);
}
#endif

/***********************************************************/
// [6-12] 전역변수의 메모리 분석
/***********************************************************/

#if 0
#include <stdio.h>

int a = 10;
int b;
char ch1 = 'A';
char ch2 = 'B';
int c = 20;

void main(void)
{
	printf("%#p, %#p, %#p, %#p, %#p\n", &a, &b, &ch1, &ch2, &c);
	printf("%d, %d, %d, %c, %c\n", a, b, c, ch1, ch2);

	{
		int a = 5;
		char ch1 = 'a';
		char ch2 = 'b';
		int b = 7;

		c = a + b + 100;

		printf("%#p, %#p, %#p, %#p, %#p\n", &a, &b, &ch1, &ch2, &c);
		printf("%d, %d, %d, %c, %c\n", a, b, c, ch1, ch2);
	}
}
#endif

/***********************************************************/
// [6-13] 전역변수 은닉
/***********************************************************/

#if 0
#include <stdio.h>

int a = 10;
int b;
int c = 20;

void f2(void)
{
	int a = 100;

	printf("%d %d %d\n", a, b, c);
}

void f1(void)
{
	int a = 50;
	int b = 500;

	f2();
	printf("%d %d %d\n", a, b, c);
}

void main(void)
{
	int c = 1000;

	f1();
	printf("%d %d %d\n", a, b, c);
}
#endif

/***********************************************************/
// [6-14] 손파일링 연습 – 지역변수의 유효 범위
/***********************************************************/

#if 0
#include <stdio.h>

int a = 1;
int b;
int c = 2;

void main(void)
{
	int a = 100;

	{
		int a = 20;
		int b = 10;

		{
			int c = 5;

			printf("%d %d %d\n", a, b, c);
		}

		printf("%d %d %d\n", a, b, c);
	}

	printf("%d %d %d\n", a, b, c);
}
#endif

/***********************************************************/
// [6-15] 손파일링 연습 – 함수의 연속 호출
/***********************************************************/

#if 0
#include <stdio.h>

int ch6_add(int a, int b)
{
	int c = a + b;

	return c;
}

void main(void)
{
	int a = 10;
	int b = 3;
	int c;

	c = ch6_add(ch6_add(a, b), ch6_add(a + 1, b + 1));

	printf("%d\n", c);
}
#endif

/***********************************************************/
// [6-16] 손파일링 연습 – 인수 전달과 리턴
/***********************************************************/

#if 0
#include <stdio.h>

int a = 1;
int b;
int c = 2;

int f2(int a, int b)
{
	int c = a + b % 2;

	return c * 3;
}

int f1(int a, int x)
{
	int d = 13;

	c = d + a - x;

	return b = f2(b = c + d, a) + 1;
}

void main(void)
{
	int b = 10;
	int x = 3;
	int d = f1(x, a);

	printf("%d %d %d %d\n", a, b, c, d);

	f2(b, a = x + 1);

	printf("%d %d %d %d\n", a, b, c, d);
}
#endif


/***********************************************************/
// [6-16.1] 손파일링 연습 – 문제 만들어 보기.
/***********************************************************/

#if 0
#include <stdio.h>

int a = -1;
int b;
int c = 2;

int f2(int a, int b)
{
	int c = a + b % 2;
	return c * 3;
}

int f1(int a, int x)
{
	int d = 13;

	c = d + a - x;
	return b = f2(b = c + d, a) + 1;
}

void main(void)
{
	int b = 10;
	int x = 3;
	int d = f1(x = b + a, a);

	printf("%d %d %d %d\n", a, b, c, d);

	f2(a = f2(b, a = x + 1), a = f1(b, d = a + 1));

	printf("%d %d %d %d\n", a, b, c, d);

	// -1 10 23 112
	// 30 10 23 0
}
#endif


/***********************************************************/
// [6-17] 변수들의 specifier, class, scope, lifetime, 초기값
/***********************************************************/

#if 0
#include <stdio.h>

int a;
extern int b;
static int c = 5;
int d = 10;

void main(void)
{
	int a = 20;
	auto int b;
	static int c = 50;
	register int d;
	extern int e;

	{
		int a = 30;
		//static int c = 100;
		c = 100;
		auto int d;
	}
	//printf("static int c = %d\n", c);
}
#endif

/***********************************************************/
// [6-18] 변수 생성 시기와 visibility
/***********************************************************/

#if 0
#include <stdio.h>

int a = 100;
int b = 10 * 2;
int c = a + 1;  // 전역 변수의 위치에는 상수식이 와야 한다.
int d = sizeof(int);

int add(int a, int b)
{
	return a + b;
}

void main(void)
{
	int a = b;
	int b = c;
	int c = d * 2;
	int d = add(a, b);
	static int s = d; // main함수의 위치에 선언되어 있다고 하더라도, 
	                  // 컴파일 시점에 메모리 할당이 결정되므로, 상수식이 와야한다.

	printf("a=%d\n", a);
	printf("b=%d\n", b);
	printf("c=%d\n", c);
	printf("d=%d\n", d);
}
#endif	

/***********************************************************/
// [6-19] 전역변수와 extern => Exam02.c와 함께 사용
/***********************************************************/

#if 0
#include <stdio.h>

extern void func(void);

int a;
extern int b;

void main(void)
{
	func();

	a++;
	b++;

	printf("a=%d\n", a);
	printf("b=%d\n", b);
}
#endif

/***********************************************************/
// [6-20] 지역변수와 extern => Exam02.c와 함께 사용
/***********************************************************/

#if 0
#include <stdio.h>

extern void func(void);

int a;

void main(void)
{
	extern int a;
	extern int b;
	int c = 100;

	func();

	a++;
	b++;
	c++;

	printf("a=%d\n", a);
	printf("b=%d\n", b);
	printf("c=%d\n", c);
}
#endif

/***********************************************************/
// [6-21] 전역변수와 static => Exam02.c와 함께 사용
/***********************************************************/

#if 0
#include <stdio.h>

extern void func(void);

int a;
static int b = 10;
extern int c;

void main(void)
{
	func();

	c++;
	a++;
	b++;

	printf("a=%d\n", a);
	printf("b=%d\n", b);
}
#endif

/***********************************************************/
// [6-22] 지역변수와 static
/***********************************************************/

#if 0
#include <stdio.h>

int a;
static int b = 10;

void func(void)
{
	static int b = 20;

	a++; b++;
	printf("a=%d, b=%d\n", a, b);
}

void main(void)
{
	a++; b++;
	func();
	func();
	printf("a=%d, b=%d\n", a, b);
}
#endif

/***********************************************************/
// [6-23] 동동 동대문을 열어라 남남 남대문을 열어라 12시가 되면은 문이 닫힌다
/***********************************************************/

#if 0
#include <stdio.h>

void door(void)
{
	static int n;
	n++;
	if (!(n % 12)) printf("Closed[%d]\n", n);
}

void main(void)
{
	int i;

	for (i = 0; i<36; i++)
	{
		door();
	}
}
#endif

/***********************************************************/
// [6-24] local scope
/***********************************************************/

#if 0
#include <stdio.h>

int a;
int b = 10;
int c = 20;

void inc(void)
{
	int c = 300;

	a++, b++, c++;
	printf("inc: %d %d %d\n", a, b, c);
}

void main(void)
{
	//int b;
	register int c = 200;

	a++, b++, c++;
	inc();
	printf("main: %d %d %d\n", a, b, c);
}
#endif

/***********************************************************/
// [6-25] 다단의 함수 호출
/***********************************************************/

#if 0
#include <stdio.h>

int a;
int b = 100;
int c = 200;
int d = 300;

void f2(void)
{
	int c = 30;

	a++, b++, c++, d++;
	printf("f2: %d %d %d %d\n", a, b, c, d);
}

void f1(void)
{
	int b = 10;
	int c = 20;

	f2();
	a++, b++, c++, d++;
	printf("f1: %d %d %d %d\n", a, b, c, d);
}

void main(void)
{
	int a = 1000;
	int b = 2000;
	int c = 3000;

	f1();
	a++, b++, c++, d++;
	printf("main: %d %d %d %d\n", a, b, c, d);
}
#endif

/***********************************************************/
// [6-26] argument 전달과 리턴
/***********************************************************/

#if 0
#include <stdio.h>

int fa(int a, int b);

int a = 1, b = 2, c, d;

void main(void)
{
	int a, b = c * 2, c = 10;
	b = fa(a = c + 2, b);
	a = a + b + c + d;
	printf("%d\n", a);
}

int fa(int a, int b)
{
	int d;
	d = a + b + c;
	printf("%d\n", d);
	return d;
}
#endif

/***********************************************************/
// [6-27] local의 static 
/***********************************************************/

#if 0
#include <stdio.h>

void f1(void);
int a = 10; static int s = 20;

void main(void)
{
	static int s;

	a++, s++;
	printf("%d %d\n", a, s);
	f1();
	a++, s++;
	printf("%d %d\n", a, s);
	f1();
}

void f1(void)
{
	int a = 1; static int s = 2;

	a++, s++;
	printf("%d %d\n", a, s);
}
#endif

/***********************************************************/
// [6-28] 함수의 extern 선언
/***********************************************************/

#if 0
#include <stdio.h>

int add(int a, int b);

void main(void)
{
	printf("%d\n", add(3, 4));
}

int add(int a, int b)
{
	return a + b;
}
#endif

#if 0
#include <stdio.h>

extern int add(int a, int b);

void main(void)
{
	printf("%d\n", add(3, 4));
}

int add(int a, int b)
{
	return a + b;
}
#endif

/***********************************************************/
// [6-29] 함수의 extern 선언 => Exam02.c와 함께 사용
/***********************************************************/

#if 0
#include <stdio.h>

extern int add_sqr(int a, int b);

int sqr(int a)
{
	return a * a;
}

void main(void)
{
	printf("%d\n", add_sqr(3, 4));
}
#endif

/***********************************************************/
// [6-30] 함수의 static 선언 => Exam02.c와 함께 사용
/***********************************************************/

#if 0
#include <stdio.h>

extern void func(void);

static int sqr(int a)
{
	return a * a;
}

void main(void)
{
	func();
	printf("%d\n", sqr(3));
}
#endif

/***********************************************************/
// [6-31] 간단한 재귀호출
/***********************************************************/

#if 0
#include <stdio.h>

int func(int x)
{
	if (x>0)
	{
		return x + func(x - 2);
	}
	else
	{
		return 0;
	}
}

void main(void)
{
	printf("%d\n", func(10));
}
#endif

/***********************************************************/
// [6-32] 조금 복잡한 재귀호출
/***********************************************************/

#if 0
#include <stdio.h>

int prt(int x)
{
	if (x == 0) return x;

	else if (x % 2)
	{
		printf("%d\n", x + prt(x - 1)); //1:
		return x;
	}
	else
	{
		printf("%d\n", x + prt(x - 1)); //2:
		return x;
	}
}

void main(void)
{
	int i;
	i = prt(5); //3:
	printf("last i is : %d\n", i);
}
#endif

/***********************************************************/
// [6-33] 재귀호출 함수의 지역 변수
/***********************************************************/

#if 0
#include <stdio.h>

void func(int x)
{
	int a = 10;
	static int b = 20;

	if (x == 0) return;
	else func(x - 1);

	a++;
	b++;

	printf("a=%d b=%d x=%d\n", a, b, x);
}

void main(void)
{
	func(6);
}
#endif

/***********************************************************/
// [6-34] 재귀호출로 만드는 팩토리얼 함수
/***********************************************************/

#if 0

int fact(int n){
	if (n == 1) return 1;
	return (n + 1) * fact(--n);
}

void main(void){
	int i;
	printf("Input a Integer : ");
	scanf("%d", &i);
	printf("\n%d! = %d\n", i, fact(i));
}

#endif

#if 0
void prt(int n, int N){
	if (n == N + 1) return;
	//printf("%d\n", n); // 오름차순 -> 함수가 호출될때의 인자를 출력한다.
	prt(n + 1, N);
	//printf("%d\n", n);   // 내림차순 -> 함수 호출 스택의 상단의 인자부터 출력한다.
}

void main(void){

	prt(1, 10);

}
#endif