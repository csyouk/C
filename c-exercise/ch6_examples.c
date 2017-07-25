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

#if 1
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



/***********************************************************/
// [7-1] 배열 생성과 요소 액세스
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int i;
	int a[4];

	for (i = 0; i < 4; i++)
	{
		a[i] = i * 10;
	}

	printf("%d %d %d %d\n", a[0], a[1], a[2], a[3]);
}
#endif

/***********************************************************/
// [7-2] 배열의 요소수
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int i;
	int a[4];

	for (i = 0; i < 4; i++)
	{
		a[i] = i * 10;
	}

	for (i = 0; i < 4; i++)
	{
		printf("%d\n", a[i]);
	}
}
#endif

#if 0
#include <stdio.h>

void main(void)
{
	int i;
	int a[4];

	for (i = 0; i < sizeof(a) / sizeof(a[0]); i++)
	{
		a[i] = i * 10;
	}

	for (i = 0; i < sizeof(a) / sizeof(a[0]); i++)
	{
		printf("%d\n", a[i]);
	}
}
#endif

/***********************************************************/
// [7-3] 행운권 추첨
/***********************************************************/



/***********************************************************/
// [7-4] 암기왕
/***********************************************************/



/***********************************************************/
// [7-5] 암기왕 => 20개 암기 버전
/***********************************************************/



/***********************************************************/
// [7-6] 알밤만 담는 바구니
/***********************************************************/



/***********************************************************/
// [7-7] 알밤을 최대 10개까지 담는 바구니
/***********************************************************/



/***********************************************************/
// [7-8] 키 순서대로 집합
/***********************************************************/



/***********************************************************/
// [7-9] 암호화 프로그램
/***********************************************************/



/***********************************************************/
// [7-10] 복호화 프로그램
/***********************************************************/



/***********************************************************/
// [7-11] 성적처리용 수퍼 컴퓨터
/***********************************************************/



/***********************************************************/
// [7-12] 이차원 배열 초기화와 액세스
/***********************************************************/

#if 0
#include <stdio.h>

int a[3][4] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8 }, { 9, 10, 11, 12 } };

void main(void)
{
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d, %d = %d\n", i, j, a[i][j]);
		}
	}
}
#endif

/***********************************************************/
// [7-13] 이차원 배열은 이중 배열이다
/***********************************************************/

#if 0
#include <stdio.h>

int a[3][4] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8 }, { 9, 10, 11, 12 } };

void main(void)
{
	printf("%d\n", sizeof(a) / sizeof(a[0]));
	printf("%d\n", sizeof(a[0]) / sizeof(a[0][0]));
	printf("%d\n", sizeof(a[1]) / sizeof(a[1][0]));
	printf("%d\n", sizeof(a[2]) / sizeof(a[2][0]));

	printf("%#.8X\n", a);
	printf("%#.8X\n", a[0]);
	printf("%#.8X\n", a[1]);
	printf("%#.8X\n", a[2]);
}
#endif

/***********************************************************/
// [7-14] 이차원 배열 transpose 
/***********************************************************/



/***********************************************************/
// [7-15] 다른 모양의 이차원 배열 transpose 
/***********************************************************/



/***********************************************************/
// [7-16] 가위 바위 보 게임
/***********************************************************/



/***********************************************************/
// [7-17] 똑똑한 컴퓨터와 가위 바위 보
/***********************************************************/



/***********************************************************/
// [7-18] 행운의 빙고 게임기
/***********************************************************/



/***********************************************************/
// [8-1] 구조체 멤버 액세스
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	struct st
	{
		int a;
		char b;
	};

	struct st x = { 100, 'A' };

	printf("a=%d b=%c\n", x.a, x.b);

	x.a = 200;
	x.b = 'B';

	printf("a=%d b=%c\n", x.a, x.b);
}
#endif

/***********************************************************/
// [8-2] 구조체의 메모리
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	struct st
	{
		int a;
		char b;
	} x = { 100, 'A' };

	printf("a=%d b=%c\n", x.a, x.b);
	printf("&x.a=%#.8x &x.b=%#.8x\n", &x.a, &x.b);
	printf("sizeof x.a=%d sizeof x.b=%d\n", sizeof(x.a), sizeof(x.b));
	printf("&x=%#.8x sizeof x=%d\n", &x, sizeof(x));

	x.a = 200; x.b = 'B';
	printf("a=%d b=%c\n", x.a, x.b);
}
#endif

/***********************************************************/
// [8-3] Alignment 규정과 padding
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	struct st1
	{
		unsigned char a;
		int b;
		unsigned short c;
	} x = { 0xEF, 0x12345678, 0xABCD };

	struct st2
	{
		unsigned char a;
		unsigned short b;
		int c;
	} y = { 0xEF, 0xABCD, 0x12345678 };

	struct st3
	{
		unsigned char a;
		unsigned char b;
		unsigned char c;
	} z = { 0x12, 0xAB, 0x78 };

	printf("a=%#x, b=%#x, c=%#x\n", x.a, x.b, x.c);
	printf("&x.a=%#.8x, &x.b=%#.8x, &x.c=%#.8x\n", &x.a, &x.b, &x.c);
	printf("&x=%#.8x sizeof x=%d\n", &x, sizeof(x));

	printf("a=%#x, b=%#x, c=%#x\n", y.a, y.b, y.c);
	printf("&y.a=%#.8x, &y.b=%#.8x, &y.c=%#.8x\n", &y.a, &y.b, &y.c);
	printf("&y=%#.8x sizeof y=%d\n", &y, sizeof(y));

	printf("a=%#x, b=%#x, c=%#x\n", z.a, z.b, z.c);
	printf("&z.a=%#.8x, &z.b=%#.8x, &z.c=%#.8x\n", &z.a, &z.b, &z.c);
	printf("&z=%#.8x sizeof z=%d\n", &z, sizeof(z));
}
#endif

/***********************************************************/
// [8-4] 구조체 이름의 의미
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	struct st
	{
		unsigned char a;
		unsigned char b;
		unsigned char c;
	} x = { 0x12, 0x34, 0x56 };

	printf("a=%#x, b=%#x, c=%#x\n", x.a, x.b, x.c);
	printf("&x.a=%#.8x, &x.b=%#.8x, &x.b=%#.8x\n", &x.a, &x.b, &x.c);
	printf("&x=%#.8x sizeof x=%d\n", &x, sizeof(x));

	printf("&x=%#x\n", x);
}
#endif

/***********************************************************/
// [8-5] 구조체는 기본형이다
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int a, b = 10;

	a = b;
	printf("a=%d, b=%d\n", a, b);
}
#endif

#if 0
#include <stdio.h>

void main(void)
{
	struct st
	{
		int a;
		char b;
	} y = { 100, 'A' };

	struct st x = y;

	printf("x.a=%d, x.b=%c\n", x.a, x.b);
	printf("y.a=%d, y.b=%c\n", y.a, y.b);
}
#endif

/***********************************************************/
// [8-6] 배열과 구조체의 근본적인 차이
/***********************************************************/

#if 0
#include <stdio.h>

struct st
{
	int a;
	int b;
}x = { 100, 'A' };

void f1(int a[4])
{
	a[0] = 10;
}

void f2(struct st x)
{
	x.a = 200;
}

void main(void)
{
	int a[4] = { 1, 2, 3, 4 };

	f1(a);
	printf("a[0] = %d\n", a[0]);
	f2(x);
	printf("x.a = %d\n", x.a);
}
#endif

/***********************************************************/
// [8-7] Name Space
/***********************************************************/

#if 0
#include <stdio.h>

struct st
{
	int st;
	char b;
};

void main(void)
{
	struct st st = { 100, 'A' };
	int main = st.st;

	{
		int st = 10;
		printf("%d %d\n", main, st);
	}

	printf("%d %d\n", main, st.st);
}
#endif

/***********************************************************/
// [8-8] 공용체
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	union uni
	{
		int a;
		unsigned char b;
	} x = { 0x12345678 };

	printf("a=%#x b=%#x\n", x.a, x.b);
	printf("&x.a=%#.8x &x.b=%#.8x\n", &x.a, &x.b);
	printf("sizeof x.a=%d sizeof x.b=%d\n", sizeof(x.a), sizeof(x.b));
	printf("&x=%#.8x sizeof x=%d\n", &x, sizeof(x));

	x.b = 0xEF;
	printf("a=%#x b=%#x\n", x.a, x.b);
}
#endif

/***********************************************************/
// [8-9] 엔디안 모드 변경
/***********************************************************/

#if 0
#include <stdio.h>

union uni
{
	int a;
	char b[4];
};

int Change_Endian(int data)
{
	char tmp;
	union uni endian;

	endian.a = data;
	tmp = endian.b[0];
	endian.b[0] = endian.b[3];
	endian.b[3] = tmp;

	tmp = endian.b[1];
	endian.b[1] = endian.b[2];
	endian.b[2] = tmp;

	return endian.a;
}

