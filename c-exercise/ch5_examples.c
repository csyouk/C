//#include <stdio.h>
//void main(void)
//{
//	//float a = 3.5f;
//	//printf("%x %p", a, &a);
//
//	signed int si;
//	unsigned int ui;
//	si = 4294967295u;
//	ui = -1;
//	printf("%d %u\n", si, ui);
//	printf("%x %x\n", si, ui);
//}

//void main(void){
//	//int a = -37; 
//	//printf("=======================================\n");
//	//
//	//printf("%08d, %08u, %#x\n", -37, -37, -37);
//	//printf("%08d, %08u, %#x\n", -122, -122, -122);
//	//printf("%08d, %08u, %#.8x\n", 0xfe, 0xfe, 0xfe);
//	//printf("%08d, %08u, %#x\n", -0xfe, -0xfe, -0xfe);
//	//
//	//printf("=======================================\n");
//	//
//	//printf("%d, %u\n", -1, -1);
//	//printf("%d, %u\n", 4294967295u, 4294967295u);
//	//printf("%#X, %#X\n", -1, 4294967295u);
//	//
//	//printf("=======================================\n");
//
//	//printf("%hu, %hd, %#hx, %#hx, %#ho\n", 100u, -100, 0xf3, 0xfabcde, 0144);
//	//printf("%hu, %hd, %#.8hx, %#.8hx, %#ho\n", 100u, -100, 0xf3, 0xfabcde, 0144);
//
//	//printf("=======================================\n");
//
//	//printf("result -> %#.16x\n", 0x123456789abcdef0LL);
//	//printf("result -> %#llx\n", 0x123456789abcdef0LL);
//	//printf("result -> %#llx\n", 0x13579abc);
//
//	//printf("=======================================\n");
//
//	printf("Willtek""Corporation\n");
//	printf("Willtek" "Corporation\n");
//	printf("Willtek"	"Corporation\n");
//	printf("%s", "Willtek""Corporation\n");
//	printf("%s", "Willtek"
//		"Corporation\n");
//	printf("%s", "Willtek"    \
//		"Corporation\n");
//}




/***********************************************************/
// [1-0]  Hello C World!인쇄하기
/***********************************************************/

#if 0
// 여기에 교재 내용을 보고 그대로 작성한다.


#endif

/***********************************************************/
// [1-1]  printf 함수를 이용하여 자기 이름을 인쇄하라
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	printf("               ");
}
#endif

/***********************************************************/
// [1-2]  줄 바꾸기
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{


}
#endif

/***********************************************************/
// [1-3]  \n의 기능
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	printf("C 프로그램의 \n세계?\n");
	printf("험난한 \n고행의 길!\n");
}
#endif

/***********************************************************/
// [1-4]  특수 기능 문자의 인쇄
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{


}
#endif

/***********************************************************/
// [1-5]  특수 기능 문자의 인쇄
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	printf("Hello C \n");
	printf("Return\rSa");
	printf("\nTab\tTab\n");
	printf("Back!\b");
	printf("\nAlarm\a\a\a\n");
	printf("Character\0 Ghost\n");
}
#endif

/***********************************************************/
// [1-6]  큰 따옴표의 인쇄
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	printf("\"Hello\"\n");
	printf("\\n은 줄바꾸기를 합니다\n");
}
#endif

/***********************************************************/
// [1-7]  포맷지시어를 이용하여 정수형 상수를 인쇄하시오.
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	printf("%d , %d \n", 100, -100);
	printf("%d , %d \n", 100 + 200, 100 - 200);
}
#endif

/***********************************************************/
// [1-8]  정수형 상수 10진수 인쇄
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{


}
#endif

/***********************************************************/
// [1-9]  printf의 format 지시어
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	printf("10진수 => %d\n", 100);
	printf("16진수 => %x와 %X\n", 0xF0, 0xF0);
	printf("8진수 => %o\n", 034);

	printf("%d, %x, %o\n", 100, 100, 100);
	printf("%d, %x, %o\n", 0x64, 0x64, 0x64);
	printf("%d, %x, %o\n", 0144, 0144, 0144);
	printf("%d, %#x, %#o\n", 100, 100, 100);
}
#endif

/***********************************************************/
// [1-10]  89를 각 진법으로 변환한 값 구하기
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{

}
#endif

/***********************************************************/
// [1-11] 문자와 문자열의 인쇄
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	printf("%c %c %c\n", 'A', 65, 0x41);
	printf("%c %c %c\n", 'A' + 1, 'B', 'C' - 1);
	printf("%d %d %d %d\n", 1, 1 + 1, '1', '1' + 1);
	printf("%c%c%c\n", 'A', 'B', 'C');
	printf("%s\n", "ABC");
}
#endif

/***********************************************************/
// [1-12] 성명, 과목, 성적을 인쇄
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{


}
#endif

/***********************************************************/
// [1-13] 실수형 상수 인쇄
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	printf("%f, %f \n", 3.14, -3.14);
	printf("%.5f, %.3f \n", 123.4567, 123.4567);
	printf("%10.2f, %5.2f \n", 123.4567, 123.4567);
	printf("%10.2f, %010.2f \n", 123.4567, 123.4567);
}
#endif
/***********************************************************/
// [1-14] 원의 넓이를 구하는 코드
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{

}
#endif

/***********************************************************/
// [1-15] 사각형의 넓이, 원의 넓이 인쇄
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int width = 3, height = 5, rect_area;
	double pi = 3.14, radius = 3.5, circle_area;

	rect_area = width * height;
	circle_area = radius * radius * pi;
	printf("%d * %d = %d \n", width, height, rect_area);
	printf("%f * %f * %f = %f \n", radius, radius, pi, circle_area);
}
#endif

/***********************************************************/
// [1-16] 삼각형의 넓이 인쇄
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{


}
#endif

/***********************************************************/
// [1-17] 3과목의 합계와 평균 인쇄
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{


}
#endif

/***********************************************************/
// [1-18] printf 친구 scanf
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int i;

	printf("Input:");
	scanf("%d", &i);
	printf("Your choice: %d\n", i);
}
#endif

/***********************************************************/
// [1-19] 여러개의 숫자를 입력받는 scanf
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int i, j, k;
	printf("Input(i,j,k):");
	scanf("%d%d%d", &i, &j, &k);
	printf("Your choice is : i=%d j=%d k=%d\n", i, j, k);
}
#endif

/***********************************************************/
// [1-20] 문자를 입력 받는 scanf
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	char a, b;
	printf("input : ");
	scanf("%c%c", &a, &b);
	//scanf("%c %c", &a, &b);
	printf("Your choice is : %c%c", a, b);
}
#endif

