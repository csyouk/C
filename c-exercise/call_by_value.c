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
	// ����
	// return a++; �� �� ��� ����(a++) ��ü�� �Ѿ��. ���ϴ� �Լ��� ������ ������ �� ���� �ȴ�. 
}



#endif