void main(void)
{
	int a = 0x12345678;

	printf("%#.8x => %#.8x\n", a, Change_Endian(a));
}
#endif

/***********************************************************/
// [8-10] 공용체와 구조체의 만남
/***********************************************************/

#if 0
#include <stdio.h>

union uni
{
	int a;

	struct st
	{
		char x[4];
		int y;
	}st_data;
}uni_data = { 0x12345678 };

void main(void)
{
	uni_data.st_data.y = 0xABCDE89;
	printf("%#.8x\n", uni_data.st_data.y);
	printf("%#.8x\n", uni_data.a);
	printf("%#x\n", uni_data.st_data.x[0]);
	printf("%#x\n", uni_data.st_data.x[1]);
	printf("%#x\n", uni_data.st_data.x[2]);
	printf("%#x\n", uni_data.st_data.x[3]);
}
#endif

#if 0
#include <stdio.h>

struct st
{
	char x[4];
	int y;
};

union uni
{
	int a;

	struct st st_data;
};

void main(void)
{
	union uni uni_data = { 0x12345678 };

	uni_data.st_data.y = 0xABCDE89;
	printf("%#.8x\n", uni_data.st_data.y);
	printf("%#.8x\n", uni_data.a);
	printf("%#x\n", uni_data.st_data.x[0]);
	printf("%#x\n", uni_data.st_data.x[1]);
	printf("%#x\n", uni_data.st_data.x[2]);
	printf("%#x\n", uni_data.st_data.x[3]);
}
#endif

/***********************************************************/
// [8-11] 열거형의 특징 
/***********************************************************/

#if 0
#include <stdio.h>

enum color{ white, black, yellow, red };

void main(void)
{
	printf("%d %d %d %d\n", white, black, yellow, red);
}
#endif

/***********************************************************/
// [8-12] 열거형은 원하는 값으로 지정할 수 있다
/***********************************************************/

#if 0
#include <stdio.h>

enum color{ white = 2, black, yellow = -2, red, orange = 2 };

void main(void)
{
	printf("%d %d %d %d %d\n", white, black, yellow, red, orange);
}
#endif

/***********************************************************/
// [8-13] 열거형 변수
/***********************************************************/

#if 0
#include <stdio.h>

enum color{ white, black, yellow, red };
char * ctable[] = { "white", "black", "yellow", "red" };

void main(void)
{
	int i;
	enum color pen = white;

	for (i = 0; i < 8; i++)
	{
		printf("%d => %s\n", pen, ctable[pen]);
		pen++;
		if (pen > red) pen = white;
	}
}
#endif

#if 0
#include <stdio.h>

enum color{ white, black, yellow, red };
char * ctable[] = { "white", "black", "yellow", "red" };

void main(void)
{
	int i;
	int pen = white;

	for (i = 0; i < 8; i++)
	{
		printf("%d => %s\n", pen, ctable[pen]);
		pen++;
		if (pen > red) pen = white;
	}
}
#endif

/***********************************************************/
// [8-14] 성적처리 프로그램
/***********************************************************/



/***********************************************************/
// [9-1] 포인터 변수의 초기화
/***********************************************************/

#if 0
#include <stdio.h>

int *p;

void main(void)
{
	int *q;

	*p = 100;
	*q = 200;

	printf("%d, %d\n", *p, *q);
}
#endif

/***********************************************************/
// [9-2] 포인터 변수의 동작 이해
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int a = 100;
	int *p;

	p = &a;
	*p = 200;

	printf("%#.8x %#.8x\n", p, &a);
	printf("%d %d\n", *p, a);
}
#endif

/***********************************************************/
// [9-3] 포인터 변수의 가/감 연산
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int a = 100;
	int *p;

	p = &a;

	printf("%#.8x %#.8x\n", p, &a);
	printf("%#.8x %#.8x\n", *p, a);
	printf("%#.8x %#.8x\n", p + 1, p - 1);
	printf("%#.8x %#.8x\n", *(p + 1), *(p - 1));
}
#endif

/***********************************************************/
// [9-4] char 포인터 변수의 동작 이해
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	unsigned char a = 'A';
	unsigned char *p;

	p = &a;

	printf("%#.8x %#.8x\n", p, &a);
	printf("%#.2x %#.2x\n", *p, a);
	printf("%#.8x %#.8x\n", p + 1, p - 1);
	printf("%#.2x %#.2x\n", *(p + 1), *(p - 1));
}
#endif

/***********************************************************/
// [9-5] Call by address와 포인터 parameter
/***********************************************************/

#if 0
#include <stdio.h>

void f1(int a)
{
	a = 200;

	printf("%d\n", a);
}

void f2(int *p)
{
	*p = 200;

	printf("%d\n", *p);
}

void main(void)
{
	int a = 100;

	f1(a);
	printf("%d\n", a);

	f2(&a);
	printf("%d\n", a);
}
#endif

/***********************************************************/
// [9-6] 배열 이름의 의미
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int a[4] = { 10, 20, 30, 40 };

	printf("%#.8x, %#.8x, %#.8x\n", &a, &a[0], a);
	printf("%d, %d, %d\n", a[0], a[1], a[-1]);
	printf("%#.8x, %#.8x, %#.8x\n", a, a + 1, a - 1);
	printf("%d, %d, %d\n", *a, *(a + 1), *(a - 1));
}
#endif

/***********************************************************/
// [9-7] &a, a, &a[0]
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int a[4] = { 0x10, 0x20, 0x30, 0x40 };

	printf("%#.8x, %#.8x, %#.8x\n", &a, &a[0], a);
	printf("%#.8x, %#.8x, %#.8x\n", &a + 1, a + 1, &a[0] - 1);
	printf("%#.8x, %#.8x, %#.8x\n", *&a, *a, *&a[0]);
}
#endif

/***********************************************************/
// [9-8] 포인터와 배열
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int a[4] = { 0x10, 0x20, 0x30, 0x40 };
	int *p;

	p = &a[0];

	printf("%#.8x, %#.8x\n", &a[0], p);
	printf("%#.8x, %#.8x\n", *&a[0], *p);
	printf("%#.8x, %#.8x\n", &a[0] + 1, p + 1);

	p = a;

	printf("%#.8x, %#.8x\n", a, p);
	printf("%#.8x, %#.8x\n", *a, *p);
	printf("%#.8x, %#.8x\n", a + 1, p + 1);
	printf("%#.8x, %#.8x\n", *(a + 1), *(p + 1));
}
#endif

/***********************************************************/
// [9-9] 10개 정수를 갖는 배열의 함을 구하는 함수
/***********************************************************/

#if 0
#include <stdio.h>

int sum1(int a[10])
{
	int i, s = 0;

	for (i = 0; i < 10; i++)
	{
		s += a[i];
	}

	return s;
}

int sum2(int a[10])
{
	int i, s = 0;

	for (i = 0; i < sizeof(a) / sizeof(a[0]); i++)
	{
		s += a[i];
	}

	return s;
}

void main(void)
{
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int r;

	r = sum1(a);
	printf("SUM1 = %d\n", r);

	r = sum2(a);
	printf("SUM2 = %d\n", r);
}
#endif

/***********************************************************/
// [9-10] 함수 parameter에 있는 배열의 의미
/***********************************************************/

#if 0
#include <stdio.h>

int sum1(int a[10])
{
	int i, s = 0;

	for (i = 0; i < 10; i++)
	{
		s += a[i];
	}

	return s;
}

int sum2(int a[100])
{
	int i, s = 0;

	for (i = 0; i < 10; i++)
	{
		s += a[i];
	}

	return s;
}

int sum3(int a[])
{
	int i, s = 0;

	for (i = 0; i < 10; i++)
	{
		s += a[i];
	}

	return s;
}

int sum4(int *p)
{
	int i, s = 0;

	for (i = 0; i < 10; i++)
	{
		s += *(p + i);
	}

	return s;
}

int sum5(int *p)
{
	int i, s = 0;

	for (i = 0; i < 10; i++)
	{
		s += p[i];
	}

	return s;
}

void main(void)
{
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int r;

	r = sum1(a);
	printf("SUM1 = %d\n", r);

	r = sum2(a);
	printf("SUM2 = %d\n", r);

	r = sum3(a);
	printf("SUM3 = %d\n", r);

	r = sum4(a);
	printf("SUM4 = %d\n", r);

	r = sum5(a);
	printf("SUM5 = %d\n", r);
}
#endif

/***********************************************************/
// [9-11] 함수로 넘어온 배열의 요소 수
/***********************************************************/

#if 0
#include <stdio.h>

int sum(int num, int *p)
{
	int i, s = 0;

	for (i = 0; i < num; i++)
	{
		s += p[i];
	}

	return s;
}