/***********************************************************/
// [1-21] 여러 줄로 입력 받는scanf
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	char a, b, c;
	printf("input : ");
	scanf("%c %c", &a, &b);
	//fflush(stdin);
	scanf("%c", &c);
	printf("Your choice is : %c%c%c", a, b, c);
}
#endif

/***********************************************************/
// [1-22] fflush함수 외의 다른 해결방법은?
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{


}
#endif

/***********************************************************/
// [1-23] 문자열을 입력받는 scanf
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	char a[100];

	printf("Input(100글자 미만 문자열):");
	scanf("%s", a);
	printf("Your choice is: %s", a);
}
#endif

/***********************************************************/
// [1-24] 자신의 영문이름과 주소 입력 입력받는 scanf
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{


}
#endif

/***********************************************************/
// [1-25] 공백까지 입력받은 gets
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	char a[100];

	printf("Input : ");
	gets(a);
	printf("Your choice is : %s", a);
}
#endif

/***********************************************************/
// [1-26] 공백을 포함한 이름과 주소를 입력 받는 gets
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{


}
#endif

/***********************************************************/
// [1-27] 한글자만 입력받거나 인쇄하는 함수
/***********************************************************/

#if 0
#include <stdio.h>
#include <conio.h>
void main(void)
{
	int a;
	printf("getchar => Input : ");
	a = getchar();
	printf("Your choice is : ");
	putchar(a);
	putchar('\n');

	printf("getch => Input : ");
	a = getch();
	putch('\n');
	printf("Your choice is : ");
	putch(a);
}
#endif

/***********************************************************/
// [1-28] 사칙연산
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int a = 10, b = 4;

	printf("a + b = %d\n", a + b);
	printf("a - b = %d\n", a - b);
	printf("a * b = %d\n", a * b);
	printf("a / b = %d\n", a / b);
	printf("a %% b = %d\n", a % b);
}
#endif

/***********************************************************/
// [1-29] 대입 연산
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int a = 0x12345678;  // 정상 대입
	unsigned char b;

	b = a;							// 작은 메모리로 대입
	printf("a = %#.8x, b = %#.8x\n", a, b);

	a = b;							// 큰 메모리로 대입
	printf("a = %#.8x, b = %#.8x\n", a, b);
}
#endif

/***********************************************************/
// [1-30] 연산자 우선순위 연습 예제
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int a = 10;
	int b = 20;
	int c;

	c = +a - -b;
	printf("c = %d\n", c);

	c = sizeof(a) + -b;
	printf("c = %d\n", c);
}
#endif

/***********************************************************/
// [1-31] 사칙연산의 우선순위
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int a = 10;
	int b = 20;
	int c1, c2, c3, c4;

	c1 = a + b * 2;
	c2 = a * b / 2 % 4;
	c3 = -a * 2 + b / 4;
	c4 = a * ((2 + -b) / 4);

	printf("%d %d %d %d\n", c1, c2, c3, c4);
}
#endif

/***********************************************************/
// [1-32] 대입연산의 우선순위
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int a = 20, b, c, d;

	a = b = c = d = 10;

	printf("%d %d %d %d\n", a, b, c, d);
}
#endif

/***********************************************************/
// [1-33] /, % 연산자의 활용 => 10진수 자리수 분리
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int a = 2345;
	int a4, a3, a2, a1;

	a4 =
		a3 =
		a2 =
		a1 =

		printf("1000자리=%d, 100자리=%d, 10자리=%d, 1자리=%d\n", a4, a3, a2, a1);
}
#endif

/***********************************************************/
// [1-34] 복합대입 연산자
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int a = 20, b = 4;

	a += 3;
	printf("%d\n", a);

	a -= b;
	printf("%d\n", a);

	a *= b + 2;
	printf("%d\n", a);

	a /= a - b + 1;
	printf("%d\n", a);

	a %= b -= 3;
	printf("%d\n", a);
}
#endif

/***********************************************************/
// [1-35] 복합대입 연산자의 복원
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{


}
#endif

/***********************************************************/
// [1-36] ++, -- 증가, 감소 연산자
/***********************************************************/

#if 0
#include<stdio.h>

void main(void)
{
	int a = 10, b;
	float f = 3.14f;

	a++;
	f++;
	printf("%d, %f\n", a, f);

	++a;
	++f;
	printf("%d, %f\n", a, f);

	b = ++a;
	printf("a=%d, b=%d\n", a, b);

	b = a++;
	printf("a=%d, b=%d\n", a, b);

	b = ++a + b;
	printf("a=%d, b=%d\n", a, b);

	b = a++ + b;
	printf("a=%d, b=%d\n", a, b);
}
#endif

/***********************************************************/
// [1-37] /, % 연산자의 활용 => 16진수 자리수 분리
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int a;
	int a4, a3, a2, a1;

	printf("16진수 입력 : ");
	scanf("%x", &a);

	// 여기에 코드 입력

	printf("0x1000자리=%X, 0x100자리=%X, 0x10자리=%X, 0x1자리=%X\n", a4, a3, a2, a1);
}
#endif

/***********************************************************/
// [1-38] 본인의 핸드폰 정보를 적절한 타입의 변수로 입력 받아 인쇄하시오
/***********************************************************/

#if 0
#include<stdio.h>

void main(void)
{


}
#endif

/***********************************************************/
// [2-1] 함수의 호출
/***********************************************************/

#if 0
#include <stdio.h>

void no_op(void)
{
}

void welcome(void)
{
	printf("Hello!\n");
}

void print_weight(int weight)
{
	printf("Weight = %d\n", weight);
}

int Get_My_Weight(void)
{
	int weight = 70;
	return weight;
}

int add(int a, int b)
{
	int c;

	c = a + b;
	return c;
}

void main(void)
{
	int r;
	int x = 50;
	int a = 3;
	int b = 5;

	no_op();
	welcome();
	printf("My Weight = %dkg\n", Get_My_Weight() + 10);
	print_weight(x);
	r = add(a, b);
	printf("add = %d\n", r);
}
#endif

/***********************************************************/
// [2-2] argument 전달
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
	int r;
	int x = 50;
	int a = 3;
	int b = 5;

	printf("add = %d\n", add(3, 5));

	printf("add = %d\n", add(a, b));

	r = add(x + 2, a);
	printf("add = %d\n", r);

	r = add(add(3, 5), add(x, a));
	printf("add = %d\n", r);
}
#endif


/***********************************************************/
// [2-3] 함수의 위치
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	weight(50);
}

void weight(int w)
{
	printf("Weight = %d Kg\n", w);
}
#endif

/***********************************************************/
// [2-4] 함수의 선언
/***********************************************************/

#if 0
#include <stdio.h>

// 여기에 함수 선언 (다음 3가지 중 하나를 선택)

void weight(int w);
// void weight(int weight);
// void weight(int);

