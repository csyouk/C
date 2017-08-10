#include <stdio.h>
#include "BINOP.h"

#if 0
void main(void)
{
	int a = 0x33cc55aa;
	bddisp(a);
	// 5,6�� ��Ʈ 1�� set
	a = set_bit(a, 5);
	a = set_bit(a, 6);
	bddisp(a);

	// 5,6,7�� ��Ʈ ��¤��.
	a = invert_bit(a, 5);
	a = invert_bit(a, 6);
	a = invert_bit(a, 7);
	bddisp(a);

	// 1,3,8,10�� ��Ʈ ���ֱ�
	a = clear_bit(a, 1);
	a = clear_bit(a, 3);
	a = clear_bit(a, 8);
	a = clear_bit(a, 0xa);
	bddisp(a);

	// 4~7�� ��Ʈ 1�� set
	a = set_area(a, 0xf, 4);
	bddisp(a);

	// 4~7�� ��Ʈ 0���� clear
	a = clear_area(a, 0xf, 4);
	bddisp(a);

	// 0~7�� ��Ʈ 1�� set
	a = set_area(a, 0xff, 0);
	bddisp(a);


	// 0,1,2,3 �� ��Ʈ�� ���� 1�� set�Ǿ����� üũ
	printf("check_bit_set(a, 0) = %d\n", check_bit_set(a, 0));
	printf("check_bit_set(a, 1) = %d\n", check_bit_set(a, 1));
	printf("check_bit_set(a, 2) = %d\n", check_bit_set(a, 2));
	printf("check_bit_set(a, 3) = %d\n", check_bit_set(a, 3));
	
	// 0,2,4,6�� ��Ʈ 1�� set
	// 1,3,5,7�� ��Ʈ 0���� clear
	a = set_bit(a, 0);
	a = set_bit(a, 2);
	a = set_bit(a, 4);
	a = set_bit(a, 6);
	a = clear_bit(a, 1);
	a = clear_bit(a, 3);
	a = clear_bit(a, 5);
	a = clear_bit(a, 7);
	bddisp(a);

	// 0,1,2,3 �� ��Ʈ�� ���� 0���� clear�Ǿ����� üũ
	printf("check_bit_clear(a, 0) = %d\n", check_bit_clear(a, 0));
	printf("check_bit_clear(a, 1) = %d\n", check_bit_clear(a, 1));
	printf("check_bit_clear(a, 2) = %d\n", check_bit_clear(a, 2));
	printf("check_bit_clear(a, 3) = %d\n", check_bit_clear(a, 3));

	// 0~7�� ��Ʈ 0���� clear
	a = clear_area(a, 0xff, 0);
	bddisp(a);

	// 1,2,3�� ��Ʈ ������ ���� 3�� set
	a = write_block(a, 7, 3, 1);
	bddisp(a);

	// 1,2,3�� ��Ʈ ������ ���� 5�� set
	a = write_block(a, 7, 5, 1);
	bddisp(a);

	// 1,2,3�� ��Ʈ ������ ���� 7�� set
	a = write_block(a, 7, 7, 1);
	bddisp(a);
}
#endif


#if 0
void main(void)
{
	// 1, 5,6,7,8�� ��Ʈ 1�� set
	int a = 0x0;
	bddisp(a |= ((0xf << 5)|(1 << 1)));

	// 2, 5~7�� ��Ʈ invert
	char b = 0xff;
	bddisp_char(b ^= ((7 << 5) | (1 << 2)));

	// 3, 5~7�� ��Ʈ clear
	char c = 0xff;
	bddisp_char(c &= ~((7<<5) | (1<<3)));

	// 0�� ��Ʈ�� check
	char d = 0x33;
	//bddisp_char(d & 0x1);
	printf("%d\n", ((d >> 0) & 0x1));

	// 4�� ��Ʈ�� check
	char e = 0x33; // 0011 0011
	printf("%d\n", ((e >> 4) & 0x1));
}
#endif


