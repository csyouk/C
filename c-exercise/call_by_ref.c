#include <stdio.h>

#define CBR_TEST 0
#define CBR_EX1 0

void plusref(int *a);

#if CBR_TEST
void main(void)
{

#if CBR_EX1
	int i;
	i = 5;
	plusref(&i);
	printf("call by ref result is : %d\n", i);
#endif

}


void plusref(int *a)
{
	// �Ʒ��� �� ���� ������ ����. 
	// *a = *a + 1;
	++*a;
}



#endif