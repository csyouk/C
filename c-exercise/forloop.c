//#include <stdio.h>
//
//void find_prime_bruteforce(int number);
//
//void main(void)
//{
////	//for (int i = 'A'; i < 'K' + 1; i++)
////	//{
////	//	printf("%c ", i);
////	//}
////	//
////	//printf("\n");
////	//
////	//for (int i = 'D'; i < 'X'+1; i += 2)
////	//{
////	//	printf("%c ", i);
////	//}
////
////	//printf("\n");
////
////	//for (float f = 0.1; f < 3.14f; f += 0.1f)
////	//{
////	//	printf("%f\n", f);
////	//}
////
////	//printf("\n");
////
////	//for (char c = 'A'; c < 'Z' + 1; c++)
////	//{
////	//	printf("%c ", c);
////	//}
////
////	//int condition_satisfied = 0;
////
////	//for (int i = 1; i < 101; i++)
////	//{
////	//	if ((i % 3 != 0) && ( i % 10 != 3 ) && ( i / 10 != 3 ))
////	//	{
////	//		printf("[%03d] ", i);
////
////	//		condition_satisfied++;
////	//		
////	//		if (condition_satisfied % 10 == 0){
////	//			printf("\n");
////	//		}
////
////	//	}
////	//}
////
////	//int cnt = 0;
////	//
////	//for (int i = 1; i < 100; i++)
////	//{
////	//	if ((i % 3 == 0) || (i / 10 == 3) || (i % 10 == 3)) continue;
////	//	else printf("%03d ", i);
////	//	/*if (cnt % 10 == 0) printf("\n");*/
////	//	cnt++;
////	//	if (cnt % 10 == 0) printf("\n");
////	//}	
////	//printf("성공\n");
////	//printf("# of integers : %d\n", cnt+1);
////
////	//for (int i = 1; i < 1000; i++)
////	//{
////	//	(i % 2 == 0) ? printf("%03d", i) : printf("###");
////	//	if (i % 10 == 0) printf("\n");
////	//}
////
////	//int i, j;
////	//for ( i = 0; i < 20; i++)
////	//{
////	//	for ( j = 0, printf("Loop -> %d\n", i); j < 10; i++, j++)
////	//	{
////	//		if (j == 4) break;
////	//	}
////	//	if (i % 3) continue;
////	//	printf("==============================\n");
////	//}
////
//	int val;
//	scanf("%d", &val);
//	find_prime_bruteforce(val);
//}
////
//void find_prime_bruteforce(int number) // 3가지 방식
//{
//	if (number == 2)
//	{
//		printf("2");
//		return;
//	}
//	for (int i = 2; i < number + 1; i++)
//	{
//		int rep_cnt = 0;
//		for (int j = 2; j <	i + 1; j++) if (i % j) rep_cnt++;
//		if (rep_cnt == (i - 2)) printf("%d ", i);
//	}
//
//	for (int i = 2; i < number + 1; i++)
//	{
//		if (i == 2) printf("%d ", i);
//		for (int j = 2; j < i; j++)
//		{ 
//			if (i % j == 0) break;
//			if (i == (j+1)) printf("%d ", i);
//		}
//	}
//
//
//	int i, j;
//	for (i = 2; i < number + 1; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0) break;
//		}
//		if (i == j) printf("%d ", i);
//	}
//
//}
//



//
//
//#include <stdio.h>
//
//void find_prime_bruteforce(int s, int e);
//int check_edgecase(int s, int e);
//void check_order(int s, int e);
//
//void main(void)
//{
//	int s, e;
//	// case 1
//	do
//	{
//		scanf("%d %d", &s, &e);
//		check_order(&s, &e);
//	} while (!check_edgecase(s, e));
//
//	// case 2
//	//for (;;)
//	//{
//	//	scanf("%d %d", &s, &e);
//	//	check_order(&s, &e);
//	//	if (check_edgecase(s, e)) break;
//	//}
//
//	find_prime_bruteforce(s, e);
//
//}
//
//void check_order(int *s, int *e)
//{
//	int temp;
//	if (*s > *e)
//	{
//		temp = *s;
//		*s = *e;
//		*e = temp;
//	}
//}
//
//int check_edgecase(int s, int e)
//{
//	int edge_case = 0;
//	if (s < 1 || e < 1) return edge_case;
//	if (s == e) return edge_case;
//	return !edge_case;
//}
//
//void find_prime_bruteforce(int s, int e) // 3가지 방식
//{	
//	int i, j;
//	for (i = s + 1; i < e; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0) break;
//		}
//		if (i == j) printf("%d ", i);
//	}
//}

// ex1
//#include <stdio.h>
//
//void main(void)
//{
//	int val, cnt = 0;
//	scanf("%d", &val);
//	for (int i = 0; i < val + 1; i++)
//	{
//		if (i % 2) cnt++;
//	}
//	printf("%d", cnt);
//}

// ex2
//#include <stdio.h>
//
//void main(void)
//{
//	int v, sum=0;
//	scanf("%d", &v);
//	for (int i = 1; i < v+1; i++)
//	{
//		if (i % 2) sum += i;
//	}
//	printf("%d", sum);
//}