void main(void)
{
	weight(50);
}

void weight(int w)
{
	printf("Weight = %d Kg\n", w);
}
#endif


/***********************************************************/
// [2-5] 함수의 호출 => 인수의 전달
/***********************************************************/

#if 0
#include <stdio.h>

void func(char x)
{
	printf("x = %#.8x\n", x);
}

void main(void)
{
	int a = 0x12345678;
	func(a);
}
#endif

/***********************************************************/
// [2-6] 함수의 호출 => 리턴의 활용 전달
/***********************************************************/

#if 0
#include <stdio.h>

int add(int a, int b)
{
	return a + b;
}

void main(void)
{
	int a = 0x12345678;
	int b = 0x87654321;
	unsigned char r;

	r = add(a, b);
	printf("return=%#.8x\n", r);

	add(a, b);
	(void)add(a, b);
}
#endif

/***********************************************************/
// [2-7] 헤더 파일의 생성
/***********************************************************/

/* [1] weight 함수의 프로토타입을 my.h 파일에 생성한다 */
/* 0 [2] 이 파일을 프로젝트 솔루션으로 불러 온다 */
/* 0 [3] 다음 코드에서 my.h를 include 시킨다 */

#if 0
#include <stdio.h>
#include "my.h"

void main(void)
{
	weight(50);
}

void weight(int w)
{
	printf("Weight = %d Kg\n", w);
}
#endif

/***********************************************************/
// [2-8] 함수의 분석
/***********************************************************/

#if 0
#include <stdio.h>

int sqr(int x);
int area(int x, int y);
float compute_circle_arc(float radious);

void main(void)
{
	printf("sqr=%d\n", sqr(3));
	printf("area=%d\n", area(3, 5));
	printf("arc=%f\n", compute_circle_arc(4.1f));
}

int sqr(int x)
{
	return x * x;
}

int area(int x, int y)
{
	return x * y;
}

float compute_circle_arc(float radious)
{
	float pi = 3.141592f;

	radious = 2 * radious * pi;
	return radious;
}
#endif

/***********************************************************/
// [2-9] 함수 만들기 연습
/***********************************************************/

#if 0
#include <stdio.h>

float compute_circle_area(float radious);
unsigned int change_current_rate(unsigned int japan);
int find_int(float value);
int make_group(int id);

void main(void)
{
	printf("circle_area=%f\n", compute_circle_area(4.0f));
	printf("korea won=%u\n", change_current_rate(2540));
	printf("nearest int=%d\n", find_int(3.52f));
	printf("nearest int=%d\n", find_int(3.12f));
	printf("group no=%d\n", make_group(120301));
	printf("group no=%d\n", make_group(123452));
	printf("group no=%d\n", make_group(123453));
	printf("group no=%d\n", make_group(123450));
}

float compute_circle_area(float radious)
{
	float pi = 3.141592f;

	radious = radious * radious * pi;

	return radious;
}

unsigned int change_current_rate(unsigned int japan)
{
	float rate = 1100.f / 100.f;

	return (unsigned int)((float)japan * rate);
}

int find_int(float value)
{
	float bias = 0.5f;

	value += bias;

	return (int)value;
}

int make_group(int id)
{
	return id % 4 + 1;
}
#endif

/***********************************************************/
// [2-10] 대문자를 소문자로 전환하는 함수 설계
/***********************************************************/

#if 0
#include <stdio.h>

char Change_Case(char upper)
{
	return upper - 'A' + 'a';
}

void main(void)
{
	char a;

	printf("Input Uppercase character : ");
	scanf("%c", &a);

	printf("%c => %c\n", a, Change_Case(a));
}
#endif

/***********************************************************/
// [2-11] ASCII 숫자 문자를 정수 숫자로 반환하는 함수
/***********************************************************/

#if 0
#include <stdio.h>

int Change_Char_to_Int(char num)
{
	return num - '0';
}

void main(void)
{
	char a;

	printf("Input number (0~9) : ");
	scanf("%c", &a);

	printf("%d\n", Change_Char_to_Int(a));
}
#endif

/***********************************************************/
// [3-1] 공백문
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int b = 10;;;;
	int c = 20;

	printf("%d\n", a);;;;;
	;;;;
	printf("%d\n", b);;;;;
}
#endif

/***********************************************************/
// [3-2] 수식문
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int a = 10 * 2;
	int b = a + 2;
	int c = a + b;

	a + 4;
	b;
	3;
	printf("%d %d %d \n", a, b, c);
}
#endif

/***********************************************************/
// [3-3] 리턴문
/***********************************************************/

#if 0
#include <stdio.h>

void f1(void)
{
	printf("f1 IN\n");
	return;
	printf("f1 OUT\n");
}

int f2(void)
{
	return 10;
}

void main(void)
{
	f1();
	printf("%d\n", f2());
}
#endif

/***********************************************************/
// [3-4] if 문
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	if (1)	printf("True\n");
	if (0)	printf("False\n");
	if (-1) printf("True\n");
	if (0); printf("False\n");
}
#endif

/***********************************************************/
// [3-5] else 문
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	if (1)	printf("True\n");
	else	printf("False\n");
	if (0)	printf("False\n");
	else	printf("True\n");
}
#endif

/***********************************************************/
// [3-6] 짝수 홀수 판단 함수 설계
/***********************************************************/

#if 0

// 짝수이면 2, 홀수이면 1을 리턴한다

#include <stdio.h>

int Check_Odd_Even(int num)
{
	if (num % 2) return 1;
	else return 2;
}

void main(void)
{
	printf("3 => %d\n", Check_Odd_Even(3));
	printf("62 => %d\n", Check_Odd_Even(62));
	printf("157 => %d\n", Check_Odd_Even(157));
}
#endif

#if 0

// 짝수이면 0, 홀수이면 1을 리턴한다

#include <stdio.h>

int Check_Odd_Even(int num)
{
	return num % 2;
}

void main(void)ekwnd
{
	printf("3 => %d\n", Check_Odd_Even(3));
	printf("62 => %d\n", Check_Odd_Even(62));
	printf("157 => %d\n", Check_Odd_Even(157));
}
#endif

/***********************************************************/
// [3-7] 비교 연산자의 사용
/***********************************************************/

#if 0
#include <stdio.h>

int compare(int num)
{
	if (num % 2 == 0) return 2;
	if (num % 3 == 0) return 3;
	if (num % 5 == 0) return 5;
	else return 0;
}

void main(void)
{
	printf("3 => %d\n", compare(3));
	printf("62 => %d\n", compare(62));
	printf("25 => %d\n", compare(25));
	printf("157 => %d\n", compare(157));
}
#endif

#if 0
#include <stdio.h>

