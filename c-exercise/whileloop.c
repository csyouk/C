////#include <stdio.h>
////
////int mul_3(int n);
////
////int main(void)
////{
////	//int a = 0;
////	//while (a++ < 5) printf("*");
////
////	//printf("=========================\n");
////
////	//a = 0;
////	//while (a < 5)
////	//{
////	//	printf("*");
////	//	a++;
////	//}
////
////	int val;
////	scanf("%d", &val); 
////
////	//while (val-- > -1) (val + 1) % 3 == 0 ? printf("%d", val + 1) : printf(" ");
////
////	while (!(val == -1)) { if (!(val-- % 3)) printf("%d ", val+1); }
////}
////
//////int mul_3(int n)
//////{
//////
//////}
//
//
//#include <stdio.h>
//void main(){
//	int i;
//	scanf("%d", &i);
//
//	do
//	{
//		int q = i / 10;
//		int r = i % 10;
//		if (q + r == 7) printf("%02d\n", i);
//	} while (i-- > 10);
//}
//
//#include <stdio.h>
//void main(){
//
//	int i;
//	scanf("%d", &i);
//
//	while ((i-- % 42));
//	printf("result is : %d\n", ++i);
//}
//
//
//#include <stdio.h>
//void draw();
//void main()
//{
//
//	//for (int i = 0; i < 10; i++)
//	//{
//
//	//	for (int j = 0; j < 10; j++)
//	//	{
//	//		if (i == 0 || i == 9) {
//	//			printf("**********");
//	//			break;
//	//		}
//	//		if (j == 0 || j == 9)
//	//		{
//	//			printf("*");
//	//			continue;
//	//		}
//	//		if (i < 5)
//	//		{
//	//			if (i == j || (9 - j) == i)
//	//			{
//	//				printf("*");
//	//			}
//	//			else
//	//			{
//	//				printf(" ");
//	//			}
//	//		}
//	//		else
//	//		{
//	//			if (i == j || (9 - j) == i)
//	//			{
//	//				printf("*");
//	//			}
//	//			else
//	//			{
//	//				printf(" ");
//	//			}
//	//		}
//	//	}
//	//	printf("\n");
//	//}
//	draw();
//}
//
//
//
//void draw()
//{
//	for (int i = 0; i < 10; i++)
//	{
//		if (i == 0 || i == 9) {
//			printf("**********");
//			continue;
//		}
//		for (int j = 0; j < 10; j++)
//		{
//
//			if (j == 0 || j == 9)
//			{
//				printf("*");
//				continue;
//			}
//			if (i == j || (9 - j) == i)
//			{
//				printf("*");
//			}
//			else
//			{
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//}
