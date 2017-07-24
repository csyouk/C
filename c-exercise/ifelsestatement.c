#include <stdio.h>

#define IFELSE_STATEMENT 0
#define IFEL_EX1 0
#define IFEL_EX4 0
#define IFEL_EX7 0
#define IFEL_EX10 0
#define IFEL_EX11 0
#define IFEL_EX12 0
#define IFEL_EX13 0
#define IFEL_EX15 0
#define IFEL_EX16 0
#define IFEL_EX17 0
#define IFEL_EX18 0
#define IFEL_EX19 0
#define IFEL_EX20 0
#define IFEL_EX21 0
#define IFEL_EX23 0
#define IFEL_EX24 0
#define IFEL_EX25 0
#define IFEL_EX25m1 0
#define IFEL_EX26 0
#define IFEL_EX27 0
#define IFEL_EX28 0
#define IFEL_EX29 0
#define IFEL_EX32 0
#define IFEL_EX33 0
#define IFEL_EX34 1

int compare(int);
int ifeladd(int a, int b);

int mul_3_5(int n);
int range4_10(int n);
int isalphabet(char c);
int isinrange_f_z(int c);
int conversion(char c);
int nearest(float);
char grade(int);


#if IFELSE_STATEMENT
void main(void)
{
#if IFEL_EX1
	int a = 10;;;;
	int b = 20;

	printf("%d\n", a);;;;;
	;;;;;
	printf("%d\n", b);;;;;
#endif

#if IFEL_EX4
	if ( 1)  printf("True\n");
	if ( 0)  printf("False\n");
	if (-1)  printf("True\n");
	if ( 0); printf("False\n");
	
#endif

#if IFEL_EX7
	
	printf("compare : %d\n", compare(33));
	printf("! symbol : %d\n", !33); // => 값을 반전 시켜버린다. 즉, 0이 되어버림. 
	if (3.14 == 3.14f){
		printf("check equal 3.14 == 3.14f true");
	}
	else {
		printf("check equal 3.14 == 3.14f false");
	}

	if (3.14 > 3.14f){
		printf("compare 3.14 > 3.14f true \n");
	}
	else {
		printf("compare 3.14 > 3.14f false \n");
	}

	if (1.625 > 1.625f){
		printf("compare 1.625 > 1.625f true \n");
	} else {
		printf("compare 1.625 > 1.625f false \n");
	}


#endif

#if IFEL_EX10
	int a = 3;
	if (!1)  printf("!1 : True \n");
	if (!0)  printf("!0 : True \n");
	if (!(a == 3))  printf("!(a==3) : True \n");
	if (!(a == 0))  printf("!(a==0) : True \n");
	if (!(a+3))  printf("!(a+3) : True \n");
#endif

#if IFEL_EX11
	int a = 4; // or assgin 3
	printf("%d\n", !(a % 3));
#endif


#if IFEL_EX12
	int a = 0;
	if (a = 3) printf("True\n");
	else printf("False\n");
#endif

#if IFEL_EX13
	int a = 3;
	if (a > 3) printf("True\n"); a++;
	if (a == 4) printf("Bingo\n");
#endif

#if IFEL_EX15
	int a, b, c;
	printf("EX15 : %d\n", ifeladd(3, 4, 5));
	printf("EX15 : %d\n", ifeladd(3, (4, 5)));

	a = 3, 4;
	printf("EX15 : %d\n", ifeladd(a, 10));
	a = (50, 100);
	printf("EX15 : %d\n", ifeladd(a, 200));

	a = (b = 3, c = b + 4, c + 1);
	printf("a b c : %d %d %d \n", a, b, c);
	a = b = 3, c = b + 4, c + 1;
	printf("a b c: %d %d %d\n", a, b, c);
#endif

#if IFEL_EX16
	printf("is multiple of 3 or 5? %d \n", mul_3_5(15));
	printf("is range between 4 and 10? %d \n", range4_10(15));
	printf("is range between 4 and 10? %d \n", range4_10(4));
	printf("is range between 4 and 10? %d \n", range4_10(6));
	printf("is alphabet ? %d \n", isalphabet('a'));
	printf("is alphabet ? %d \n", isalphabet('A'));
	printf("is alphabet ? %d \n", isalphabet('z'));
	printf("is alphabet ? %d \n", isalphabet('Z'));
	printf("is alphabet ? %d \n", isalphabet('1'));

#endif

#if IFEL_EX19
	int a = 4, b = 0;
	if (a == 5 && b = 3) b++;
	printf("ex19 : %d\n", b);
#endif

#if IFEL_EX21
	int a = 4, b = 0;
	if ((a < 5) || (b = 3)) b++;
	printf("ex21 : %d\n", b);
#endif

#if IFEL_EX23
	int a = 0;
	a ? printf("True\n") : printf("False\n");
#endif

#if IFEL_EX24
	int a = 3;
	a ? (printf("True\n"), a++) : (printf("False\n"), a--);
	printf("value of a is : %d\n", a);
#endif

#if IFEL_EX25
	int a = 10, b = 20;
	(a == 20) ? (b < 0) ? (a = 1) : (a = 0) : (b = 30);
	printf("a = %d, b = %d\n", a, b);
#endif

#if IFEL_EX25m1
	int a = 3;
	compare(3);
	//(3)compare;  // error
	a++;
	++a;
	++a, a++, ++a, ++a, printf("%d\n", a), a++;
#endif

#if IFEL_EX26
	//int c;
	//scanf("%c", &c);
	//printf("ex26 : %d\n", isinrange_f_z(c));
	printf("ex26 : %d\n", isinrange_f_z('f'));
	printf("ex26 : %d\n", isinrange_f_z('g'));
	printf("ex26 : %d\n", isinrange_f_z('e'));
#endif

#if IFEL_EX27
	//int d;
	//scanf("%c", &d);
	//printf("ex27 : %c\n", conversion(d));
	printf("ex27 : %c\n", conversion('a'));
	printf("ex27 : %c\n", conversion('A'));
#endif

#if IFEL_EX28
	//int e;
	//scanf("%c", &e);
	//printf("ex28 : %c\n", blind_lew(e));
	printf("ex28 : %c\n", blind_lew('l'));
	printf("ex28 : %c\n", blind_lew('a'));
#endif

#if IFEL_EX29
	//float f;
	//scanf("%f", &f);
	printf("ex29 : %d\n", nearest(3.46));
	printf("ex29 : %d\n", nearest(4.1));
	printf("ex29 : %d\n", nearest(-3.4));
	printf("ex29 : %d\n", nearest(-3.64));
#endif

#if IFEL_EX32
	int lucky = 1;
	switch (lucky)
	{
	case 6:
		printf("만년필\n");
		break;
	case 7:
		printf("현금 100만원\n");
		break;
	case 66:
		printf("라이언 인형\n");
		break;
	default:
		printf("꽝\n");
		break;
	}
#endif

#if IFEL_EX33

	int money = 300;
	switch (money)
	{
	case 300:
		printf("바닷가재 1마리\n");
	case 200:
		printf("고등어 1마리\n");
	case 100:
		printf("꽁치 1마리\n");
		break;
	default:
		printf("안팔아\n");
		break;
	}
#endif


#if IFEL_EX34

	printf("your grade is : %c\n", grade(99));
	printf("your grade is : %c\n", grade(90));
	printf("your grade is : %c\n", grade(89));
	printf("your grade is : %c\n", grade(79));
	printf("your grade is : %c\n", grade(71));
	printf("your grade is : %c\n", grade(70));
	printf("your grade is : %c\n", grade(69));
	printf("your grade is : %c\n", grade(55));
	printf("your grade is : %c\n", grade(44));
	printf("your grade is : %c\n", grade(101));
	printf("your grade is : %c\n", grade(100));
	printf("your grade is : %c\n", grade(-1));
#endif


}


