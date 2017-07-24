#include <stdio.h>
// #include <Turboc.h>

#define DEC2HEX 0
#define DECEX260 0


char Dec2Hex2Char(int);

#if DEC2HEX
void main(void)
{

#if DECEX260
	int input;

	for (;;)
	{
		printf("0~255사이의 수를 입력. (끝낼 때 -1) : ");
		scanf("%d", &input);
		if (input == -1)
		{
			break;
		}

		printf("입력한 수의 16진 표기 = %c%c\n",
			Dec2Hex2Char(input >> 4), Dec2Hex2Char(input & 0xf));
	}
#endif
}


char Dec2Hex2Char(int d)
{
	if (d >= 16)
	{
		return '?';
	}
	return d + '0' + (d > 9) * 7;
}

#endif