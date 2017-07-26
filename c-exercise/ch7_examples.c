

/***********************************************************/
// [7-1] �迭 ������ ��� �׼���
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
// [7-2] �迭�� ��Ҽ�
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
// [7-3] ���� ��÷
/***********************************************************/



/***********************************************************/
// [7-4] �ϱ��
/***********************************************************/



/***********************************************************/
// [7-5] �ϱ�� => 20�� �ϱ� ����
/***********************************************************/



/***********************************************************/
// [7-6] �˹㸸 ��� �ٱ���
/***********************************************************/



/***********************************************************/
// [7-7] �˹��� �ִ� 10������ ��� �ٱ���
/***********************************************************/



/***********************************************************/
// [7-8] Ű ������� ����
/***********************************************************/



/***********************************************************/
// [7-9] ��ȣȭ ���α׷�
/***********************************************************/



/***********************************************************/
// [7-10] ��ȣȭ ���α׷�
/***********************************************************/



/***********************************************************/
// [7-11] ����ó���� ���� ��ǻ��
/***********************************************************/



/***********************************************************/
// [7-12] ������ �迭 �ʱ�ȭ�� �׼���
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
// [7-13] ������ �迭�� ���� �迭�̴�
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
// [7-14] ������ �迭 transpose 
/***********************************************************/



/***********************************************************/
// [7-15] �ٸ� ����� ������ �迭 transpose 
/***********************************************************/



/***********************************************************/
// [7-16] ���� ���� �� ����
/***********************************************************/



/***********************************************************/
// [7-17] �ȶ��� ��ǻ�Ϳ� ���� ���� ��
/***********************************************************/



/***********************************************************/
// [7-18] ����� ���� ���ӱ�
/***********************************************************/



/***********************************************************/
// [8-1] ����ü ��� �׼���
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
// [8-2] ����ü�� �޸�
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
// [8-3] Alignment ������ padding
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
// [8-4] ����ü �̸��� �ǹ�
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
// [8-5] ����ü�� �⺻���̴�
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
// [8-6] �迭�� ����ü�� �ٺ����� ����
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
// [8-8] ����ü
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
// [8-9] ����� ��� ����
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
// [8-10] ����ü�� ����ü�� ����
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
// [8-11] �������� Ư¡ 
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
// [8-12] �������� ���ϴ� ������ ������ �� �ִ�
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
// [8-13] ������ ����
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
// [8-14] ����ó�� ���α׷�
/***********************************************************/



/***********************************************************/
// [9-1] ������ ������ �ʱ�ȭ
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
// [9-2] ������ ������ ���� ����
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
// [9-3] ������ ������ ��/�� ����
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
// [9-4] char ������ ������ ���� ����
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
// [9-5] Call by address�� ������ parameter
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
// [9-6] �迭 �̸��� �ǹ�
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
// [9-8] �����Ϳ� �迭
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
// [9-9] 10�� ������ ���� �迭�� ���� ���ϴ� �Լ�
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
// [9-10] �Լ� parameter�� �ִ� �迭�� �ǹ�
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
// [9-11] �Լ��� �Ѿ�� �迭�� ��� ��
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
// [9-12] �Լ����� �迭�� ��������
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
// [9-13] ���ڿ��� ������ ���ڵ��� �����̴�
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
// [9-14] ���ڿ��� �Ѱ� �޴� �Լ�
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
// [9-15] ����� ���Ǳ�
/***********************************************************/

#if 0
#include <stdio.h>
#include <conio.h>

Vending_Machine(int num)
{
	static char drink[4][10] = { "�ݶ�", "���̴�", "ȯŸ", "���ɸ�" };

	return drink[num];
}

void main(void)
{


}
#endif

/***********************************************************/
// [9-16] *p++ ������ ����
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
// [9-17] ���ڿ� ����
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
// [9-18] ���ڿ� ���� ����
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
// [9-19] ���ڿ� ����
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
// [9-20] ���ڿ� ��
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
	static char drink[4][10] = { "�ݶ�", "���̴�", "ȯŸ", "���ɸ�" };

	return drink[num];
}

char * Vending_Machine2(int num)
{
	static char * drink[4] = { "�ݶ�", "���̴�", "ȯŸ", "���ɸ�" };

	return drink[num];
}

