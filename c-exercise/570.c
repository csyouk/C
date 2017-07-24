//#include <stdio.h>
//void main()
//{
//	int container[5][5];
//
//	for (int row = 1; row < 6; row++)
//	{
//		for (int col = 1; col < 6; col++)
//		{
//			container[row-1][col-1] = 1;
//			if (row != 1 && col != 1)
//			{
//				container[row-1][col-1] = container[row-1][col - 2] + container[row-2][col-1];
//			}
//		}
//	}
//
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			printf("%d ", container[i][j]);
//		}
//		printf("\n");
//	}
//
//}