int compare(int num)
{
	int r = 0;

	if (num % 2 == 0) r = 2;
	if (num % 3 == 0) r = 3;
	if (num % 5 == 0) r = 5;
	return r;
}

void main(void)
{
	printf("3 => %d\n", compare(3));
	printf("62 => %d\n", compare(62));
	printf("25 => %d\n", compare(25));
	printf("157 => %d\n", compare(157));
}
#endif

#if 0
#include <stdio.h>

int compare(int num)
{
	int r = 0;

	if ((num % 2) == 0) r = 2;
	if ((num % 3) == 0) r = 3;
	if ((num % 5) == 0) r = 5;
	return r;
}

void main(void)
{
	printf("3 => %d\n", compare(3));
	printf("62 => %d\n", compare(62));
	printf("25 => %d\n", compare(25));
	printf("157 => %d\n", compare(157));
}
#endif

/***********************************************************/
// [3-8] else if
/***********************************************************/

#if 0
#include <stdio.h>

int compare(int num)
{
	int r = 0;

	if ((num % 2) == 0) r = 2;
	else
		if ((num % 3) == 0) r = 3;
		else
			if ((num % 5) == 0) r = 5;

	return r;
}

void main(void)
{
	printf("3 => %d\n", compare(3));
	printf("62 => %d\n", compare(62));
	printf("25 => %d\n", compare(25));
	printf("157 => %d\n", compare(157));
}
#endif

#if 0
#include <stdio.h>

int compare(int num)
{
	int r = 0;

	if ((num % 2) == 0) r = 2;
	else
		if ((num % 3) == 0) r = 3;
		else
			if ((num % 5) == 0) r = 5;

	return r;
}

void main(void)
{
	printf("3 => %d\n", compare(3));
	printf("62 => %d\n", compare(62));
	printf("25 => %d\n", compare(25));
	printf("157 => %d\n", compare(157));
}
#endif

#if 0
#include <stdio.h>

int compare(int num)
{
	int r = 0;

	if ((num % 2) == 0) r = 2;
	else if ((num % 3) == 0) r = 3;
	else if ((num % 5) == 0) r = 5;

	return r;
}

void main(void)
{
	printf("3 => %d\n", compare(3));
	printf("62 => %d\n", compare(62));
	printf("25 => %d\n", compare(25));
	printf("157 => %d\n", compare(157));
}
#endif

/***********************************************************/
// [3-9] 참, 거짓의 결과 값
/***********************************************************/

#if 0
#include <stdio.h>

int compare(int num)
{
	int r = 0;

	if ((num % 2) == 0) r = 2;
	else
		if ((num % 3) == 0) r = 3;
		else
			if ((num % 5) == 0) r = 5;

	return r;
}

void main(void)
{
	int a = 10;
	int b = 0;
	float c = -3.14f;

	if (a) printf("a : True\n");
	if (b) printf("b : True\n");
	if (b == 0) printf("b == 0 : True\n");
	if (b != a) printf("b != a : True\n");
	if (c >= 3.14f) printf("c >= 3.14f : True\n");

	a = b == 1;
	printf("True or False = %d\n", a);

	a = b < 1;
	printf("True or False = %d\n", a);

	a = (c == 3.14f) + (b != 1);
	printf("True or False = %d\n", a);
}
#endif

/***********************************************************/
// [3-10] ! 연산자
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int a = 3;

	if (!1)	printf("!1 : True\n");
	if (!0)	printf("!0 : True\n");
	if (!(a == 3)) printf("!(a == 0) : True\n");
	if (!a == 0) printf("!a == 0 : True\n");
	if (!(a + 3)) printf("!(a + 3) : True\n");
}
#endif

/***********************************************************/
// [3-11] 3의 배수 값인지 확인하는 함수
/***********************************************************/

#if 0
#include <stdio.h>

int multiple_of_3(int num)
{
	if (num % 3) return 0;
	else return 1;
}

void main(void)
{
	printf("3 => %d\n", multiple_of_3(3));
	printf("8 => %d\n", multiple_of_3(8));
	printf("27 => %d\n", multiple_of_3(27));
	printf("513 => %d\n", multiple_of_3(513));
}
#endif

#if 0
#include <stdio.h>

int multiple_of_3(int num)
{
	return !(num % 3);
}

void main(void)
{
	printf("3 => %d\n", multiple_of_3(3));
	printf("8 => %d\n", multiple_of_3(8));
	printf("27 => %d\n", multiple_of_3(27));
	printf("513 => %d\n", multiple_of_3(513));
}
#endif

/***********************************************************/
// [3-12] = 은 ==이 아니랍니다
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int a = 0;

	if (a = 3) printf("True\n");
	else printf("False\n");
}
#endif

/***********************************************************/
// [3-13] 복합문의 생성
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int a = 3;

	if (a > 3) printf("True\n"); a++;
	if (a == 4) printf("Bingo!\n");
}
#endif

#if 0
#include <stdio.h>

void main(void)
{
	int a = 3;

	if (a > 3) { printf("True\n"); a++; }
	if (a == 4) printf("Bingo!\n");
}
#endif

#if 0
#include <stdio.h>

void main(void)
{
	int a = 3;

	if (a > 3)
	{
		printf("True\n");
		a++;
	}

	if (a == 4)
	{
		printf("Bingo!\n");
	}
}
#endif

#if 0
#include <stdio.h>

void main(void)
{
	int a = 3;

	if (a > 3) {
		printf("True\n");
		a++;
	}

	if (a == 4) {
		printf("Bingo!\n");
	}
}
#endif

#if 0
#include <stdio.h>

void main(void)
{
	int a = 3;

	if (a > 3)
	{
		printf("True\n");
		a++;
	}

	if (a == 4) printf("Bingo!\n");
}
#endif

/***********************************************************/
// [3-14] 복합식?
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int a;
	int b;
	int c;

	if (a = 3, b = 4, c = 0) printf("True\n");
	else printf("False\n");

	printf("%d, %d, %d\n", a, b, c);
}
#endif

/***********************************************************/
// [3-15] , 연산자의 동작과 우선순위
/***********************************************************/

#if 0
#include <stdio.h>

int add(int a, int b)
{
	return a + b;
}

void main(void)
{
	int a;

	printf("%d\n", add(3, 4, 5));
	printf("%d\n", add(3, (4, 5)));

	a = 3, 4;
	printf("%d\n", add(a, 10));
	a = (50, 100);
	printf("%d\n", add(a, 200));
}
#endif

/***********************************************************/
// [3-16] 3의 배수 또는 5의 배수 찾기
/***********************************************************/



/***********************************************************/
// [3-17] 4~10 사이 숫자 찾기
/***********************************************************/



/***********************************************************/
// [3-18] 대문자 또는 소문자 찾기
/***********************************************************/