void main(void)
{
	int num;

	for (;;)
	{
		printf("���� ���� : 1. �ݶ� 2.���̴� 3.ȯŸ 4.���ɸ�(19���̻�) 0.����\n");
		num = getch() - '1';
		fflush(stdin);

		if (num == -1) return;

		if ((unsigned int)num >= 4)
		{
			printf("�峭 ġ����!\n");
			continue;
		}

		printf("������ %s �� ���Խ��ϴ�\n", Vending_Machine1(num));
		printf("������ %s �� �� ���Խ��ϴ�\n", Vending_Machine2(num));
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
// [9-23] malloc ��� ��
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
// [9-24] sizeof, ���� �ּ��� Ȯ��, free �Լ� ���
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
// [9-25] malloc�� calloc�� ����
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
// [9-26] realloc�� ����
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
// [9-27] �����̿� ���ڳ� ����
/***********************************************************/



/***********************************************************/
// [9-28] �����Ͱ� �ٶ󺸴� �迭 (�迭 ������)
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int a[4] = { 10, 20, 30, 40 };
	int(*p)[4] = &a;

	printf("a[2] = %d\n", a[2]);

	// �ڵ� �ۼ�

	printf("a[2] = %d\n", a[2]);
}
#endif

/***********************************************************/
// [9-29] ����ü ����� �迭�� �����͵� �����ϴ�
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
// [9-30] ������ Ÿ���� ����� Ÿ��
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
// [9-31] ���ڿ��� �����ϰų� �޸𸮸� �����ϰų�
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
// [9-32] ����ü �迭
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
// [9-33] ����ü ������
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
// [9-34] ����ü �����͸� �������� ���ϴ� ������
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
// [9-35] ����ü ���� ����
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
	printf("%s: %d��\n", math.name, math.score);
}
#endif

/***********************************************************/
// [9-36] ����ü ������ ����
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
	// �ڵ� �ۼ�
}

void main(void)
{
	struct st math = { 1, "KIM", 10 };

	cheat(&math);
	printf("%s: %d��\n", math.name, math.score);
}
#endif

/***********************************************************/
// [9-37] ����ü �迭 ����
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
	// �ڵ� �ۼ�
}

void cheat2(struct st * p)
{
	// �ڵ� �ۼ�
}

void main(void)
{
	struct st math[4] = { { 1, "LEW", 10 }, { 2, "KIM", 20 }, { 3, "SONG", 30 }, { 4, "MOON", 40 } };

	cheat1(&math[1]);
	printf("%s: %d��\n", math[1].name, math[1].score);

	cheat2(math);
	printf("%s: %d��\n", math[1].name, math[1].score);
}
#endif


/***********************************************************/
// [9-38] ����ü ���� ����ü
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
// [9-39] �ڱ� ���� ����ü
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
// [9-40] ����ü�� ������, �迭
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
// [9-41] ����ü ���� ����
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

	printf("%d\n", );		// x[0]�� id 2 �μ�
	printf("%s\n", );			// x[0]�� Lew �μ�
	printf("%d\n", );		// p�� id 3 �μ�
	printf("%s\n", );			// p�� Ki �μ�
}
#endif

/***********************************************************/
// [10-1] ��Ʈ ������ 
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
// [10-2] ��Ʈ ���� ������ 
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
// [10-3] ��Ʈ ���� ���� 
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
// [10-4] ~�����ڸ� �̿��� ��Ʈ clear
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
// [10-5] ��� ��Ʈ�� 1�� ��� ��Ʈ�� 0���� 
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int a, b;

	for (;;)
	{
		printf("16���� ���� �Է��Ͻÿ� (0x1234ABCD ����) : ");
		scanf("%X", &a);
		fflush(stdin);

		// Code ����

		printf("a = %#.8X\n", a);
		printf("b = %#.8X\n", b);

	}
}
#endif

/***********************************************************/
// [10-6] �Էµ� ���� 0 ��Ʈ�� 0���� 1���� ���ߴ� �ڵ�
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int a;

	for (;;)
	{
		printf("16���� ���� �Է��Ͻÿ� (0x? ����) : ");
		scanf("%X", &a);
		fflush(stdin);

		// Code ����

	}
}
#endif

/***********************************************************/
// [10-7] �Էµ� ���� 4�� ��Ʈ�� 0���� 1���� ���ߴ� �ڵ�
/***********************************************************/



/***********************************************************/
// [10-8] �·�, ��� shift ����
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
// [10-9] ���� ���� shift
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
// [10-10] �Էµ� ���� Ư���� ��Ʈ�� 0���� 1���� ���ߴ� �ڵ�
/***********************************************************/