void main(void)
{
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int r;

	r = sum(sizeof(a) / sizeof(a[0]), a);
	printf("SUM = %d\n", r);

	r = sum(5, a);
	printf("SUM = %d\n", r);
}
#endif

/***********************************************************/
// [9-12] 함수에서 배열을 리턴하자
/***********************************************************/

#if 0
#include <stdio.h>

int * func(void)
{
	static int a[4] = { 10, 20, 30, 40 };

	return a;
}

void main(void)
{
	int i;
	int *p;

	p = func();

	for (i = 0; i < 4; i++)
	{
		printf("%d\n", p[i]);
	}
}
#endif

/***********************************************************/
// [9-13] 문자열은 연속한 문자들의 집합이다
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	char *p = "Hello";

	printf("%s\n", p);
	printf("%s\n", p + 1);
	printf("%c\n", *p);
	printf("%c\n", *(p + 1));
}
#endif

/***********************************************************/
// [9-14] 문자열을 넘겨 받는 함수
/***********************************************************/

#if 0
#include <stdio.h>

void func(char *p)
{
	printf("%s\n", p);
}

void main(void)
{
	char *p = "Hello";

	printf("%s\n", p);
	func(p);
	func("Hello");
}
#endif

/***********************************************************/
// [9-15] 음료수 자판기
/***********************************************************/

#if 0
#include <stdio.h>
#include <conio.h>

Vending_Machine(int num)
{
	static char drink[4][10] = { "콜라", "사이다", "환타", "막걸리" };

	return drink[num];
}

void main(void)
{


}
#endif

/***********************************************************/
// [9-16] *p++ 연산의 역헐
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int cnt = 0;
	char *p = "Embedded";

	while (*p)
	{
		if (*p++ == 'd') cnt++;
	}

	printf("%d\n", cnt);
}
#endif

/***********************************************************/
// [9-17] 문자열 복사
/***********************************************************/

#if 0
#include <stdio.h>

void str_copy(char * d, const char * s)
{
	while (*d++ = *s++);
}

void main(void)
{
	char a[5];
	char b[5] = "ABCD";

	str_copy(a, b);
	printf("%s\n%s\n", a, b);
}
#endif

/***********************************************************/
// [9-18] 문자열 길이 측정
/***********************************************************/

#if 0
#include <stdio.h>

unsigned int  str_length(const char * d)
{


}

void main(void)
{
	char a[] = "Willtek";

	printf("%d\n", sizeof(a));
	printf("%d\n", str_length(a));
}
#endif

/***********************************************************/
// [9-19] 문자열 연결
/***********************************************************/

#if 0
#include <stdio.h>

void str_add(char * d, const char * s)
{


}

void main(void)
{
	char a[15] = "Willtek";
	char b[15] = " Corp.";

	str_add(a, b);

	printf("%s\n", a);
}
#endif

/***********************************************************/
// [9-20] 문자열 비교
/***********************************************************/

#if 0
#include <stdio.h>

int str_comp(const char *a, const char *b)
{


}

void main(void)
{
	printf("%d\n", str_comp("ABC", "BC"));
	printf("%d\n", str_comp("ABC", "AC"));
	printf("%d\n", str_comp("ABC", "AB"));
	printf("%d\n", str_comp("abc", "ABC"));
	printf("%d\n", str_comp("ab", " "));
	printf("%d\n", str_comp("A", "AB"));
}
#endif

/***********************************************************/
// [9-21] String Pool
/***********************************************************/

#if 0
#include <stdio.h>
#include <conio.h>

char * Vending_Machine1(int num)
{
	static char drink[4][10] = { "콜라", "사이다", "환타", "막걸리" };

	return drink[num];
}

char * Vending_Machine2(int num)
{
	static char * drink[4] = { "콜라", "사이다", "환타", "막걸리" };

	return drink[num];
}

void main(void)
{
	int num;

	for (;;)
	{
		printf("음료 선택 : 1. 콜라 2.사이다 3.환타 4.막걸리(19세이상) 0.종료\n");
		num = getch() - '1';
		fflush(stdin);

		if (num == -1) return;

		if ((unsigned int)num >= 4)
		{
			printf("장난 치지마!\n");
			continue;
		}

		printf("선택한 %s 가 나왔습니다\n", Vending_Machine1(num));
		printf("선택한 %s 가 또 나왔습니다\n", Vending_Machine2(num));
	}
}
#endif

/***********************************************************/
// [9-22] void *
/***********************************************************/

#if 0
#include <stdio.h>
int main(void)
{
	int i = 10;
	char c = 'a';
	int *p = &i;
	char *q = &c;
	void * r;
	r = q;
	printf("%c\n", *(char*)r);
	r = p;
	*(int*)r = 100;
	printf("%d\n", *p);
}
#endif

/***********************************************************/
// [9-23] malloc 사용 예
/***********************************************************/

#if 0
#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int i;
	int * p;

	p = malloc(40);

	for (i = 0; i < 10; i++)
	{
		*(p + i) = i;
	}

	for (i = 0; i < 10; i++)
	{
		printf("%d\n", *(p + i));
	}
}
#endif

#if 0
#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int i;
	int * p;

	p = malloc(40);

	for (i = 0; i < 10; i++)
	{
		p[i] = i;
	}

	for (i = 0; i < 10; i++)
	{
		printf("%d\n", p[i]);
	}
}
#endif

/***********************************************************/
// [9-24] sizeof, 리턴 주소의 확인, free 함수 사용
/***********************************************************/

#if 0
#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int i;
	int * p;

	p = malloc(10 * sizeof(int));

	if (p == 0x0) return;

	for (i = 0; i < 10; i++)
	{
		p[i] = i;
	}

	for (i = 0; i < 10; i++)
	{
		printf("%d\n", p[i]);
	}

	free(p);
}
#endif

/***********************************************************/
// [9-25] malloc과 calloc의 차이
/***********************************************************/

#if 0
#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int i;
	int * p;

	p = malloc(10 * sizeof(int));
	if (p == 0x0) return;

	for (i = 0; i < 10; i++)
	{
		printf("malloc[%d]=%d\n", i, p[i]);
	}

	free(p);

	printf("\n\n");

	p = calloc(10, sizeof(int));
	if (p == 0x0) return;

	for (i = 0; i < 10; i++)
	{
		printf("calloc[%d]=%d\n", i, p[i]);
	}

	free(p);
}
#endif

/***********************************************************/
// [9-26] realloc의 동작
/***********************************************************/

#if 0
#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int i;
	int * p;

	p = malloc(5 * sizeof(int));
	if (p == 0x0) return;

	for (i = 0; i < 5; i++)
	{
		p[i] = i;
	}

	p = realloc(p, 10 * sizeof(int));
	if (p == 0x0) return;

	for (i = 5; i < 10; i++)
	{
		p[i] = i;
	}

	for (i = 0; i < 10; i++)
	{
		printf("[%d]=%d\n", i, p[i]);
	}

	realloc(p, 0);
}
#endif

/***********************************************************/
// [9-27] 원숭이와 코코넛 따기
/***********************************************************/



/***********************************************************/
// [9-28] 포인터가 바라보는 배열 (배열 포인터)
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int a[4] = { 10, 20, 30, 40 };
	int(*p)[4] = &a;

	printf("a[2] = %d\n", a[2]);

	// 코드 작성

	printf("a[2] = %d\n", a[2]);
}
#endif

/***********************************************************/
// [9-29] 구조체 멤버로 배열과 포인터도 가능하다
/***********************************************************/

#if 0
#include <stdio.h>

int y = 100;

struct st
{
	int a;
	int b[4];
	int *p;
}x = { 50, { 10, 20 } };

void main(void)
{
	x.a = y;
	x.b[2] = y;
	x.p = &y;

	printf("x.a = %d\n", x.a);
	printf("x.b[2] = %d\n", x.b[2]);
	printf("*x.p = %d\n", *x.p);
}
#endif	

/***********************************************************/
// [9-30] 데이터 타입은 멤버의 타입
/***********************************************************/

#if 0
#include <stdio.h>

struct st
{
	int a;
	char b[4];
}x = { 100, "ABC" };

void main(void)
{
	char a[4] = "ABC";

	a = "LEW";
	x.b = "LEW";
}
#endif

/***********************************************************/
// [9-31] 문자열을 복사하거나 메모리를 복사하거나
/***********************************************************/

#if 0
#include <stdio.h>
#include <string.h>

struct st
{
	int a;
	char b[4];
}x = { 100, "ABC" };

void main(void)
{
	char a[4] = "ABC";

	memcpy(a, "LEW", sizeof("LEW"));
	strcpy(x.b, "LEW");

	printf("%s, %s\n", a, x.b);
}
#endif

/***********************************************************/
// [9-32] 구조체 배열
/***********************************************************/

#if 0
#include <stdio.h>

struct st
{
	int a;
	char b;
};

