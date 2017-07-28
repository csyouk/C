#include <stdio.h>

union uni
{
	int a;
	char b[4];
};

int Change_Endian(int data);

void main(void){
	int a = 0x12345678;

	printf("%#.8x => %#.8x", a, Change_Endian(a));
}

int Change_Endian(int data){

	//union uni z, x = {data}; // c 표준에서는 초기화자로 변수를 쓰지 못한다.
	// or



	// sol 1
	//union uni z, x;
	//x.a = data;
	//for (int i = 0; i < sizeof z.a; i++)
	//{
	//	z.b[3 - i] = x.b[i];
	//}
	//return z.a;

	// sol 2
	union uni x;
	x.a = data;
	for (int i = 0; i < sizeof x.a / 2; i++)
	{
		char tmp;
		tmp = x.b[3 - i];
		x.b[3 - i] = x.b[i];
		x.b[i] = tmp;
	}
	return x.a;
}