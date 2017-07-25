#include <stdio.h>

int G_ARR[5];

void main(void){

	char b[3] = "ABCD";

	int length_of_array = sizeof(b) / sizeof(b[0]);

	for (int i = 0; i < length_of_array; i++)
	{
		printf("b[%d]=%c\n", i, b[i]);
	}

	char c[10] = "aa";

	printf("sizeof c[10] = %d\n", sizeof(c));


	int ar[5];
	ar[8] = 1234;

	for (int i = -3; i < 9; i++)
	{
		printf("ar[%d]=%d\n", i, ar[i]);
	}


	int x = 20;
	int y = 10;
	//int arr[x][y] = {0}; // compile error, subscrition에는 상수가 와야 한다.
	
	int arr[20][10];
	printf("size of arr[20][10]=%d\n", sizeof arr); // 4(int) * 20 * 10 = 800
	printf("size of arr[20][10]=%d\n", sizeof(int)*x*y); // 4(int) * 20 * 10 = 800

	int L_ARR[5];

	for (int i = 0; i < 5; i++)
	{
		printf("G_ARR[%d] = %d, L_ARR[%d] = %d\n", i, G_ARR[i], i, L_ARR[i]);
	}

	int d_arr[2][3] = {0,1,2,3,4,5};
	int dd_arr[2][3] = {
		{0,1,2},
		{3,4,5}
	};
	int ddd_arr[2][3] = {
		{ 1 },
		{ 2, 3, 4 }, // ,  붙이는 거 가능.
	};
	int dddd_arr[2][3] = {
		{1,2,3,4},
		{5,6,7},
	};
	// 적게 넣는건 문제 없지만, 과도하게 넣으면 에러다.
}