void main(void)
{
	int i;
	struct st x[4] = { { 10, 'A' }, { 20, 'B' }, { 30, 'C' }, { 40, 'D' } };

	for (i = 0; i < sizeof(x) / sizeof(x[0]); i++)
	{
		x[i].a = i;
		printf("%d, %c\n", x[i].a, x[i].b);
	}
}
#endif

/***********************************************************/
// [9-33] 구조체 포인터
/***********************************************************/

#if 0
#include <stdio.h>

struct st
{
	int a;
	char b;
}x = { 10, 'A' };

void main(void)
{
	struct st * p = &x;

	(*p).b = 'L';

	printf("%c\n", x.b);
}
#endif

/***********************************************************/
// [9-34] 구조체 포인터를 전문으로 취하는 연산자
/***********************************************************/

#if 0
#include <stdio.h>

struct st
{
	int a;
	char b;
}x = { 10, 'A' };

void main(void)
{
	struct st * p = &x;

	(*p).b = 'L';
	printf("%c\n", x.b);

	p->b = 'K';
	printf("%c\n", x.b);
}
#endif

/***********************************************************/
// [9-35] 구조체 변수 연습
/***********************************************************/

#if 0
#include <stdio.h>

struct st
{
	int num;
	char name[10];
	int score;
};

void cheat(struct st math)
{
	math.score = 100;
}

void main(void)
{
	struct st math = { 1, "KIM", 10 };

	cheat(math);
	printf("%s: %d점\n", math.name, math.score);
}
#endif

/***********************************************************/
// [9-36] 구조체 포인터 연습
/***********************************************************/

#if 0
#include <stdio.h>

struct st
{
	int num;
	char name[10];
	int score;
};

void cheat(struct st * math)
{
	// 코드 작성
}

void main(void)
{
	struct st math = { 1, "KIM", 10 };

	cheat(&math);
	printf("%s: %d점\n", math.name, math.score);
}
#endif

/***********************************************************/
// [9-37] 구조체 배열 연습
/***********************************************************/

#if 0
#include <stdio.h>

struct st
{
	int num;
	char name[10];
	int score;
};

void cheat1(struct st * p)
{
	// 코드 작성
}

void cheat2(struct st * p)
{
	// 코드 작성
}

void main(void)
{
	struct st math[4] = { { 1, "LEW", 10 }, { 2, "KIM", 20 }, { 3, "SONG", 30 }, { 4, "MOON", 40 } };

	cheat1(&math[1]);
	printf("%s: %d점\n", math[1].name, math[1].score);

	cheat2(math);
	printf("%s: %d점\n", math[1].name, math[1].score);
}
#endif


/***********************************************************/
// [9-38] 구조체 속의 구조체
/***********************************************************/

#if 0
#include <stdio.h>

struct score
{
	char * name;
	int score;
}score[2] = { { "Song", 80 }, { "Lew", 90 } };

struct test
{
	int id;
	char *subject;
	struct score score;
};

void main(void)
{
	struct test final;

	final.id = 1;
	final.subject = "math";
	final.score = score[0];

	printf("%d\n", final.id);
	printf("%s\n", final.subject);
	printf("%s\n", final.score.name);
	printf("%d\n", final.score.score);
}
#endif

/***********************************************************/
// [9-39] 자기 참조 구조체
/***********************************************************/

#if 0
#include <stdio.h>

struct test
{
	int id;
	char * name;
	struct test *p;
}x, y;

void main(void)
{
	y.id = 2;
	y.name = "Lew";
	y.p = (struct test *)0x0;

	x.id = 1;
	x.name = "Song";
	x.p = &y;

	printf("%d\n", x.id);
	printf("%d\n", x.p->id);
	printf("%s\n", x.name);
	printf("%s\n", x.p->name);
}
#endif

/***********************************************************/
// [9-40] 공용체와 포인터, 배열
/***********************************************************/

#if 0
#include <stdio.h>

union uni
{
	int a;
	char b[4];
};

int Change_Endian(union uni * p)
{
	char tmp;

	tmp = p->b[0];
	p->b[0] = p->b[3];
	p->b[3] = tmp;

	tmp = p->b[1];
	p->b[1] = p->b[2];
	p->b[2] = tmp;

	return p->a;
}

void main(void)
{
	union uni x;

	x.a = 0x12345678;
	printf("%#.8x => %#.8x\n", x.a, Change_Endian(&x));
}
#endif

/***********************************************************/
// [9-41] 구조체 종합 연습
/***********************************************************/

#if 0
#include <stdio.h>

struct test
{
	int id;
	char * name;
	struct test *p;
}x[3] = { { 1, "Song", 0 }, { 2, "Lew", 0 }, { 3, "Ki", 0 } };

void main(void)
{
	struct test *p = &x[0];
	x[1].p = &x[2];
	x[0].p = &x[1];

	printf("%d\n", );		// x[0]로 id 2 인쇄
	printf("%s\n", );			// x[0]로 Lew 인쇄
	printf("%d\n", );		// p로 id 3 인쇄
	printf("%s\n", );			// p로 Ki 인쇄
}
#endif

/***********************************************************/
// [10-1] 비트 연산자 
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int a = 0x55AA33CC;
	int b = 0x0F0F0F0F;

	printf("a & b = %#.8X\n", a & b);
	printf("a | b = %#.8X\n", a | b);
	printf("a ^ b = %#.8X\n", a ^ b);
}
#endif

/***********************************************************/
// [10-2] 비트 반전 연산자 
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int a = 0x55AA33CC;
	int b = 0x0F0F0F0F;

	printf("~a = %#.8X\n", ~a);
	printf("~b = %#.8X\n", ~b);
}
#endif

/***********************************************************/
// [10-3] 비트 연산 수행 
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int a = 0x55AA33CC;
	int b, c, d;

	b =
		c =
		d =

		printf("b = %#.8X\n", b);
	printf("c = %#.8X\n", c);
	printf("d = %#.8X\n", d);
}
#endif

/***********************************************************/
// [10-4] ~연산자를 이용한 비트 clear
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int a = 0x55AA33CC;
	int b, c, d;

	b = a | 0x08000C11;
	c = a & ~(0x400200C);
	d = a ^ 0x0400C1C1;

	printf("b = %#.8X\n", b);
	printf("c = %#.8X\n", c);
	printf("d = %#.8X\n", d);
}
#endif

/***********************************************************/
// [10-5] 어느 비트는 1로 어느 비트는 0으로 
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int a, b;

	for (;;)
	{
		printf("16진수 값을 입력하시오 (0x1234ABCD 형식) : ");
		scanf("%X", &a);
		fflush(stdin);

		// Code 설계

		printf("a = %#.8X\n", a);
		printf("b = %#.8X\n", b);

	}
}
#endif

/***********************************************************/
// [10-6] 입력된 값의 0 비트가 0인지 1인지 맞추는 코드
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int a;

	for (;;)
	{
		printf("16진수 값을 입력하시오 (0x? 형식) : ");
		scanf("%X", &a);
		fflush(stdin);

		// Code 설계

	}
}
#endif

/***********************************************************/
// [10-7] 입력된 값의 4번 비트가 0인지 1인지 맞추는 코드
/***********************************************************/



/***********************************************************/
// [10-8] 좌로, 우로 shift 연산
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int a = 0x55AA33CC;

	printf("a >> 2 = %#.8X\n", a >> 2);
	printf("a << 2 = %#.8X\n", a << 2);

	a >>= 2;
	printf("a >> 2 = %#.8X\n", a);
	a <<= 2;
	printf("a << 2 = %#.8X\n", a);
}
#endif

/***********************************************************/
// [10-9] 음수 값의 shift
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	unsigned int ui = 0x80000001;
	signed int si = 0x80000001;

	printf("ui = %u, ui >> 2 = %#.8X (%u)\n", ui, ui >> 2, ui >> 2);
	printf("ui = %u, ui / 4 = %#.8X (%u)\n", ui, ui / 4, ui / 4);
	printf("ui = %u, ui << 2 = %#.8X (%u)\n", ui, ui << 2, ui << 2);
	printf("ui = %u, ui * 4 = %#.8X (%u)\n", ui, ui * 4, ui * 4);

	printf("si = %d, si >> 2 = %#.8X (%d)\n", si, si >> 2, si >> 2);
	printf("si = %d, si / 4 = %#.8X (%d)\n", si, si / 4, si / 4);
	printf("si = %d, si << 2 = %#.8X (%d)\n", si, si << 2, si << 2);
	printf("si = %d, si * 4 = %#.8X (%d)\n", si, si * 4, si * 4);
}
#endif

/***********************************************************/
// [10-10] 입력된 값의 특정한 비트가 0인지 1인지 맞추는 코드
/***********************************************************/



/***********************************************************/
// [10-11] bdisp 함수
/***********************************************************/

#if 0
#include <stdio.h>

void bdisp(int a)
{

}

