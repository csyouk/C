#include <stdio.h>
#include "BINOP.h"

#if 0
void main(void)
{
	int a = 0x33cc55aa;
	bddisp(a);
	// 5,6번 비트 1로 set
	a = set_bit(a, 5);
	a = set_bit(a, 6);
	bddisp(a);

	// 5,6,7번 비트 뒤짚기.
	a = invert_bit(a, 5);
	a = invert_bit(a, 6);
	a = invert_bit(a, 7);
	bddisp(a);

	// 1,3,8,10번 비트 엎애기
	a = clear_bit(a, 1);
	a = clear_bit(a, 3);
	a = clear_bit(a, 8);
	a = clear_bit(a, 0xa);
	bddisp(a);

	// 4~7번 비트 1로 set
	a = set_area(a, 0xf, 4);
	bddisp(a);

	// 4~7번 비트 0으로 clear
	a = clear_area(a, 0xf, 4);
	bddisp(a);

	// 0~7번 비트 1로 set
	a = set_area(a, 0xff, 0);
	bddisp(a);


	// 0,1,2,3 번 비트가 각각 1로 set되었는지 체크
	printf("check_bit_set(a, 0) = %d\n", check_bit_set(a, 0));
	printf("check_bit_set(a, 1) = %d\n", check_bit_set(a, 1));
	printf("check_bit_set(a, 2) = %d\n", check_bit_set(a, 2));
	printf("check_bit_set(a, 3) = %d\n", check_bit_set(a, 3));
	
	// 0,2,4,6번 비트 1로 set
	// 1,3,5,7번 비트 0으로 clear
	a = set_bit(a, 0);
	a = set_bit(a, 2);
	a = set_bit(a, 4);
	a = set_bit(a, 6);
	a = clear_bit(a, 1);
	a = clear_bit(a, 3);
	a = clear_bit(a, 5);
	a = clear_bit(a, 7);
	bddisp(a);

	// 0,1,2,3 번 비트가 각각 0으로 clear되었는지 체크
	printf("check_bit_clear(a, 0) = %d\n", check_bit_clear(a, 0));
	printf("check_bit_clear(a, 1) = %d\n", check_bit_clear(a, 1));
	printf("check_bit_clear(a, 2) = %d\n", check_bit_clear(a, 2));
	printf("check_bit_clear(a, 3) = %d\n", check_bit_clear(a, 3));

	// 0~7번 비트 0으로 clear
	a = clear_area(a, 0xff, 0);
	bddisp(a);

	// 1,2,3번 비트 영역에 값을 3로 set
	a = write_block(a, 7, 3, 1);
	bddisp(a);

	// 1,2,3번 비트 영역에 값을 5로 set
	a = write_block(a, 7, 5, 1);
	bddisp(a);

	// 1,2,3번 비트 영역에 값을 7로 set
	a = write_block(a, 7, 7, 1);
	bddisp(a);
}
#endif


#if 0
void main(void)
{
	// 1, 5,6,7,8번 비트 1로 set
	int a = 0x0;
	bddisp(a |= ((0xf << 5)|(1 << 1)));

	// 2, 5~7번 비트 invert
	char b = 0xff;
	bddisp_char(b ^= ((7 << 5) | (1 << 2)));

	// 3, 5~7번 비트 clear
	char c = 0xff;
	bddisp_char(c &= ~((7<<5) | (1<<3)));

	// 0번 비트값 check
	char d = 0x33;
	//bddisp_char(d & 0x1);
	printf("%d\n", ((d >> 0) & 0x1));

	// 4번 비트값 check
	char e = 0x33; // 0011 0011
	printf("%d\n", ((e >> 4) & 0x1));
}
#endif


#if 0
void main(void)
{
	char a = 0x0;
	// 3번비트 set
	bddisp_char(a | 1 << 3);

	// 2,3번비트 set
	bddisp_char(a | 3 << 2);

	// 4,5,6,7번비트 set
	bddisp_char(a | 0xf << 4);

	// 2,6,7번비트 set
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
		printf("16진수 값을 입력하세요 ==> ");
		scanf("%x", &a);
		printf("0번째 비트값이 clear된 결과값은 : %#x\n", a&(~0x1));
	}
}

#endif

#if 0
void main(void)
{
	int a;
	while (1)
	{
		printf("16진수 값을 입력하세요 ==> ");
		scanf("%x", &a);
		if ((a & 0x10) == 0x10)
		{
			printf("4번째 비트의 값은 : %d\n", 1);
		}
		else
		{
			printf("4번째 비트의 값은 : %d\n", 0);
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
		printf("16진수 값을 입력하세요 ==> ");
		scanf("%x", &a);
		printf("0번째 비트의 값은 : %d\n", a & 0x1);
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
	// 2번 비트 클리어
	printf("%x\n", a & 0xfb); // c8
	// 1번 비트 set
	printf("%x\n", a | 0x02); // ce
	// 0번 비트 반전
	printf("%x\n", a ^ 0x01); // cd
	// 3번 비트 값 체크
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