/***********************************************************/
// [10-11] bdisp �Լ�
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
// [10-12] ��Ʈ Set ����
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
// [10-13] ��Ʈ invert ����
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
// [10-14] ��Ʈ clear ����
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
// [10-15] ��Ʈ set �Լ� 
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
// [10-16] ��Ʈ invert �Լ� 
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
// [10-17] ��Ʈ clear �Լ� 
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
// [10-18] ������ ���� ��Ʈ set �Լ� 
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
// [10-19] ������ ���� ��Ʈ invert �Լ�
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
// [10-20] ������ ���� ��Ʈ clear �Լ�
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
// [10-21] ���ϴ� ��Ʈ�� 1(set)���� �Ǵ��� �ִ� �Լ�
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
// [10-22] ���ϴ� ��Ʈ�� 0(clear)���� �Ǵ��� �ִ� �Լ�
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
// [10-23] write_block �Լ�
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
// [11-1] #define�� ������
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
// [11-2] #define ���� ����
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
// [11-3] #define�� ġȯ�ϴ� �͵�
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
// [11-4] macro �ۼ�
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
// [11-5] macro�� �Լ��� �ƴϴ�
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
// [11-6] macro�� ����
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
// [11-7] ���� ���忡 ��ġ macro ����
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
// [11-8] #, ## ������
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
// [11-9] �迭�� ��Ҽ��� ���ϴ� ��ũ�� ARR_SIZE(x) 
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
// [11-10] typedef Ȱ��
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
// [11-11] typedef�� �ߺ� ���
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
// [11-12] ����ü�� typedef
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
// [11-13] ����ü�� typedef
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
// [11-14] #ifdef, #ifndef ���Ǻ� ������
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
// [11-15] ���Ǻ� �������� ���
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
// [11-17] #define�� �� ����
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
// [11-18]  #if ���Ǻ� ������
/***********************************************************/

#if 0
#include <stdio.h>

#define SOUND_DEVICE_TYPE	0

void main(void)
{
#if !SOUND_DEVICE_TYPE
	printf("���� ��ġ�� ������� ����\n");

#elif SOUND_DEVICE_TYPE == 1
	printf("STEREO ��� ��ġ ���\n");

#else
	printf("CODE 15 : Unknown Device!\n");

#endif
	printf("���� ��� = %d\n", SOUND_DEVICE_TYPE);
}
#endif

/***********************************************************/
// [11-19] #if�� �Ұ����� �͵�
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int a = 1;

#if !a
	printf("���� ��ġ�� ������� ����\n");

#elif a == 1
	printf("STEREO ��� ��ġ ���\n");

#else
	printf("CODE 15 : Unknown Device!\n");

#endif

	printf("���� ��� = %d\n", a);
}
#endif

/***********************************************************/
// [11-20] defined ������
/***********************************************************/

#if 0
#include <stdio.h>

#define SOUND_DEVICE_TYPE	0

void main(void)
{
#if SOUND_DEVICE_TYPE == 1
	printf("���� ��ġ�� ������� ����\n");
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
	printf("���� ��ġ�� ������� ����\n");

#else
#error CODE 15: Unknown Device!

#endif
	printf("���� ��� = %d\n", SOUND_DEVICE_TYPE);
}
#endif

/***********************************************************/
// [11-22] #pragma ��� ��
/***********************************************************/

#if 0
#include <stdio.h>

#pragma warning (disable : 4101 4700)
//#pragma warning (once : 4552)
//#pragma warning (error : 4700)

void main(void)
{
	unsigned int a, b; //(C4101 : b �̻��)

	a + 1;		//(C4552 : "+" has no effect)
	a >> 4;		//(C4552 : ">>" has no effect)
	a = a;		//(C4700 : use not initialized a)
}
#endif

/***********************************************************/
// [11-23] �ٰ��� �ֻ��� �����
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

	// ������ ������ ��� �ǳ�?

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

// char str[] ������ char * str�� ��ġ�� ������� ���ô�

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
// [Epilogue-13] ������ ������ ������ ���� ���ų� �����Ѵ�
/***********************************************************/

#if 0

#include <stdio.h>

void main(void)
{
	FILE * file;

	file = fopen("..\\test_dir.txt", "rt");
	if (file == NULL)
	{
		printf("..\\test_dir.txt ���� ���� ����!!\n");
		return;
	}
	else
	{
		printf("..\\test_dir.txt ���� ���� ����!!\n");
		fclose(file);
	}

	file = fopen("test1.txt", "rt");
	if (file == NULL) printf("test1.txt ���� ���� ����!!\n");
	else printf("test1.txt ���� ���� ����!!\n");

	file = fopen("test1.txt", "wt");
	if (file == NULL)
	{
		printf("test1.txt ���� ���� ����!!\n");
		return;
	}
	else
	{
		printf("test1.txt ���� ���� ����!!\n");
		fclose(file);
	}
}

#endif

/***********************************************************/
// [Epilogue-14] ����� �� �� ������ �ݴµ� ����Ѵ�
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
		printf("���� ���� ����!!\n");
		return;
	}
	else printf("���� ���� ����!!\n");

	r = fclose(file);
	if (!r) printf("���� �ݱ� ���� r = %d\n", r);
	else printf("���� �ݱ� ���� r = %d\n", r);

	r = fclose(file);
	if (!r) printf("���� �ݱ� ���� r = %d\n", r);
	else printf("���� �ݱ� ���� r = %d\n", r);
}

#endif