/***********************************************************/
// [3-19] 논리곱 연산
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int a = 4, b = 0;

	if (a == 5 && b = 3) b++;
	printf("%d\n", b);
}
#endif

/***********************************************************/
// [3-20] 논리곱 연산의 수정
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int a = 4, b = 0;

	if ((a == 5) && (b = 3)) b++;
	printf("%d\n", b);
}
#endif

/***********************************************************/
// [3-21] 논리합 연산
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int a = 4, b = 0;

	if ((a < 5) || (b = 3)) b++;
	printf("%d\n", b);
}
#endif

/***********************************************************/
// [3-22] 조건 연산자
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int a = 10;
	int b = 20;
	int c;

	c = if (b < 5) a; else b;
	printf("%d\n", c);
}
#endif

#if 0
#include <stdio.h>

void main(void)
{
	int a = 10;
	int b = 20;
	int c;

	c = (b < 5) ? a : b;
	printf("%d\n", c);
}
#endif

/***********************************************************/
// [3-23] 함수 호출도 호출 연산자다
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int a = 10;

	a ? printf("True\n") : printf("False\n");
}
#endif

/***********************************************************/
// [3-24] 조건 연산자는 피연산자로 수식을 취한다
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int a = 10;

	a ? { printf("True\n"); a++; } : { printf("False\n"); a--; };
	printf("a = %d\n", a);
}
#endif

#if 0
#include <stdio.h>

void main(void)
{
	int a = 10;


	// 어떻게 수정하면 위의 코드를 정상으로 만들 수 있을까?


	printf("a = %d\n", a);
}
#endif

/***********************************************************/
// [3-25] 조건 연산자의 우선 순위
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int a = 10;
	int b = 20;

	(a == 20) ? (b < 0) ? (a = 1) : (a = 0) : (b = 30);
	printf("a = %d, b = %d\n", a, b);
}
#endif

/***********************************************************/
// [3-26] 소문자 f ~ z 찾기
/***********************************************************/



/***********************************************************/
// [3-27] 대문자 소문자 변경
/***********************************************************/



/***********************************************************/
// [3-28] 'L', 'E', 'W' 문자는 '*' 리턴, 그 외는 원래 글자 리턴, 영문자 아니면 0 리턴
/***********************************************************/



/***********************************************************/
// [3-29] 음의 실수 포함하여 가까운 정수 찾는 함수
/***********************************************************/



/***********************************************************/
// [3-30] switch ~ case의 동작
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int a = 2;

	switch (a)
	{
	case 1: printf("1번 연결해드리겠습니다\n");
	case 2: printf("2번 연결해드리겠습니다\n");
	case 3: printf("3번 연결해드리겠습니다\n");
	default: printf("잘못 거셨습니다\n");
	}
}
#endif

/***********************************************************/
// [3-31] break 문장의 사용
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int a = 2;

	switch (a)
	{
	case 1:
	{
		printf("1번 연결해드리겠습니다\n");
		break;
	}
	case 2:
	{
		printf("2번 연결해드리겠습니다\n");
		break;
	}
	case 3:
	{
		printf("3번 연결해드리겠습니다\n");
		break;
	}
	default:
	{
		printf("잘못 거셨습니다\n");
	}
	}
}
#endif

/***********************************************************/
// [3-32] 행운의 제비 뽑기
/***********************************************************/



/***********************************************************/
// [3-33] 덤 많이 챙겨주는 인심 좋은 주인 아줌마
/***********************************************************/



/***********************************************************/
// [3-34] 성적처리 함수
/***********************************************************/



/***********************************************************/
// [4-1] 0 부터 9까지 10회 반복하면서 인쇄하는 코드
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int i;

	for (i = 0; i < 10; i++) printf("%d\n", i);
}
#endif

#if 0
#include <stdio.h>

void main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d\n", i);
	}
}
#endif

/***********************************************************/
// [4-2] 0 부터 20까지 짝수를 인쇄하는 코드
/***********************************************************/



/***********************************************************/
// [4-3] 0 부터 20까지 3의 배수를 인쇄하는 코드
/***********************************************************/



/***********************************************************/
// [4-4] *을 입력 받은 수 만큼 인쇄하는 코드
/***********************************************************/



/***********************************************************/
// [4-5] 숫자를 7 부터 입력 받은 개수 만큼 연속 인쇄하는 코드
/***********************************************************/



/***********************************************************/
// [4-6] ‘A’부터 입력 받은 알파벳까지 알파벳을 인쇄 
/***********************************************************/



/***********************************************************/
// [4-7] ‘D’부터 입력 받은 알파벳 사이 글자를 2개씩 건너 띄며 인쇄
/***********************************************************/



/***********************************************************/
// [4-8] 3,6,9 게임
/***********************************************************/



/***********************************************************/
// [4-9] * 9씩 9줄 인쇄
/***********************************************************/



/***********************************************************/
// [4-10] 구구단 인쇄
/***********************************************************/



/***********************************************************/
// [4-11] break의 동작
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 7) break;
		printf("%d\n", i);
	}
}
#endif

/***********************************************************/
// [4-12] continue의 동작
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 7) break;
		if (i % 3) continue;
		printf("%d\n", i);
	}
}
#endif

/***********************************************************/
// [4-13] break의 for 루프 탈출
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int i, j;

	for (i = 0; i < 20; i++)
	{
		for (j = 0, printf("Loop => %d\n", i); j< 10; i++, j++)
		{
			if (j == 4) break;
		}

		if (i % 3) continue;
		printf("==============\n");
	}
}
#endif

/***********************************************************/
// [4-14] 이중 루프의 탈출
/***********************************************************/



/***********************************************************/
// [4-15] 이중 for 루프를 이용한 인쇄
/***********************************************************/



/***********************************************************/
// [4-16] 1부터 입력 값까지 소수를 모두 인쇄하는 함수
/***********************************************************/



/***********************************************************/
// [4-17] 1부터 10까지 인쇄하는 함수 (while)
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int a = 0;

	while (a < 5)
	{
		printf("*");
		a++;
	}

	printf("\n===============\n");

	a = 5;

	while (a > 0)
	{
		printf("*");
		a--;
	}

	printf("\n===============\n");

	a = 0;

	while (a++ < 5) printf("*");

	printf("\n===============\n");

	a = 5;

	while (a--) printf("*");

	printf("\n===============\n");
}
#endif

/***********************************************************/
// [4-18] 알아두면 편리한 while 구문
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int a = 0;

	while (a < 10)
	{
		printf("%d\n", a);
		a++;
	}
}
#endif

#if 0
#include <stdio.h>

void main(void)
{
	int a = 0;

	while (!(a == 13))
	{
		printf("%d\n", a);
		a++;
	}
}
#endif