void main(void)
{
	int i = 0x33cc33cc;

	bdisp(i);
	i = 0x55aacc33;
	bdisp(i);
}
#endif

/***********************************************************/
// [10-12] 비트 Set 구문
/***********************************************************/

#if 0
#include <stdio.h>

void bdisp(int a)
{
	int i;

	for (i = 31; i >= 0; i--)
	{
		printf("%d", ((unsigned int)a >> i) & 1);
		if ((i % 4 == 0) && (i != 0)) printf("_");
	}
	printf("\n");
}

void main(void)
{
	int a = 0x33cc55aa;

	a |= 0x08000389;
	bdisp(a);

	a = 0x33cc55aa;
	a |= (1 << 27) | (1 << 9) | (1 << 8) | (1 << 7) | (1 << 3) | (1 << 0);
	bdisp(a);

	a = 0x33cc55aa;
	a |= (1 << 27) | (0x7 << 7) | (1 << 3) | (1 << 0);
	bdisp(a);
}
#endif

/***********************************************************/
// [10-13] 비트 invert 구문
/***********************************************************/

#if 0
#include <stdio.h>

void bdisp(int a)
{
	int i;

	for (i = 31; i >= 0; i--)
	{
		printf("%d", ((unsigned int)a >> i) & 1);
		if ((i % 4 == 0) && (i != 0)) printf("_");
	}
	printf("\n");
}

void main(void)
{
	int a = 0x33cc55aa;

	a ^= 0x08000389;
	bdisp(a);

	a = 0x33cc55aa;
	a ^= (1 << 27) | (1 << 9) | (1 << 8) | (1 << 7) | (1 << 3) | (1 << 0);
	bdisp(a);

	a = 0x33cc55aa;
	a ^= (1 << 27) | (0x7 << 7) | (1 << 3) | (1 << 0);
	bdisp(a);
}
#endif

/***********************************************************/
// [10-14] 비트 clear 구문
/***********************************************************/

#if 0
#include <stdio.h>

void bdisp(int a)
{
	int i;

	for (i = 31; i >= 0; i--)
	{
		printf("%d", ((unsigned int)a >> i) & 1);
		if ((i % 4 == 0) && (i != 0)) printf("_");
	}
	printf("\n");
}

void main(void)
{
	int a = 0x33cc55aa;

	a &= 0xF7FFFFC76;
	bdisp(a);

	a = 0x33cc55aa;
	a &= ~0x08000389;
	bdisp(a);

	a = 0x33cc55aa;
	a &= ~((1 << 27) | (1 << 9) | (1 << 8) | (1 << 7) | (1 << 3) | (1 << 0));
	bdisp(a);

	a = 0x33cc55aa;
	a &= ~((1 << 27) | (0x7 << 7) | (1 << 3) | (1 << 0));
	bdisp(a);

	a = 0x33cc55aa;
	a &= ~(1 << 27) | (0x7 << 7) | (1 << 3) | (1 << 0);
	bdisp(a);
}
#endif

/***********************************************************/
// [10-15] 비트 set 함수 
/***********************************************************/

#if 0
#include <stdio.h>

void bdisp(int a)
{
	int i;

	for (i = 31; i >= 0; i--)
	{
		printf("%d", ((unsigned int)a >> i) & 1);
		if ((i % 4 == 0) && (i != 0)) printf("_");
	}
	printf("\n");
}

int set_bit(int data, int bit)
{

}

void main(void)
{
	int a = 0x33cc55aa;

	a = set_bit(a, 5);
	a = set_bit(a, 6);
	bdisp(a);
}
#endif

/***********************************************************/
// [10-16] 비트 invert 함수 
/***********************************************************/

#if 0
#include <stdio.h>

void bdisp(int a)
{
	int i;

	for (i = 31; i >= 0; i--)
	{
		printf("%d", ((unsigned int)a >> i) & 1);
		if ((i % 4 == 0) && (i != 0)) printf("_");
	}
	printf("\n");
}

int invert_bit(int data, int bit)
{

}

void main(void)
{
	int a = 0x33cc55aa;

	a = invert_bit(a, 5);
	a = invert_bit(a, 6);
	bdisp(a);
}
#endif

/***********************************************************/
// [10-17] 비트 clear 함수 
/***********************************************************/

#if 0
#include <stdio.h>

void bdisp(int a)
{
	int i;

	for (i = 31; i >= 0; i--)
	{
		printf("%d", ((unsigned int)a >> i) & 1);
		if ((i % 4 == 0) && (i != 0)) printf("_");
	}
	printf("\n");
}

int clear_bit(int data, int bit)
{

}

void main(void)
{
	int a = 0x33cc55aa;

	a = clear_bit(a, 5);
	a = clear_bit(a, 6);
	bdisp(a);
}
#endif

/***********************************************************/
// [10-18] 연속한 여러 비트 set 함수 
/***********************************************************/

#if 0
#include <stdio.h>

void bdisp(int a)
{
	int i;

	for (i = 31; i >= 0; i--)
	{
		printf("%d", ((unsigned int)a >> i) & 1);
		if ((i % 4 == 0) && (i != 0)) printf("_");
	}
	printf("\n");
}

int set_area(int data, int bits, int bit)
{

}

void main(void)
{
	int a = 0x33cc55aa;

	a = set_area(a, 3, 5);
	bdisp(a);
}
#endif

/***********************************************************/
// [10-19] 연속한 여러 비트 invert 함수
/***********************************************************/

#if 0
#include <stdio.h>

void bdisp(int a)
{
	int i;

	for (i = 31; i >= 0; i--)
	{
		printf("%d", ((unsigned int)a >> i) & 1);
		if ((i % 4 == 0) && (i != 0)) printf("_");
	}
	printf("\n");
}

int invert_area(int data, int bits, int bit)
{

}

void main(void)
{
	int a = 0x33cc55aa;

	a = invert_area(a, 3, 5);
	bdisp(a);
}
#endif

/***********************************************************/
// [10-20] 연속한 여러 비트 clear 함수
/***********************************************************/

#if 0
#include <stdio.h>

void bdisp(int a)
{
	int i;

	for (i = 31; i >= 0; i--)
	{
		printf("%d", ((unsigned int)a >> i) & 1);
		if ((i % 4 == 0) && (i != 0)) printf("_");
	}
	printf("\n");
}

int clear_area(int data, int bits, int bit)
{

}

void main(void)
{
	int a = 0x33cc55aa;

	a = clear_area(a, 3, 5);
	bdisp(a);
}
#endif

/***********************************************************/
// [10-21] 원하는 비트가 1(set)인지 판단해 주는 함수
/***********************************************************/

#if 0
#include <stdio.h>

int check_bit_set(int data, int bit)
{

}

void main(void)
{
	int a = 0x33cc55aa;

	printf("check_bit_set(a, 3) = %d\n", check_bit_set(a, 3));
	printf("check_bit_set(a, 4) = %d\n", check_bit_set(a, 4));
}
#endif

/***********************************************************/
// [10-22] 원하는 비트가 0(clear)인지 판단해 주는 함수
/***********************************************************/

#if 0
#include <stdio.h>

int check_bit_clear(int data, int bit)
{

}

void main(void)
{
	int a = 0x33cc55aa;

	printf("check_bit_clear(a, 3) = %d\n", check_bit_clear(a, 3));
	printf("check_bit_clear(a, 4) = %d\n", check_bit_clear(a, 4));
}
#endif

/***********************************************************/
// [10-23] write_block 함수
/***********************************************************/

#if 0
#include <stdio.h>

void bdisp(int a)
{
	int i;

	for (i = 31; i >= 0; i--)
	{
		printf("%d", ((unsigned int)a >> i) & 1);
		if ((i % 4 == 0) && (i != 0)) printf("_");
	}
	printf("\n");
}

int write_block(int data, int bits, int value, int bit)
{

}

void main(void)
{
	int a = 0x33cc55aa;

	printf("original data\n");
	bdisp(a);

	printf("write_block(a, 7, 5, 0)\n");
	bdisp(write_block(a, 7, 5, 0));

	printf("write_block(a, 0xFF, 0xDE, 8)\n");
	bdisp(write_block(a, 0xFF, 0xDE, 8));
}
#endif

/***********************************************************/
// [11-1] #define과 가독성
/***********************************************************/

#if 0
#include <stdio.h>

#define MAX 10

void main(void)
{
	int i;
	int a[MAX];

	for (i = 0; i < MAX; i++)
	{
		a[i] = i;
		printf("%d\n", a[i]);
	}
}
#endif

/***********************************************************/
// [11-2] #define 주의 사항
/***********************************************************/

#if 0
#include <stdio.h>

#define MAX	4;

void main(void)
{
	int a[MAX] = { 1, 2, 3, 4 };
}
#endif

/***********************************************************/
// [11-3] #define이 치환하는 것들
/***********************************************************/

#if 0
#include <stdio.h>

#define PRT printf
#define MAX 10 + 3