/***********************************************************/
// [Epilogue-15] ���Ͽ��� ���ڿ��� �о� �´�
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
		printf("���� ���� ����!!\n");
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
// [Epilogue-16] ���Ͽ� ���ڿ��� ��� �Ѵ�
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
		printf("���� ���� ����!!\n");
		return;
	}

	rtn = fputs(buf, file);
	if (rtn != -1) printf("���� ���� ����!!\n");
	else printf("���� ���� ����!!\n");

	fclose(file);
}

#endif

/***********************************************************/
// [Epilogue-17] ���Ͽ��� �� ���ڸ� �о� �´�
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
		printf("���� ���� ����!!\n");
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
// [Epilogue-18] ���Ͽ� �� ���ڸ� ��� �Ѵ�
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
		printf("���� ���� ����!!\n");
		return;
	}

	for (i = 0; i<sizeof(buf) / sizeof(buf[0]); i++)
	{
		ch = fputc(buf[i], file);
		if (ch != buf[i]) printf("���� ���� ����!!\n");
	}

	printf("���� ���� ����!!\n");

	fclose(file);
}

#endif

/***********************************************************/
// [Epilogue-19] ���Ͽ��� ���ϴ� ũ�⾿ ���ϴ� ������ŭ �о�´�
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
		printf("���� ���� ����!!\n");
		return;
	}

	rtn = fread(buf, sizeof(buf[0]), sizeof(buf) / sizeof(buf[0]), file);
	printf("���� ������ ���� = %d\n", rtn);

	for (i = 0; i<rtn; i++)
	{
		printf("%d ", buf[i]);
	}
	printf("\n");

	fclose(file);
}

#endif

/***********************************************************/
// [Epilogue-20] ���Ͽ� ���ϴ� ũ�⾿ ���ϴ� ������ŭ ����Ѵ�
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
		printf("���� ���� ����!!\n");
		return;
	}

	rtn = fwrite(buf, sizeof(buf[0]), sizeof(buf) / sizeof(buf[0]), file);
	if (rtn != sizeof(buf) / sizeof(buf[0])) printf("���� ���� ����!!\n");

	printf("���� ���� ����!!\n");

	fclose(file);
}

#endif

/***********************************************************/
// [Epilogue-21] ���ϴ� ������ �Է��� ���Ϸκ��� �Է� �޴´�
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
		printf("���� ���� ����!!\n");
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
// [Epilogue-22] ���ϴ� ������ ����� ���Ͽ� ��� �Ѵ�
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
		printf("���� ���� ����!!\n");
		return;
	}

	rtn = fprintf(file, "%d %s %f\n", 123, "SCSA", 3.14);
	printf("��³��� : %d %s %f ����� ����Ʈ �� = %d\n", 123, "SCSA", 3.14, rtn);

	fclose(file);

	file = fopen("test_fprintf.txt", "rt");
	if (file == NULL)
	{
		printf("���� ���� ����!!\n");
		return;
	}

	rtn = fscanf(file, "%d %s %f", &d, c, &f);
	printf("�������� : %d %s %f ���� ������ �� = %d\n", d, c, f, rtn);

	fclose(file);
}

#endif

/***********************************************************/
// [Epilogue-23] ������ ó������ �ٽ� �׼��� �ϰ��Ѵ�
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
		printf("���� ���� ����!!\n");
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
// [Epilogue-24] ������ �׼��� ��ġ(FP)�� �� ����� ���Ѵ�
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
		printf("���� ���� ����!!\n");
		return;
	}

	fseek(file, 17, SEEK_SET);

	rtn = fgets(buf, sizeof(buf), file);
	if (rtn != NULL) printf(buf);

	fclose(file);
}

#endif

/***********************************************************/
// [Epilogue-25] ������ ���� �׼��� ��ġ(FP)�� �˷��ش�
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
		printf("���� ���� ����!!\n");
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
// [Epilogue-26] ������ ������ �о����� �˷��ش�
/***********************************************************/

#if 0

#include <stdio.h>

void main(void)
{
	FILE * file;

	file = fopen("test.txt", "rt");
	if (file == NULL)
	{
		printf("���� ���� ����!!\n");
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
// [Epilogue-27] ������ �ĺ���(�ڵ�)�� �˷��ش�
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
		printf("���� ���� ����!!\n");
		return;
	}

	handle = fileno(file);

	printf("%d\n", handle);

	fclose(file);
}

#endif

/***********************************************************/
// [Epilogue-28] ������ ũ�⸦ �˷��ش�
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
		printf("���� ���� ����!!\n");
		return;
	}

	size = filelength(fileno(file));

	printf("%d\n", size);

	fclose(file);
}

#endif

/***********************************************************/
// [Epilogue-29] ������ �����ϴ� ���α׷��� �ۼ��϶�
/***********************************************************/

#if 0

#include <stdio.h>
#include <stdlib.h>
#include <io.h>

void main(void)
{


}

#endif