/***********************************************************/
// [4-19] 받은 수부터 0까지 3의 배수를 인쇄하는 함수
/***********************************************************/



/***********************************************************/
// [4-20] 구구단 인쇄 while 버전
/***********************************************************/



/***********************************************************/
// [4-21] 행운의 네잎클로버 찾는 함수
/***********************************************************/



/***********************************************************/
// [4-22] 로또 당첨을 노리는 함수
/***********************************************************/



/***********************************************************/
// [4-23] do ~ while의 일반적인 형식
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int a = 0;

	do a++; while (a < 10);

	a = 10;

	do
		a++;
	while (a < 10);

	a = 10;

	do
	{
		a++;
	} while (a < 10);

	printf("a=%d\n", a);
}
#endif

/***********************************************************/
// [4-24] do ~ while 문이 필요할 때
/***********************************************************/

#if 0
#include <stdio.h>

int num = 0;

int func(void)
{
	num++;
	return num;
}

void main(void)
{
	int a = 0;

	do
	{
		a = func();
		printf("a=%d\n", a);
	} while (a < 5);

	a = 10;
}
#endif

#if 0
#include <stdio.h>

int num = 0;

int func(void)
{
	num++;
	return num;
}

void main(void)
{
	int a = 0;

	a = func();

	while (a <= 5)
	{
		printf("a=%d\n", a);
		a = func();
	}
}
#endif

#if 0
#include <stdio.h>

int num = 0;

int func(void)
{
	num++;
	return num;
}

void main(void)
{
	int a = 0;

	while (a = func(), printf("a=%d\n", a), a < 5);
}
#endif

#if 0
#include <stdio.h>

int num = 0;

int func(void)
{
	num++;
	return num;
}

void main(void)
{
	int a = 0;

	do
	{
		a = func();
		printf("a=%d\n", a);
		if (a == 3) break;
	} while (a < 5);
}
#endif

/***********************************************************/
// [4-25] 잘 못 쓰면 스파게티가 되는 goto문
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int  i = 3;

	for (;;)
	{
		switch (i)
		{
		case 1: printf("case 1\n"); break;
		case 2: printf("case 2\n"); break;
		case 3: printf("case 3\n"); i = -1; break;
		default: printf("default\n");
		}

		if (i == -1) break;
	}

	printf("Exit\n");
}
#endif

#if 0
#include <stdio.h>

void main(void)
{
	int  i = 3;

	for (;;)
	{
		switch (i)
		{
		case 1: printf("case 1\n"); break;
		case 2: printf("case 2\n"); break;
		case 3: printf("case 3\n"); goto EXIT;
		default: printf("default\n");
		}
	}
EXIT:
	printf("Exit\n");
}
#endif

/***********************************************************/
// [4-26] 두 수를 입력 받아서 그 사이에 존재하는 소수를 인쇄하는 프로그램
/***********************************************************/



/***********************************************************/
// [4-27] 팩토리얼(!)을 구하는 함수 
/***********************************************************/



/***********************************************************/
// [4-28] 두 정수의 중간 값을 구하는 함수
/***********************************************************/



/***********************************************************/
// [4-29] 별 자판기 함수들
/***********************************************************/



/***********************************************************/
// [4-30] 피날레 : 별 인쇄
/***********************************************************/



/***********************************************************/
// [5-1] 정수의 음수 표현
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	printf("%d, %u, %#x\n", -37, -37, -37);
	printf("%d, %u, %#x\n", -122, -122, -122);
	printf("%d, %u, %#x\n", 0xfe, 0xfe, 0xfe);
	printf("%d, %u, %#x\n", -0xfe, -0xfe, -0xfe);
}
#endif

/***********************************************************/
// [5-2] -1, 4294967295 인쇄
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	printf("%d, %u\n", -1, -1);
	printf("%d, %u\n", 4294967295u, 4294967295u);
	printf("%#X, %#X\n", -1, 4294967295u);
}
#endif

/***********************************************************/
// [5-3] 여러 가지 타입을 인쇄하는 format 지시자
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	printf("%u, %d, %#X, %#x, %#o\n", 100u, -100, 0xF3, 0xFABC, 0144);
	printf("%lu, %ld, %#lX, %#lx, %#lo\n", 100UL, -100L, 0xF3L, 0xFABCL, 0144L);
	printf("%llu, %lld, %#llX, %#llx, %#llo\n", 100ULL, -100LL, 0xF3LL, 0xFABCLL, 0144LL);
	printf("%hu, %hd, %#hX, %#hx, %#ho\n", 100u, -100, 0xF3, 0xFABCDE, 0144);
}
#endif

/***********************************************************/
// [5-4] 정확한 타입의 사용
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	printf("인쇄결과 => %#x\n", 0x123456789ABCDEF0LL);
	printf("인쇄결과 => %#llx\n", 0x13579ABC);
}
#endif

/***********************************************************/
// [5-5] 문자의 인쇄
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	printf("%c %c %c\n", 65, 0x41, 0101);
	printf("%c %c\n", '\x41', '\101');
	printf("%d %d\n", '1', 1);
	printf("%#x %#x %#x %#x\n", 0x41, 'A', '\x41', '\101');
	printf("\\x9=%c \\t=%c!\n", '\x9', '\t');

	printf("%c %c %d\n", 'A' + 1, 'C' - 2, '3' - '1');
}
#endif

/***********************************************************/
// [5-6] Hello의 인쇄
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	printf("%c%c%c%c%c\n", 'H', 'e', 'l', 'l', 'o');
	printf("Hello\n");
	printf("%s\n", "Hello");
	printf("He%s\n", "llo");
}
#endif

/***********************************************************/
// [5-7] 문자열의 정체와 %s의 동작
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	printf("Hello\n");
	printf("He\0llo\n");
	printf("\n문자열의 메모리 크기(?) = %d 바이트\n", "Hello");
}
#endif

/***********************************************************/
// [5-8] 연속한 문자열
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	printf("Willtek"" Corporation\n");
	printf("Willtek" " Corporation\n");
	printf("Willtek"		" Corporation\n");
	printf("%s", "Willtek"" Corporation\n");
	printf("%s", "Willtek"
		" Corporation\n");
	printf("%s", "Willtek"                 \
		" Corporation\n");
}

#endif

/***********************************************************/
// [5-9] 실수의 인쇄
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	printf("float: %f, double: %f, long double %Lf\n", 3.14f, 3.14, 3.14L);
	printf("%f, %f, %Lf, %Lf\n", 123.456, 34e12, 123.456L, 34e12L);
	printf("%E, %e, %LE, %Le\n", 123.456, 34e12, 123.456L, 34e12L);
	printf("%A, %a, %La, %LA\n", 123.456, 34e12, 123.456L, 34e12L);
	printf("%g, %G, %g, %Lg, %LG\n", 123.4560, 34e12, 334e12, 34e2L, 34e-1L);
}
#endif

