// #pragma warning(disable:4996) //suppress warnings.
// #define _CRT_SECURE_NO_WARNINGS // suppress warnings.

#include <stdio.h>
#include <conio.h>

#define EX18 0
#define EX19 0
#define EX20 0
#define EX20m1 0
#define EX21 0
#define EX22 0
#define EX23 0
#define EX24 0
#define EX24m1 0
#define EX26 0
#define EX27 0

//
//
//void main(void){
//#if EX18
//	int i;
//	printf("Input : ");
//	scanf("%d", &i);
//	printf("Your choice is %d \n", i);
//#endif
//
//#if EX19
//	int i, j, k;
//	printf("input i,j,k : ");
//	scanf("%d%d%d", &i, &j, &k); 
//	// if input values are larger than the scanf container 
//	// than extra things are discarded.
//	printf("your choice is: %d %d %d \n", i, j, k);
//#endif
//
//#if EX20
//	char a, b,c;
//	printf("input : ");
//	scanf("%c %c", &a, &b);
//	printf("last : ");
//	scanf("\n%c", &c);
//	printf("your choice is : %c %c \n", a, b);
//	printf("last : %c \n", c);
//#endif
//
//#if EX20m1
//	char hello[11];
//
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%c", &hello[i]);
//	}
//	
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%c", hello[i]);
//	}
//#endif
//
//#if EX21
//	char a, b, c;
//	printf("input : ");
//	scanf("%c %c", &a, &b);
//	fflush(stdin);
//	scanf("%c", &c);
//	printf("your choice is : %c%c%c", a, b, c);
//#endif
//
//#if EX22
//	char a, b, c;
//	printf("input : ");
//	scanf("%c %c", &a, &b);
//	//fflush(stdin);
//	scanf(" %c", &c);
//	printf("your choice is : %c%c%c", a, b, c);
//#endif
//
//#if EX23
//	char a[100];
//
//	printf("input(100글자 미만 문자열 : ");
//	scanf("%s", a); // == scanf("%s", &a[0]); 배열은 자기자신이 주소이다.
//	printf("your choice is %s \n", a);
//
//	scanf("%s", &a[0]);
//	printf("your choice is %s \n", &a[0]);
//
//
//#endif
//
//#if EX24
//	char address[100], name[5];
//	scanf("%s", address);
//	scanf("%s", name);
//	printf("Address : %s \n", address);
//	printf("Name : %s \n", name);
//
//	scanf("%s", &address[0]);
//	scanf("%s", &name[0]);
//	printf("Address : %s \n", &address[0]);
//	printf("Name : %s \n", &name[0]);
//#endif
//
//#if EX24m1
//	char name[5], gender;
//	float grade;
//	int age;
//
//	printf("input order : name, gender, grade, age\n");
//	scanf("%s %c %f %d", name, &gender, &grade, &age);
//	printf("%s / %c / %.1f / %d \n", name, gender, grade, age);
//#endif
//
//#if EX26
//	char scratch[100];
//	gets(scratch);
//	printf("Scratch : %s ", scratch);
//#endif
//
//#if EX27
//	int a;
//	printf("getchar=>Input : ");
//	a = getchar();
//	printf("Your choice is : ");
//	putchar(a);
//	putchar('\n');
//	printf("getch=>Input : ");
//	a = getch();
//	putch('\n');
//	printf("Your choice is : ");
//	putch(a);
//#endif
//}