void main(void)
{
	int MY_MAX = MAX - 1;
	PRT("MY_MAX = %d\n", MY_MAX);
	PRT("MAX = %d\n", MAX + 1);
}
#endif

/***********************************************************/
// [11-4] macro 작성
/***********************************************************/

#if 0
#include <stdio.h>

#define PRT(x) printf("%d\n", x)

void main(void)
{
	int a = 10;

	PRT(3);
	PRT(a + 5);
}
#endif

/***********************************************************/
// [11-5] macro는 함수가 아니다
/***********************************************************/

#if 0
#include <stdio.h>

#define SQR(x)  x*x

void main(void)
{
	int a = 2;

	printf("%d", SQR(5));
	printf("%d", SQR(a + 3));
}
#endif

/***********************************************************/
// [11-6] macro의 설계
/***********************************************************/

#if 0
#include <stdio.h>

#define SQR(x)  ((x)*(x))

void main(void)
{
	int a = 2;

	printf("%d", SQR(5));
	printf("%d", SQR(a + 3));
}
#endif

/***********************************************************/
// [11-7] 여러 문장에 걸치 macro 설계
/***********************************************************/

#if 0
#include <stdio.h>

#define SWAP(p, q) 	{int  t = *(p); *(p) = *(q); *(q) = t;}

void main(void)
{
	int x = 10; int y = 20;

	printf("%d %d\n", x, y);
	SWAP(&x, &y)
		printf("%d %d\n", x, y);
}
#endif

/***********************************************************/
// [11-8] #, ## 연산자
/***********************************************************/

#if 0
#include <stdio.h>

#define PRT(x) printf("NO_"#x " = %d\n", NO_##x)

int NO_1 = 128;
int NO_2 = 256;
int NO_A = 512;

void main(void)
{
	PRT(1);
	PRT(2);
	PRT(A);
}
#endif

/***********************************************************/
// [11-9] 배열의 요소수를 구하는 매크로 ARR_SIZE(x) 
/***********************************************************/

#if 0
#include <stdio.h>

#define ARR_SIZE(x)  (sizeof(x)/sizeof((x)[0]))

int a[4] = { 1, 2, 3, 4 };

void main(void)
{
	int i;

	for (i = 0; i < ARR_SIZE(a); i++)
	{
		printf("%d\n", a[i]);
	}
}
#endif

/***********************************************************/
// [11-10] typedef 활용
/***********************************************************/

#if 0
#include <stdio.h> 

#define UI unsigned int
#define SI signed int
#define BYTE unsigned char

void main(void)
{
	UI a;
	SI b = 2;
	BYTE c = 0x3C;

	a = (UI)(b + (SI)c);

	printf("%u\n", a);
}
#endif

#if 0
#include <stdio.h> 

typedef unsigned int UI;
typedef signed int SI;
typedef unsigned char BYTE;

void main(void)
{
	UI a;
	SI b = 2;
	BYTE c = 0x3C;

	a = (UI)(b + (SI)c);

	printf("%u\n", a);
}
#endif

/***********************************************************/
// [11-11] typedef의 중복 사용
/***********************************************************/

#if 0
#include <stdio.h> 

typedef unsigned int UI;
typedef UI * UIP;

UI a[4] = { 1, 2, 3, 4 };

void main(void)
{
	int i;

	UIP b[4] = { a, a + 1, a + 2, a + 3 };

	for (i = 0; i<3; i++)
	{
		printf("%d\n", b[i]);
	}
}
#endif

/***********************************************************/
// [11-12] 구조체의 typedef
/***********************************************************/

#if 0
#include <stdio.h> 

typedef struct st
{
	int a;
	char b;
}BOOK;

void main(void)
{

	BOOK x = { 100, 'A' };

	x.a = 200;
	x.b = 'B';

	printf("a=%d b=%c\n", x.a, x.b);
}
#endif

#if 0
#include <stdio.h> 

#define BOOK struct st \
						{ \
							int a; \
							char b; \
						} 

void main(void)
{
	BOOK x = { 100, 'A' };
	BOOK *p = &x;

	x.a = 200;
	p->b = 'B';

	printf("a=%d b=%c\n", x.a, x.b);
}
#endif

/***********************************************************/
// [11-13] 구조체의 typedef
/***********************************************************/

#if 0
#include <stdio.h> 

typedef struct st
{
	int a;
	char b;
}BOOK;

void main(void)
{
	BOOK x = { 100, 'A' };
	BOOK *p = &x;

	x.a = 200;
	p->b = 'B';

	printf("a=%d b=%c\n", x.a, x.b);
}
#endif

#if 0
#include <stdio.h> 

#define BOOK struct st \
						{ \
							int a; \
							char b; \
						} 

void main(void)
{
	BOOK x = { 100, 'A' };
	BOOK *p = &x;

	x.a = 200;
	p->b = 'B';

	printf("a=%d b=%c\n", x.a, x.b);
}
#endif

/***********************************************************/
// [11-14] #ifdef, #ifndef 조건부 컴파일
/***********************************************************/

#if 0
#include <stdio.h>

#define PRT

void main(void)
{
#ifdef PRT
	printf("defined PRT\n");
#endif

#ifdef ABC
	printf("defined ABC\n");
#else
	printf("not defined ABC\n");
#endif
}
#endif

#if 0
#include <stdio.h>

#define PRT

void main(void)
{
#ifndef PRT
	printf("not defined PRT\n");
#endif

#ifndef ABC
	printf("not defined ABC\n");
#else
	printf("defined ABC\n");
#endif
}
#endif

/***********************************************************/
// [11-15] 조건부 컴파일의 사용
/***********************************************************/

#if 0
#include <stdio.h>

#define DEBUG
#define LITTLE

void main(void)
{
	int a = 20;

#ifdef DEBUG
	printf("[DBG Message] a = %d\n", a);
#endif

#ifndef LITTLE
	a = mode_change(a);
#else
	a = a;
#endif
}
#endif

/***********************************************************/
// [11-16] #undef
/***********************************************************/

#if 0
#include <stdio.h>

#define DEBUG

void main(void)
{
#ifdef DEBUG
#undef DEBUG
#endif

#ifdef DEBUG
	printf("[DBG Message] a = %d\n", a);
#endif
}
#endif

/***********************************************************/
// [11-17] #define의 재 정의
/***********************************************************/

#if 0
#include <stdio.h>

#define TEST	0

void main(void)
{
#ifdef TEST
#undef TEST
#define TEST	1
#endif

	printf("TEST = %d\n", TEST);
}
#endif

/***********************************************************/
// [11-18]  #if 조건부 컴파일
/***********************************************************/

#if 0
#include <stdio.h>

#define SOUND_DEVICE_TYPE	0

void main(void)
{
#if !SOUND_DEVICE_TYPE
	printf("사운드 장치를 사용하지 않음\n");

#elif SOUND_DEVICE_TYPE == 1
	printf("STEREO 모드 장치 사용\n");

#else
	printf("CODE 15 : Unknown Device!\n");

#endif
	printf("사운드 모드 = %d\n", SOUND_DEVICE_TYPE);
}
#endif

/***********************************************************/
// [11-19] #if의 불가능한 것들
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int a = 1;

#if !a
	printf("사운드 장치를 사용하지 않음\n");

#elif a == 1
	printf("STEREO 모드 장치 사용\n");

#else
	printf("CODE 15 : Unknown Device!\n");

#endif

	printf("사운드 모드 = %d\n", a);
}
#endif

/***********************************************************/
// [11-20] defined 연산자
/***********************************************************/

#if 0
#include <stdio.h>

#define SOUND_DEVICE_TYPE	0

void main(void)
{
#if SOUND_DEVICE_TYPE == 1
	printf("사운드 장치를 사용하지 않음\n");
#else
	printf("CODE 15 : Unknown Device!\n");
#endif

#if defined SOUND_DEVICE_TYPE
	printf("define SOUND_DEVICE_TYPE\n");
#else
	printf("not define SOUND_DEVICE_TYPE\n");
#endif

#if !defined SOUND_DEVICE_TYPE
	printf("define SOUND_DEVICE_TYPE\n");
#else
	printf("not define SOUND_DEVICE_TYPE\n");
#endif
}
#endif

/***********************************************************/
// [11-21] #error
/***********************************************************/

#if 0
#include <stdio.h>

#define SOUND_DEVICE_TYPE	1

void main(void)
{
#if !SOUND_DEVICE_TYPE
	printf("사운드 장치를 사용하지 않음\n");

#else
#error CODE 15: Unknown Device!

#endif
	printf("사운드 모드 = %d\n", SOUND_DEVICE_TYPE);
}
#endif

/***********************************************************/
// [11-22] #pragma 사용 예
/***********************************************************/

#if 0
#include <stdio.h>

#pragma warning (disable : 4101 4700)
//#pragma warning (once : 4552)
//#pragma warning (error : 4700)

