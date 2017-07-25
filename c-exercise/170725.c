#include <stdio.h>
// ex1
//int a = 10, b;
////int c = a;
//char d = 'A' + 1;
//b = 20;
//
//void main(void){
//	int e = a;
//	//int f = h;
//	int g;
//	//g = g + 1;
//	int h = g;
//}


// ex2
//int a, b = 10;
//void main(void){
//	int a = 20;
//	printf("%d, %d\n", a, b);
//
//	{
//		int b = a;
//		printf("%d, %d\n", a, b);
//	}
//
//	printf("%d, %d", a, b);
//}

// ex3
//int a = 10, b;
//int f1(int a){
//	int b = 20;
//	return a + b;
//}
//
//int f2(int b){
//	return f1(a) + f1(b);
//}
//
//void main(void){
//	int a = 30;
//	printf("%d\n", f1(a += 10));
//	printf("%d\n", f2(a));
//}

// ex4
//int b;
//static int c = 10;
//void main(void){
//	int a = b;
//	extern int b;
//	static int c = 20;
//	static int d = a;
//}

// ex5
//int a = 10;

// ex6
//int a;
//int func(int i){
//	static int a = 10;
//	a += i;
//	return a;
//}
//void main(void){
//	int i;
//	for (int i = 0; i < 5; i++)
//	{
//		a += func(i);
//	}
//	printf("%d\n", a);
//}
//
//extern int f1(void);
//extern int f2(int a);
//int a = 1; int b = 2;
//extern int c;
//void main(void){
//	int a;
//	a = f1();
//	b = f2(c);
//	c += a + b;
//	printf("%d, %d, %d\n", a, b, c);
//}