/***********************************************************/
// [5-10] 실수의 유효자리수와 인쇄 자리수 지정
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	printf("float: %.16f, double: %.16f\n", 100.f / 3.f, 100. / 3.);
	printf("%.5f, %.5f, %.5f\n", 12.123, 12345.12345678, 12345.12345123);
}
#endif

/***********************************************************/
// [5-11] 포맷 지시어 flag 지정
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	// 모든 포맷에 사용 가능
	printf("좌로정렬 :%-d, 우로정렬 :%+d\n", -100, 100);
	printf("좌로정렬 :%-d, 우로정렬(양수 부호 제거) :%d\n", 100, 100);

	// x,X,o에 사용
	printf("진법 prefix 표시 :%-#x, 진법 prefix 표시 :%#o\n", 100, 100);
}
#endif

/***********************************************************/
// [5-12] 포맷 지시어 width 지정
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	// c,C,i,u,x,X,o,d,s에 사용
	printf("폭지정 :%4s, %4s\n", "abc", "abcdef"); // 넘치면 모두 인쇄
	printf("폭지정 :%4c,%4C\n", 'A', 'B');
	printf("폭지정 :%6d,%6u\n", -100, 100);

	// i,u,x,X,o,d에 사용 : 좌 정렬시는 빈자리 0으로 채우지 않음
	printf("폭지정,빈자리는 0 :%-06d, 폭지정,빈자리는 0,부호표시:%+06d\n", -100, 100);

	// f, g, G, e, E, a, A에 사용
	printf("전체 자리수 :%-12f, 전체 자리수 :%+12f\n", 12.34, 12.34);
	printf("전체 자리수 :%-12g, 전체 자리수 :%+12g\n", 12.34, 12.34);
	printf("전체 자리수 :%-16e, 전체 자리수 :%+16e\n", 12.34, 12.34);
}
#endif

/***********************************************************/
// [5-13] 포맷 지시어 precision 지정
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	// i,u,x,X,o,d : 자리수 지정하고 빈자리 0으로 =>좌정렬 무시
	printf("폭지정,빈자리는 0 :%-06d, 폭지정,빈자리는 0:%+06d\n", -100, 100);

	// i,u,x,X,o,d : precision으로 자리수 지정 => 좌정렬도 0으로 채움
	printf("정밀도지정 (빈자리 0) :%-.6d, 정밀도지정 (빈자리 0) :%+.6d\n", -100, -100);
	printf("폭과 정밀도 (빈자리 0) :%-10.6d, 폭과 정밀도 (빈자리 0) :%+10.6d\n", -100, -100);

	// f, g, G, e, E, a, A에 사용 : 전체자리수와 소수부 자리수구분 (precision option)
	printf("전체.소수부 자리수 :%-12.6f, 전체.소수부 자리수 :%+12.6f\n", 12.34, 12.34);
	printf("전체.소수부 자리수 :%-12.6g, 전체.소수부 자리수 :%+12.6g\n", 12.34, 12.34);
	printf("전체.소수부 자리수 :%-16.4e, 전체.소수부 자리수 :%+16.4e\n", 12.34, 12.34);
}
#endif

/***********************************************************/
// [5-14] 같은 값 다른 해석
/***********************************************************/

#if 0
#include<stdio.h>

void main(void)
{
	printf("%x\n", 65);
	printf("%d\n", 65);
	printf("%u\n", 65);
	printf("%c\n", 65);

	printf("%x\n", -1);
	printf("%d\n", -1);
	printf("%u\n", -1);
	printf("%c\n", -1);

	printf("%x\n", 0xffffffffu);
	printf("%d\n", 0xffffffffu);
	printf("%u\n", 0xffffffffu);
	printf("%c\n", 0xffffffffu);
}
#endif

/***********************************************************/
// [5-15] 음의 값
/***********************************************************/

#if 0
#include <stdio.h>

#define PRINTF_BINARY_PATTERN_INT8 "%c%c%c%c%c%c%c%c"
#define PRINTF_BYTE_TO_BINARY_INT8(i)    \
    (((i) & 0x80ll) ? '1' : '0'), \
    (((i) & 0x40ll) ? '1' : '0'), \
    (((i) & 0x20ll) ? '1' : '0'), \
    (((i) & 0x10ll) ? '1' : '0'), \
    (((i) & 0x08ll) ? '1' : '0'), \
    (((i) & 0x04ll) ? '1' : '0'), \
    (((i) & 0x02ll) ? '1' : '0'), \
    (((i) & 0x01ll) ? '1' : '0')

#define PRINTF_BINARY_PATTERN_INT16 \
    PRINTF_BINARY_PATTERN_INT8              PRINTF_BINARY_PATTERN_INT8
#define PRINTF_BYTE_TO_BINARY_INT16(i) \
    PRINTF_BYTE_TO_BINARY_INT8((i) >> 8),   PRINTF_BYTE_TO_BINARY_INT8(i)
#define PRINTF_BINARY_PATTERN_INT32 \
    PRINTF_BINARY_PATTERN_INT16             PRINTF_BINARY_PATTERN_INT16
#define PRINTF_BYTE_TO_BINARY_INT32(i) \
    PRINTF_BYTE_TO_BINARY_INT16((i) >> 16), PRINTF_BYTE_TO_BINARY_INT16(i)
#define PRINTF_BINARY_PATTERN_INT64    \
    PRINTF_BINARY_PATTERN_INT32             PRINTF_BINARY_PATTERN_INT32
#define PRINTF_BYTE_TO_BINARY_INT64(i) \
    PRINTF_BYTE_TO_BINARY_INT32((i) >> 32), PRINTF_BYTE_TO_BINARY_INT32(i)

//void main(void)
//{
//	printf("%d,	%d,	%d\n", -50, -037, -0x3A);
//	printf("%d,	%#o, %#x\n", -50, -037, -0x3A);
//}

void main(void){
	//printf("CONVERT HEX TO BIN " PRINTF_BINARY_PATTERN_INT8 "\n", PRINTF_BYTE_TO_BINARY_INT8(0x3A));
	//printf("CONVERT HEX TO BIN " PRINTF_BINARY_PATTERN_INT8 "\n", PRINTF_BYTE_TO_BINARY_INT8(-0x3A));
	printf(PRINTF_BINARY_PATTERN_INT32 "\n", PRINTF_BYTE_TO_BINARY_INT32(0x9583ed94));


}
#endif

/***********************************************************/
// [5-16] L-value의 개념
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int si;

	si = 100;

	100 = 50;

	printf("%d\n", si);
}
#endif