void main(void)
{
	unsigned int a, b; //(C4101 : b 미사용)

	a + 1;		//(C4552 : "+" has no effect)
	a >> 4;		//(C4552 : ">>" has no effect)
	a = a;		//(C4700 : use not initialized a)
}
#endif

/***********************************************************/
// [11-23] 다각형 주사위 만들기
/***********************************************************/

#if 0
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define RANDOM(min,max) 

void main(void)
{
	int i;

	srand((unsigned)time(NULL));

	printf("Random 1 to 8\n");
	for (i = 0; i<10; i++)
	{
		printf("%d\n", RANDOM(1, 8));
	}

	// 음수를 넣으면 어떻게 되나?

	printf("Random -2 to 6\n");
	for (i = 0; i<10; i++)
	{
		printf("%d\n", RANDOM(-2, 6));
	}

	printf("Random -12 to -4\n");
	for (i = 0; i<10; i++)
	{
		printf("%d\n", RANDOM(-12, -4));
	}
}
#endif

/***********************************************************/
// [Epilogue-1] memchar
/***********************************************************/

#if 0
#include <string.h>
#include <stdio.h>

void main(void)
{
	char astr[] = "Hello C World!\n";
	char * p;

	p = astr;

	for (;;)
	{
		p = memchr(p, 'l', sizeof(astr));
		if (p) p++;
		else break;
		printf("%s\n", p);
	}
}
#endif

/***********************************************************/
// [Epilogue-2] memcmp
/***********************************************************/

#if 0
#include <stdio.h>
#include <string.h>

void main(void)
{
	char first[] = "1234567890";
	char second[] = "1234567891";
	int result;

	result = memcmp(first, second, 9);
	printf("fisrt = second : %d\n", result);

	result = memcmp(first, second, 10);
	printf("first < second : %d\n", result);
}
#endif

/***********************************************************/
// [Epilogue-3] memcpy & memmove
/***********************************************************/

#if 0
#include <string.h>
#include <stdio.h>

char str1[10] = "abcdefgh";
char str2[10];

void main(void)
{
	memcpy(str2, str1, sizeof(str1));
	printf("memcpy : %s, %s\n", str1, str2);
}
#endif

/***********************************************************/
// [Epilogue-4] memset
/***********************************************************/

#if 0
#include <string.h>
#include <stdio.h>

void main(void)
{
	char buffer[] = "memset function test";

	printf("Before: %s\n", buffer);
	memset(buffer, '*', 4);
	printf("After:  %s\n", buffer);
}
#endif

/***********************************************************/
// [Epilogue-5] strcpy
/***********************************************************/

#if 0
#include <stdio.h>
#include <string.h>

void main(void)
{
	char str1[10] = "abcdefghi";
	char str2[10];

	strcpy(str2, str1);
	printf("strcpy: str2 = %s\n", str2);

	strcpy(str2, "123456789012345");
	printf("src > buffer: str2 = %s\n", str2);

	strcpy(str2, "12345");
	printf("src < buffer: str2 = %s\n", str2);
}
#endif

/***********************************************************/
// [Epilogue-6] strncpy
/***********************************************************/

#if 0
#include <stdio.h>
#include <string.h>

void main(void)
{
	char str1[10] = "abcdefghi";
	char str2[10];

	strncpy(str2, str1, 10);
	printf("strncpy: str2  = %s\n", str2);

	strncpy(str2, "ABCDEFGHIJKLMNO", 10);
	printf("src > count: str2 = %s\n", str2);

	strncpy(str2, "123", 10);
	printf("src < count: str2 = %s\n", str2);
}
#endif

/***********************************************************/
// [Epilogue-7] strcat & strcpy
/***********************************************************/

#if 0
#include <string.h>
#include <stdio.h>

void main(void)
{
	char string[80];
	//char string[20];

	strcpy(string, "Hello world from ");

	strcat(string, "strcpy ");
	strcat(string, "and ");
	strcat(string, "strcat!");
	printf("String = %s\n", string);
}
#endif

/***********************************************************/
// [Epilogue-8] strncat
/***********************************************************/

#if 0
#include <string.h>
#include <stdio.h>

void main(void)
{
	char string[80];

	strcpy(string, "Hello world from ");

	strncat(string, "strcpy ", 7);
	strncat(string, "and ", 8);
	strncat(string, "strcat!", 3);
	printf("String = %s\n", string);
}
#endif

/***********************************************************/
// [Epilogue-9] strlen
/***********************************************************/

#if 0
#include <string.h>
#include <stdio.h>

void main(void)
{
	char astr[10] = "Hello";
	char bstr[] = "Hello";

	printf("%d, %d\n", sizeof(astr), strlen(astr));
	printf("%d, %d\n", sizeof(bstr), strlen(bstr));
	printf("%d, %d\n", sizeof("Hello"), strlen("Hello"));
}
#endif

/***********************************************************/
// [Epilogue-10] strcmp & strncmp
/***********************************************************/

#if 0
#include <string.h>
#include <stdio.h>

void main(void)
{
	printf("%d\n", strcmp("ABC", "BC"));
	printf("%d\n", strcmp("ABC", "AC"));
	printf("%d\n", strcmp("ABC", "AB"));
	printf("%d\n", strcmp("abc", "ABC"));
	printf("%d\n", strcmp("ab", " "));
	printf("\n");
	printf("%d\n", strncmp("ABC", "BC", 5));
	printf("%d\n", strncmp("ABC", "AC", 3));
	printf("%d\n", strncmp("ABC", "AB", 2));
	printf("%d\n", strncmp("abc", "ABC", 2));
	printf("%d\n", strncmp("ab", " ", 2));
}
#endif

/***********************************************************/
// [Epilogue-11] strstr
/***********************************************************/

#if 0
#include <string.h>
#include <stdio.h>

void main(void)
{
	char * str1 = "Embedded C Programming";

	printf("str1 = %#.8x, %#.8x\n", str1, strstr(str1, "gram"));
	printf("str1 = %#.8x, %#.8x\n", str1, strstr(str1, "Imbedded"));
	printf("str1 = %#.8x, %#.8x\n", str1, strstr(str1, "\0"));
}
#endif

/***********************************************************/
// [Epilogue-12] strtok
/***********************************************************/

#if 0
#include <string.h>
#include <stdio.h>

// char str[] 변수를 char * str로 고치고 실행시켜 봅시다

char str[] = "Ritchie was\nunder the radar."
"His name \twas not a household name at all,"
"but... if you had a microscope and could look in"
"a computer, you'd see his work everywhere inside!.";
char sep[] = "\t\n,.!";

int main(void)
{
	char * p;

	p = strtok(str, sep);

	while (p != NULL)
	{
		printf("%s\n", p);
		p = strtok(NULL, sep);
	}
}
#endif

/***********************************************************/
// [Epilogue-13] 지정한 파일을 지정된 모드로 열거나 생성한다
/***********************************************************/

#if 0

#include <stdio.h>

void main(void)
{
	FILE * file;

	file = fopen("..\\test_dir.txt", "rt");
	if (file == NULL)
	{
		printf("..\\test_dir.txt 파일 열기 실패!!\n");
		return;
	}
	else
	{
		printf("..\\test_dir.txt 파일 열기 성공!!\n");
		fclose(file);
	}

	file = fopen("test1.txt", "rt");
	if (file == NULL) printf("test1.txt 파일 열기 실패!!\n");
	else printf("test1.txt 파일 열기 성공!!\n");

	file = fopen("test1.txt", "wt");
	if (file == NULL)
	{
		printf("test1.txt 파일 열기 실패!!\n");
		return;
	}
	else
	{
		printf("test1.txt 파일 열기 성공!!\n");
		fclose(file);
	}
}

#endif

/***********************************************************/
// [Epilogue-14] 사용을 끝 낸 파일을 닫는데 사용한다
/***********************************************************/

#if 0

#include <stdio.h>

void main(void)
{
	FILE * file;
	int r;

	file = fopen("test.txt", "rt");
	if (file == NULL)
	{
		printf("파일 열기 실패!!\n");
		return;
	}
	else printf("파일 열기 성공!!\n");

	r = fclose(file);
	if (!r) printf("파일 닫기 성공 r = %d\n", r);
	else printf("파일 닫기 실패 r = %d\n", r);

	r = fclose(file);
	if (!r) printf("파일 닫기 성공 r = %d\n", r);
	else printf("파일 닫기 실패 r = %d\n", r);
}

#endif

/***********************************************************/
// [Epilogue-15] 파일에서 문자열을 읽어 온다
/***********************************************************/

#if 0

#include <stdio.h>

void main(void)
{
	FILE * file;
	char buf[256];
	char * rtn;

	file = fopen("test.txt", "rt");
	if (file == NULL)
	{
		printf("파일 열기 실패!!\n");
		return;
	}

	for (;;)
	{
		rtn = fgets(buf, sizeof(buf), file);
		if (rtn != NULL) printf(buf);
		else break;
	}

	fclose(file);
}

