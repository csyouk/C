#include <stdio.h>

#define CBV_TEST 0
#define CBV_EX1 0

int plusone(int);

#if CBV_TEST
void main(void)
{

#if CBV_EX1
	int i, j;
	i = 5;
	j = plusone(i);
	printf("i=%d, result is : %d\n", i, j);
#endif

}


int plusone(int a)
{
	return ++a;
	// 주의
	// return a++; 를 할 경우 계산식(a++) 자체가 넘어간다. 원하는 함수의 행위를 정의할 수 없게 된다. 
}



#endif