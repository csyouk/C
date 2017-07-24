#include <stdio.h>

#define OPERATOR_ENABLE 0

#if OPERATOR_ENABLE

#define EX29 0
#define EX30 0
#define EX31 0
#define EX32 0
#define EX33 0
#define EX34 0
#define EX36 0
#define EX36m1 0
#define EX37 0
#define EX38 1

void main(void){
#if EX29
	int a = 0x12345678;
	unsigned char b;
	
	b = a;
	printf("a = %#.8x, b = %#.8x\n", a, b);
	
	a = b;
	printf("a = %#.8x, b = %#.8x\n", a, b);
#endif

#if EX30
	int a = 10; int b = 20; int c;
	c = + a - - b;
	printf("c = %d\n", c); // 30

	c = sizeof(a) + -b;
	printf("c = %d\n", c); // -16

	printf("%d \n", sizeof(&a));
	printf("%d \n", sizeof & a);
	printf("%#.p \n", &a);
#endif

#if EX31
	int a = 10;
	int b = 20;
	int c1, c2, c3, c4;

	c1 = a + b * 2; // 50
	c2 = a * b / 2 % 4; // 0
	c3 = -a * 2 + b / 4; // -15
	c4 = a * ((2 + -b) / 4); // -40

	printf("%d %d %d %d\n", c1, c2, c3, c4);

#endif

#if EX32
	int a = 20, b, c, d;
	a = b = c = d = 10;
	printf("%d %d %d %d\n", a, b, c, d);
#endif

#if EX33
	int a = 2345; int a4, a3, a2, a1;
#endif

#if EX34
	int a = 20, b = 4;
	//a += 3;            printf("%d\n", a);  // 23
	//a -= b;            printf("%d\n", a);  // 19
	//a *= b + 2;        printf("%d\n", a);  // 114
	//a /= a - b + 1;    printf("%d\n", a);  // 1
	//a %= b -= 3;       printf("%d\n", a);  // 0

	a = a + 3;            printf("%d\n", a);  // 23
	a = a - b;            printf("%d\n", a);  // 19
	a = a * (b + 2);      printf("%d\n", a);  // 114
	a = a / (a - b + 1);  printf("%d\n", a);  // 1
	a = a % (b = b - 3);  printf("%d\n", a);  // 0
#endif


#if EX36
	int a = 10, b;
	float f = 3.14f;

	a++;
	f++;
	printf("%d, %f\n", a, f); // 11, 4.140000

	++a;
	++f;
	printf("%d, %f\n", a, f); // 12, 5.140000

	b = ++a;
	printf("a=%d, b=%d\n", a, b); // 13, 13

	b = a++;
	printf("a=%d, b=%d\n", a, b); // 14, 13

	b = ++a + b;
	printf("a=%d, b=%d\n", a, b); // 15, 28

	b = a++ + b;
	printf("a=%d, b=%d\n", a, b); // 16, 43

#endif

#if EX36m1
	int a = 1;
	++a;
	a++;
	printf("%d\n", a);

	//int b = 2;
	//++(++b);
	//printf("%d\n", b);
#endif

#if EX37
	char hexa[5];
	printf("16���� �Է� : ");
	scanf("%s", hexa);

	printf("0x1000�ڸ�=%c, 0x100�ڸ�=%c, 0x10�ڸ�=%c, 0x1�ڸ�=%c\n", hexa[0], hexa[1], hexa[2], hexa[3]);
#endif

#if EX38
	char brand[50];
	char note;
	float window_size;
	int price;
	printf("�귣�� : ");
	gets(brand);
	printf("��Ʈ ��� ���� : ");
	note = getchar();
	printf("ȭ��ũ��(��ġ) : ");
	scanf("%f", &window_size);
	printf("���� : ");
	scanf("%d", &price);
	printf("%s, ��Ʈ��� %c, %.1f��ġ, %d��\n", brand, note, window_size, price);
#endif
}

#endif