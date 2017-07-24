//#include <stdio.h>
//
//int Max_Calc(int a, int b);
//
//int main(void)
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//
//	printf("%d", Max_Calc(a, b));
//
//	return 0;
//}
//
//int Max_Calc(int a, int b)
//{
//	if (a > b) return a;
//	return b;
//}

//
//#include <stdio.h>
//
//void Num_Comp(int a, int b);
//
//int main(void)
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	Num_Comp(a, b);
//	return 0;
//}
//
//void Num_Comp(int a, int b)
//{
//	if (a > b){
//		printf("%d > %d", a, b);
//		return;
//	}
//	else if (a == b)
//	{
//		printf("%d == %d", a, b);
//	}
//	else
//	{
//		printf("%d < %d", a, b);
//	}
//
//}


//#include <stdio.h>
//
//int Num_Count(int num);
//
//int main(void)
//{
//	int a;
//	scanf("%d", &a);
//	printf("%d", Num_Count(a));
//
//	return 0;
//}
//
//int Num_Count(int num)
//{
//	if (num <= 0) return 0;
//	int digit;
//	if (num / 1000)
//	{
//		return 3;
//	}
//	if (num / 100)
//	{
//		return 3;
//	}
//	if (num / 10)
//	{
//		return 2;
//	}
//
//	return 1;
//}

//
//#include <stdio.h>
//
//int Abs_Calc(int num);
//
//int main(void)
//{
//	int a;
//	scanf("%d", &a);
//	printf("%d", Abs_Calc(a));
//	return 0;
//}
//
//int Abs_Calc(int num)
//{
//	if (num < 0)
//	{
//		return -num;
//	}
//	return num;
//}

//
//
//#include <stdio.h>
//
//char Multiple_Calc(int num);
//
//int main(void)
//{
//	int a;
//	scanf("%d", &a);
//	printf("%c", Multiple_Calc(a));
//	return 0;
//}
//
//char Multiple_Calc(int num)
//{
//	if (!(num % 3) && !(num % 5))
//	{
//		return 'O';
//	}
//	return 'X';
//}
//
//#include <stdio.h>
//
//int Num_Calc(int x, int y, char op);
//
//int main(void)
//{
//	int a, b;
//	char c;
//	scanf("%d%d %c", &a, &b, &c);
//	printf("%d", Num_Calc(a, b, c));
//
//	return 0;
//}
//
//int Num_Calc(int x, int y, char op)
//{
//	if (op == '+')
//	{
//		return x + y;
//	}
//	if (op == '*')
//	{
//		return x * y;
//	}
//	if (op == '-')
//	{
//		return x - y;
//	}
//	if (op == '/')
//	{
//		return x / y;
//	}
//
//}

//
//
//#include <stdio.h>
//
//char Weight_Check(int weight);
//
//int main(void)
//{
//	//함수작성
//	int a;
//	char c;
//	scanf("%d", &a);
//
//	c = Weight_Check(a);
//	
//	if (Weight_Check(a) == 'X')
//	{
//		printf("%s", "error");
//	}
//	else {
//		printf("%c", c);
//	}
//	return 0;
//}
//
//char Weight_Check(int weight)
//{
//	if (weight < 0 || weight > 200) return 'X';
//	if (weight > 69) return 'H';
//
//	weight = weight / 10;
//
//	switch (weight)
//	{
//	case 6:
//		return 'M';
//	case 5:
//		return 'L';
//	default:
//		return 'F';
//	}
//}


//#include <stdio.h>
//void main()
//{
////	int a = 0, b = 3, c;
//	//c = !(a == b); printf("%d", c);
//	//c = a = b; printf("%d", c);
////	c = !a++; printf("%d", c);
////	c = (b%2 == 0); printf("%d", c);
//	//c = !a++;  printf("a b c %d %d %d", a, b, c);
//
//
//	//int a, b, c;
//	//a = (b = 0, c = b++, c + 1);  printf("%d %d %d", a,b,c);
//	//a = b = 0, c = b++, c + 1;  printf("%d %d %d", a,b,c);
//
//	int a = 3, b = 0;
////	if ((a < 5) || (b = 3)) b++; printf("%d %d", a, b);
//	//if ((a > 5) || (b = 3)) b++; printf("%d %d", a, b);
//	//if (a==3 && b = 3) b++; printf("%d %d", a, b);
//	if ((a==5) && (b=3)) b++; printf("%d %d", a, b);
//
//}