char grade(int score)
{
	if (score > 100 || score < 0) return 'X';
	switch ((score - 1) / 10)
	{
	case 9:
		return'A';
	case 8:
		return 'B';
	case 7:
		return 'C';
	case 6:
		return 'D';
	default:
		return 'F';
	}
}

int nearest(float i)
{
	if (i > 0.0f) return i + 0.5f;
	if (i < 0.0f) return i - 0.5f;
	return 0;
}

int blind_lew(char c)
{
	if (c == 'L' || c == 'E' || c == 'W')
	{
		return '*';
	}
	return c;
}


int conversion(char c)
{
	if ('A' - 1 < c && c < 'Z' + 1)
	{
		return c - 'A' + 'a';
	}
	if ('a' - 1 < c && c < 'z' + 1)
	{
		return c - 'a' + 'A';
	}
	return 0;
}

int isinrange_f_z(int c)
{
	if ('f' - 1 < c && c < 'z' + 1)
	{
		return 1;
	}
	return 0;
}

int compare(int num)
{
	if (!(num % 5)) return 5;
	if (!(num % 3)) return 3;
	return 0;
}

int ifeladd(int a, int b)
{
	return a + b;
}

int mul_3_5(int n)
{
	if (!(n % 3) || !(n % 5))
	{
		return 1;
	}
	return 0;
}

int range4_10(int n)
{
	if (3 < n && n < 11)
	{
		return 1; 
	}
	return 0;
}

int isalphabet(char c)
{
	if ('A' - 1 < c && c < 'Z' + 1)
	{
		return 1;
	}
	if ('a' - 1 < c && c < 'z' + 1)
	{
		return 1;
	}
	return 0;
}

#endif