/***********************************************************/
// [5-17] 변수의 실제 위치
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	char c = 10;
	short s = 20;
	int i = 30;
	long int l = 40;

	printf("%d %d %d %d\n", c, s, i, l);
	printf("%#.8x %#.8x %#.8x %#.8x\n", &c, &s, &i, &l);
}
#endif

/***********************************************************/
// [5-18] 변수의 메모리 크기
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	char c;
	short s;
	int i;
	long int l;
	long long int ll;
	float f;
	double d;
	long double ld;

	printf("%#.8x : %d\n", &c, sizeof(c));
	printf("%#.8x : %d\n", &s, sizeof(s));
	printf("%#.8x : %d\n", &i, sizeof(i));
	printf("%#.8x : %d\n", &l, sizeof(l));
	printf("%#.8x : %d\n", &ll, sizeof(ll));
	printf("%#.8x : %d\n", &f, sizeof(f));
	printf("%#.8x : %d\n", &d, sizeof(d));
	printf("%#.8x : %d\n", &ld, sizeof(ld));

	printf("%d %d\n", sizeof(i), sizeof(int));
	printf("%d %d\n", sizeof(&i), sizeof(10));
	printf("%d %d\n", sizeof 10u, sizeof 3.14);
}
#endif

/***********************************************************/
// [5-19] 변수의 추적
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	char c = 10;
	short s = 20;
	int i = 30;
	long int l = 40;

	i = c + 5;
	l = s + 5;
	printf("%d, %d, %d, %d\n", c, s, i, l);
}
#endif

/***********************************************************/
// [5-20] 실수 변수의 선언과 초기화
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	float a = 3.14f;
	double b = 3.25e-2;
	long double c = -7.125L;

	printf("a=%e, b=%f, c=%Lg\n", a, b, c);
}
#endif

/***********************************************************/
// [5-21] 변수 타입의 중요성
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	signed int si;
	unsigned int ui;

	si = -1;
	ui = 4294967295u;

	printf("%d %u\n", si, ui);

	si = 4294967295u;
	ui = -1;

	printf("%d %u\n", si, ui);

	printf("%x %x\n", si, ui);
}
#endif

/***********************************************************/
// [5-22] 데이터 overflow
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	signed char a = 128;
	unsigned char b, c = 255;

	b = -1;
	c = c + 1;

	printf("%d %d %u\n", a, b, c);
}   
#endif

/***********************************************************/
// [5-23] 부호화
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int a = -10;
	int b = +4;
	float f = -3.14f;
	float	g = 3.14f;

	printf("a = %d, +a = %d, -a = %d, +-a = %d\n", a, +a, -a, +-a);
	printf("b = %d, +b = %d, -b = %d, -+b = %d\n", b, +b, -b, -+b);
	printf("f = %f, +f = %f, -f = %f\n", f, +f, -f);
	printf("g = %f, +g = %f, -g = %f\n", g, +g, -g);
}
#endif

/***********************************************************/
// [5-24] 단항연산자의 우선순위
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int a = -10, b = +4;

	printf("+-a = %d, -+b = %d\n", +-a, -+b);
	printf("%d\n", sizeof & a);

	printf("++a = %d, --b = %d\n", ++a, --b);
}
#endif

/***********************************************************/
// [5-25] 다른 타입간 사칙연산
/***********************************************************/

#if 0
#include<stdio.h>

void main(void)
{
	int ia, ib;
	float fa, fb;
	char ca = 'b', cb = 'B';

	ia = 5 / 3;
	ib = 5 % 3;

	fa = 5 / 3;
	fb = 5.f / 3.f;

	ca = ca + 1;
	cb = cb - 1;

	printf("int   ia = %d, ib = %d\n", ia, ib);
	printf("float fa = %f, fb = %f\n", fa, fb);
	printf("char  ca = %c, cb = %c\n", ca, cb);
}
#endif

/***********************************************************/
// [5-26] cast 연산자를 이용한 강제 형변환
/***********************************************************/

#if 0
#include<stdio.h>

void main(void)
{
	int ia, ib;
	float fa, fb;
	char ca = 'b', cb = 'B';

	ia = 5 / 3;
	ib = 5 % 3;

	//fa = (float)(5 / 3);
	fa = (float)5 / 3;
	fb = 5.f / 3.f;

	ca = (char)((int)ca + 1);
	cb = (char)((int)cb - 1);

	printf("int   ia = %d, ib = %d\n", ia, ib);
	printf("float fa = %f, fb = %f\n", fa, fb);
	printf("char  ca = %c, cb = %c\n", ca, cb);
}
#endif

/***********************************************************/
// [5-27] ++, --는 양날의 검이다
/***********************************************************/

#if 0
#include<stdio.h>

void main(void)
{
	int a = 10, b = 5;

	a = b++ + b;
	printf("%d, %d\n", a, b);

	printf("%d, %d\n", ++a, ++a);
	printf("%d, %d\n", a++, a++);
}
#endif

/***********************************************************/
// [5-28] Maximal Munch Rule
/***********************************************************/

#if 1
#include<stdio.h>

void main(void)
{
	int a = 10, b = 5;

	a = a+++++b;
	printf("%d, %d\n", a, b);
}
#endif

/***********************************************************/
// [5-29] 큰타입과 작은타입간의 대입 결과는?
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	signed char a = -128;
	unsigned char b = 255;

	signed int c;
	unsigned int d;

	c = a;	d = b;
	printf("signed int c = %d, unsigned int d = %u\n", c, d);

	c = b;	d = a;
	printf("signed int c = %d, unsigned int d = %u\n", c, d);
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
		printf("%d %d %d %d\n", a, b, c, d);
	}
}
#endif

/***********************************************************/
// [6-5] 지역변수의 유효 범위
/***********************************************************/

#if 0
#include <stdio.h>

int add(int a, int b)
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
	r = add(a, b);
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

	printf("%#p, %#p, %#p\n", &a, &b, &c);
	printf("%#.8x, %#.8x, %#.8x\n", a, b, c);
}
#endif

/***********************************************************/
// [6-9] argument 전달과 스택 운용
/***********************************************************/

#if 0
#include <stdio.h>

int add(int a, int b)
{
	int c;

	c = a + b;
	printf("%#p, %#p\n", &a, &b);

	return c;
}

void main(void)
{
	int r;

	r = add(3, 4);

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

int add(int a, int b)
{
	int c = a + b;

	return c;
}

void main(void)
{
	int a = 10;
	int b = 3;
	int c;

	c = add(add(a, b), add(a + 1, b + 1));

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
		static int c = 100;
		auto int d;
	}
}
#endif

/***********************************************************/
// [6-18] 변수 생성 시기와 visibility
/***********************************************************/

#if 0
#include <stdio.h>

int a = 100;
int b = 10 * 2;
int c = a + 1;
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
	static int s = d;

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
	int b;
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