//ex3
//#include <stdio.h>
//
//void main(void)
//{
//	int v;
//	scanf("%d", &v);
//	for (int i = v; i > 0; i--)
//	{
//		if (i % 2) 	printf("%d ", i);
//	}
//
//}

// ex4
//#include <stdio.h>
//
//void main(void)
//{
//	int v, cnt=0;
//	scanf("%d", &v);
//	for (int i = 1; i < v+1; i++)
//	{
//		if (!(i % 3) && !(i % 5)) 
//		{
//			printf("%d ", i);
//			cnt++;
//		}
//	}
//	printf("\n%d", cnt);
//
//}

// ex5
//#include <stdio.h>
//
//void main(void)
//{
//	int cnt = 0;
//	for (int i = 1; i < 101; i++)
//	{
//		if (i % 2)
//		{
//			printf("%2d ", i);
//			cnt++;
//			if (!(cnt % 15))
//			{
//				printf("\n");
//			}
//		}
//
//	}
//}

//ex6
//#include <stdio.h>
//
//void main(void)
//{
//	for (int i = 1; i < 10; i++)
//	{
//		for (int j = 0; j < i; j++)
//		{
//			printf("%d",j+1);
//		}
//		printf("\n");
//	}
//}

//ex7
//#include <stdio.h>
//
//void main(void)
//{
//	for (int i = 1; i < 10; i++)
//	{
//		int k = 1;
//		for (int j = 1; j < 10; j++)
//		{
//			if ( j < (10-i) )
//			{
//				printf(" ");
//			}
//			else
//			{
//				printf("%d", k);
//				k++;
//			}
//		}
//		printf("\n");
//	}
//}


//ex9
//#include <stdio.h>
//void main(void)
//{
//	for (int i = 1; i < 10; i++)
//	{
//		for (int j = 2; j < 10; j++)
//		{
//			printf("%d* %d=%2d ", j, i, j*i);
//		}
//		printf("\n");
//	}
//}

//ex10
//#include <stdio.h>
//void main(void)
//{
//	for (int i = 1; i < 7; i++)
//	{
//		for (int j = 1; j < 7; j++)
//		{
//			printf("%d %d\n", i, j);
//		}
//
//	}
//}

//ex11
//#include <stdio.h>
//void main(void)
//{
//	int val, sum = 0, rep=1;
//	scanf("%d", &val);
//
//
//	do
//	{
//		sum += rep;
//		rep++;
//	} while (!(sum >= val));
//	printf("%d", --rep);
//}

//// ex8
//#include <stdio.h>
//
//void main(void)
//{
//	for (char c = 'A'; c < 'Z' + 1; c++)
//	{
//		for (char c2 = 'A'; c2 < c + 1; c2++)
//		{
//			printf("%c", c2);
//		}
//		printf("\n");
//	}
//}
//
////ex12
//#include <stdio.h>
//void main(void)
//{
//	int val, digits;
//	scanf("%d", &val);
//
//	do
//	{
//		printf("%d", val % 10);
//		val /= 10;
//	} while (val);
//}


//#include <stdio.h>
//void main(void)
//{
//	int x, y, sum=0;
//	scanf("%d%d", &x, &y);
//	for (int i = x; i < y +1; i++)
//	{
//		if (!(i % 2)) sum += i;
//	}
//	printf("%d", sum);
//}

//
//#include <stdio.h>
//void main(void)
//{
//
//	for (int i = 1; i < 101; i++)
//	{
//		printf(" %3d", i);
//		if (!(i % 10)) printf("\n");
//	}
//
//}

//
//#include <stdio.h>
//void main(void)
//{
//	for (char c = 'A'; c < 'Z' + 1; c++)
//	{
//		for (char c2 = 'A' + c - 1; c2 < 'Z' + 1; c2++)
//		{
//			if ((c2 - c) == 0){
//
//			}
//			printf("%c", c2);
//		}
//		printf("\n");
//	}
//}
//
//#include <stdio.h>
//void main(void)
//{
//	for (int i = 1; i < 7; i++)
//	{
//		for (int j = 1; j < 7; j++)
//		{
//			for (int k = 1; k < 7; k++)
//			{
//				printf("%d %d %d\n", i, j, k);
//			}
//		}
//
//	}
//}
//
//#include <stdio.h>
//void main(void)
//{
//	int val, s=0;
//	scanf("%d", &val);
//
//	do
//	{
//		s += val % 10;
//	} while (val /= 10);
//
//	printf("%d", s);
//}


//#include <stdio.h>
//void main(void)
//{
//	int sum = 0, rep=1, val=1000;
//
//	do
//	{
//		sum += rep*3;
//		rep++;
//	} while (!(sum >= val));
//	printf("%d", (--rep)*3-3);
//}
//
//#include <stdio.h>
//
//
//void main(void)
//{
//	int n, s=0;
//	scanf("%d", &n);
//	for (int i = 1; i < n + 1; i++)
//	{
//		int r = 1;
//		for (int j = i; j > 0 ; j--)
//		{
//			r *= j;
//		}
//		s += r;
//	}
//	printf("%d", s);
//}
//


//
//#include <stdio.h>
//void main(void)
//{
//	int n;
//	scanf("%d", &n);
//
//}
//
