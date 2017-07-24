//#include <stdio.h>
//
//int combination(int n, int r);
//
//void main()
//{
//	int val;
//	scanf("%d", &val);
//	for (int n = val - 1; n > -1; n--)
//	{
//		for (int r = n; r > -1; r--)
//		{
//			printf("%d ", combination(n, r));
//		}
//		printf("\n");
//	}
//}
//
//int combination(int n, int r)
//{
//	if (n == 1 || n == 0) return 1;
//
//	int result = 1;
//
//	for (int i = 0; i < r; i++)
//	{
//		result *= (n - i);
//	}
//	for (int j = 0; j < r; j++)
//	{
//		result /= (r - j);
//	}
//
//	return result;
//}