#endif

/***********************************************************/
// [Epilogue-16] 파일에 문자열을 출력 한다
/***********************************************************/

#if 0

#include <stdio.h>

void main(void)
{
	FILE * file;
	char buf[256] = "123\nTest\n";
	int rtn;

	file = fopen("test_fputs.txt", "wt");
	if (file == NULL)
	{
		printf("파일 열기 실패!!\n");
		return;
	}

	rtn = fputs(buf, file);
	if (rtn != -1) printf("파일 쓰기 성공!!\n");
	else printf("파일 쓰기 실패!!\n");

	fclose(file);
}

#endif

/***********************************************************/
// [Epilogue-17] 파일에서 한 문자를 읽어 온다
/***********************************************************/

#if 0

#include <stdio.h>

void main(void)
{
	FILE * file;
	int ch;

	file = fopen("test.txt", "rt");
	if (file == NULL)
	{
		printf("파일 열기 실패!!\n");
		return;
	}

	do
	{
		ch = fgetc(file);
		if (ch != EOF) printf("%c", ch);
	} while (ch != EOF);

	fclose(file);
}

#endif

/***********************************************************/
// [Epilogue-18] 파일에 한 문자를 출력 한다
/***********************************************************/

#if 0

#include <stdio.h>

void main(void)
{
	FILE * file;
	char buf[] = "Hello C World!!\n";
	int ch, i;

	file = fopen("test_fputc.txt", "wt");
	if (file == NULL)
	{
		printf("파일 열기 실패!!\n");
		return;
	}

	for (i = 0; i<sizeof(buf) / sizeof(buf[0]); i++)
	{
		ch = fputc(buf[i], file);
		if (ch != buf[i]) printf("파일 쓰기 실패!!\n");
	}

	printf("파일 쓰기 성공!!\n");

	fclose(file);
}

#endif

/***********************************************************/
// [Epilogue-19] 파일에서 원하는 크기씩 원하는 개수만큼 읽어온다
/***********************************************************/

#if 0

#include <stdio.h>

void main(void)
{
	FILE * file;
	int buf[20];
	int rtn, i;

	file = fopen("test_bin.txt", "rb");
	if (file == NULL)
	{
		printf("파일 열기 실패!!\n");
		return;
	}

	rtn = fread(buf, sizeof(buf[0]), sizeof(buf) / sizeof(buf[0]), file);
	printf("읽은 데이터 개수 = %d\n", rtn);

	for (i = 0; i<rtn; i++)
	{
		printf("%d ", buf[i]);
	}
	printf("\n");

	fclose(file);
}

#endif

/***********************************************************/
// [Epilogue-20] 파일에 원하는 크기씩 원하는 개수만큼 출력한다
/***********************************************************/

#if 0

#include <stdio.h>

void main(void)
{
	FILE * file;
	int buf[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, };
	int rtn;

	file = fopen("test_fwrite.txt", "wb");
	if (file == NULL)
	{
		printf("파일 열기 실패!!\n");
		return;
	}

	rtn = fwrite(buf, sizeof(buf[0]), sizeof(buf) / sizeof(buf[0]), file);
	if (rtn != sizeof(buf) / sizeof(buf[0])) printf("파일 쓰기 실패!!\n");

	printf("파일 쓰기 성공!!\n");

	fclose(file);
}

#endif

/***********************************************************/
// [Epilogue-21] 원하는 형식의 입력을 파일로부터 입력 받는다
/***********************************************************/

#if 0

#include <stdio.h>

void main(void)
{
	FILE * file;
	int a[10];
	char b[10];
	float f;
	int c;
	int i;

	file = fopen("test_fscanf.txt", "rt");
	if (file == NULL)
	{
		printf("파일 열기 실패!!\n");
		return;
	}

	fscanf(file, "%d %s", &c, b);
	printf("%d %s\n", c, b);

	fscanf(file, "%f", &f);
	printf("%f\n", f);

	for (i = 0; i<10; i++) fscanf(file, "%d,", &a[i]);
	for (i = 0; i<10; i++) printf("%d ", a[i]);
	printf("\n");

	fclose(file);
}

#endif

/***********************************************************/
// [Epilogue-22] 원하는 형식의 출력을 파일에 출력 한다
/***********************************************************/

#if 0

#include <stdio.h>

void main(void)
{
	FILE * file;
	int d;
	float f;
	char c[10];
	int rtn;

	file = fopen("test_fprintf.txt", "wt");
	if (file == NULL)
	{
		printf("파일 열기 실패!!\n");
		return;
	}

	rtn = fprintf(file, "%d %s %f\n", 123, "SCSA", 3.14);
	printf("출력내용 : %d %s %f 출력한 바이트 수 = %d\n", 123, "SCSA", 3.14, rtn);

	fclose(file);

	file = fopen("test_fprintf.txt", "rt");
	if (file == NULL)
	{
		printf("파일 열기 실패!!\n");
		return;
	}

	rtn = fscanf(file, "%d %s %f", &d, c, &f);
	printf("읽은내용 : %d %s %f 읽은 데이터 수 = %d\n", d, c, f, rtn);

	fclose(file);
}

#endif

/***********************************************************/
// [Epilogue-23] 파일의 처음부터 다시 액세스 하게한다
/***********************************************************/

#if 0

#include <stdio.h>

void main(void)
{
	FILE * file;
	char buf[256];
	char * rtn;

	file = fopen("test.txt", "rt");
	if (file == NULL)
	{
		printf("파일 열기 실패!!\n");
		return;
	}

	do{
		rtn = fgets(buf, sizeof(buf), file);
		if (rtn) printf("1 : %s", buf);
	} while (rtn);

	do{
		rtn = fgets(buf, sizeof(buf), file);
		if (rtn) printf("2 : %s", buf);
	} while (rtn);

	rewind(file);

	do{
		rtn = fgets(buf, sizeof(buf), file);
		if (rtn) printf("3 : %s", buf);
	} while (rtn);

	fclose(file);
}

#endif

/***********************************************************/
// [Epilogue-24] 파일의 액세스 위치(FP)를 내 맘대로 정한다
/***********************************************************/

#if 0

#include <stdio.h>

void main(void)
{
	FILE * file;
	char buf[256];
	char * rtn;

	file = fopen("test.txt", "rt");
	if (file == NULL)
	{
		printf("파일 열기 실패!!\n");
		return;
	}

	fseek(file, 17, SEEK_SET);

	rtn = fgets(buf, sizeof(buf), file);
	if (rtn != NULL) printf(buf);

	fclose(file);
}

#endif

/***********************************************************/
// [Epilogue-25] 파일의 현재 액세스 위치(FP)를 알려준다
/***********************************************************/

#if 0

#include <stdio.h>

void main(void)
{
	FILE * file;
	char buf[256];
	char * rtn;

	file = fopen("test.txt", "rt");
	if (file == NULL)
	{
		printf("파일 열기 실패!!\n");
		return;
	}

	printf("FP -> %d\n", ftell(file));

	rtn = fgets(buf, sizeof(buf), file);
	if (rtn != NULL) printf(buf);

	printf("FP -> %d\n", ftell(file));

	fclose(file);
}

#endif

/***********************************************************/
// [Epilogue-26] 파일을 끝까지 읽었는지 알려준다
/***********************************************************/

#if 0

#include <stdio.h>

void main(void)
{
	FILE * file;

	file = fopen("test.txt", "rt");
	if (file == NULL)
	{
		printf("파일 열기 실패!!\n");
		return;
	}

	while (!feof(file))
	{
		printf("%c", fgetc(file));
	}

	fclose(file);
}

#endif

/***********************************************************/
// [Epilogue-27] 파일의 식별자(핸들)를 알려준다
/***********************************************************/

#if 0

#include <stdio.h>

void main(void)
{
	FILE * file;
	int handle;

	file = fopen("test.txt", "rt");
	if (file == NULL)
	{
		printf("파일 열기 실패!!\n");
		return;
	}

	handle = fileno(file);

	printf("%d\n", handle);

	fclose(file);
}

#endif

/***********************************************************/
// [Epilogue-28] 파일의 크기를 알려준다
/***********************************************************/

#if 0

#include <stdio.h>
#include <io.h>

void main(void)
{
	FILE * file;
	long size;

	file = fopen("test.txt", "rt");
	if (file == NULL)
	{
		printf("파일 열기 실패!!\n");
		return;
	}

	size = filelength(fileno(file));

	printf("%d\n", size);

	fclose(file);
}

#endif

/***********************************************************/
// [Epilogue-29] 파일을 복사하는 프로그램을 작성하라
/***********************************************************/

#if 0

#include <stdio.h>
#include <stdlib.h>
#include <io.h>

void main(void)
{


}

#endif