#if 0
void main(void)
{
	char a = 0x0;
	// 3����Ʈ set
	bddisp_char(a | 1 << 3);

	// 2,3����Ʈ set
	bddisp_char(a | 3 << 2);

	// 4,5,6,7����Ʈ set
	bddisp_char(a | 0xf << 4);

	// 2,6,7����Ʈ set
	bddisp_char(a | (1<<2) | (3<<6));
}
#endif

#if 0
void bddisp(int a)
{
	for (int i = 31; i > -1; i--)
	{
		printf("%d", (a >> i)&0x1 );
		if (!i) break;
		if (!(i % 4)) printf(" ");
	}
	printf("\n");
}

void main(void)
{
	bddisp(0x80000000);
	bddisp(0xffffffff);
	bddisp(0x0f0f0f0f);
	bddisp(0xf0f0f0f0);
	bddisp(0xc0c0c0c0);
	bddisp(0x0c0c0c0c);
	bddisp(0xa0a0a0a0);
	bddisp(0x0a0a0a0a);
	bddisp(0xaaaaaaaa);
	bddisp(0x55555555);
}
#endif

#if 0
void main(void)
{
	int a = 0x80000000;
	printf("%x\n", a >>= 1);

}
#endif

#if 0
void main(void)
{
	unsigned char a = 0x3;
	printf("%d\n", a >> 2);
	printf("%d\n", a << 2);
	printf("%d\n", a << 2 << 2 >> 2 << 2 << 2 << 2 << 2);
}
#endif

#if 0
void main(void)
{
	unsigned int a = 0xf;
	printf("%u\n", a + ~a);
}
#endif

#if 0
void main(void)
{
	int a;
	while (1)
	{
		printf("16���� ���� �Է��ϼ��� ==> ");
		scanf("%x", &a);
		printf("0��° ��Ʈ���� clear�� ������� : %#x\n", a&(~0x1));
	}
}

#endif

#if 0
void main(void)
{
	int a;
	while (1)
	{
		printf("16���� ���� �Է��ϼ��� ==> ");
		scanf("%x", &a);
		if ((a & 0x10) == 0x10)
		{
			printf("4��° ��Ʈ�� ���� : %d\n", 1);
		}
		else
		{
			printf("4��° ��Ʈ�� ���� : %d\n", 0);
		}
	}
}

#endif

#if 0
void main(void)
{
	int a;
	while (1)
	{
		printf("16���� ���� �Է��ϼ��� ==> ");
		scanf("%x", &a);
		printf("0��° ��Ʈ�� ���� : %d\n", a & 0x1);
	}
}

#endif

#if 0
void main(void)
{
	int a;
	scanf("%x", &a);
	printf("%x\n", a);
}
#endif

#if 0
void main(void)
{
	unsigned char a = 0xcc; // 1100 1100
	//printf("%x\n", a & 0xf0);
	//printf("%x\n", a | 0xf0);
	//printf("%x\n", a ^ 0xf0);
	//printf("%x\n", ~a);

	printf("=================================\n");
	// 2�� ��Ʈ Ŭ����
	printf("%x\n", a & 0xfb); // c8
	// 1�� ��Ʈ set
	printf("%x\n", a | 0x02); // ce
	// 0�� ��Ʈ ����
	printf("%x\n", a ^ 0x01); // cd
	// 3�� ��Ʈ �� üũ
	printf("%x\n", a & 0x08); // 8

	unsigned b = 0xcc;
	b &= 0xf0; printf("%x\n", b);  // c0

	b = 0xcc;
	b |= 0xf0; printf("%x\n", b);  // fc
	
	b = 0xcc;
	b ^= 0xf0; printf("%x\n", b);  // 3c

	b = 0xcc;
	b = ~b; printf("%x\n", (unsigned char)b);     // 33
}
#endif


#if 0
void main(void)
{
	printf(PRINTF_BINARY_PATTERN_INT32 ,
		PRINTF_BYTE_TO_BINARY_INT32(0x55aa33cc));
}
#endif
