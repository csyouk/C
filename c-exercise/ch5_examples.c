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
	printf("폭지정 :%-4c,%4C\n", 'A', 'B');
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

#if 0
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
