// 1
//#include <stdio.h>

//void prt(int rep)
//{
//	if (rep == 0) return;
//	prt(rep - 1);
//	printf("Hello\n");
//}
//
//void main(void){
//
//	int r;
//	scanf("%d", &r);
//	prt(r);
//}


// 2
//#include <stdio.h>
//int sum(int n)
//{
//	if (n == 0) return 0;
//	return n + sum(n - 1);
//}
//
//void main(void)
//{
//	int val;
//	scanf("%d", &val);
//	printf("%d", sum(val));
//}


// 3
//#include <stdio.h>
//int sum(int n)
//{
//	if (n == 0) return 0;
//	if (n % 2) return n + sum(n - 1);
//	return sum(n-1);
//}
//
//void main(void)
//{
//	int val;
//	scanf("%d", &val);
//	printf("%d", sum(val));
//}


// 4
//#include <stdio.h>
//int pow(int base, int exp)
//{
//	if (exp == 0) return 1;
//	return base*pow(base, exp - 1);
//}
//
//void main(void)
//{
//	int base, exp;
//	scanf("%d%d", &base, &exp);
//	printf("%d", pow(base, exp));
//}


// 5
//#include <stdio.h>
//
//int vals[5] = { 0 };
//
//void backtrace(int rep)
//{
//	if (rep == 0) return;
//	backtrace(rep - 1);
//	printf("%d ", vals[5 - rep]);
//}
//
//void main(void)
//{
//
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &vals[i]);
//	}
//
//	backtrace(i);
//}


// 6
//#include <stdio.h>
//
//void find_max(int*, int*);
//void find_min(int*, int*);
//
//void main(void)
//{
//	int min = 0x7fffffff, max = 0x80000000;
//	int data[5] = {0};
//
//	for (int i = 0; i < 5; i++)
//	{
//		scanf("%d", &data[i]);
//	}
//
//	for (int i = 0; i < sizeof data / sizeof data[0]; i++)
//	{
//		find_max(&data[i], &max);
//
//	}
//
//	printf("%d", max);
//
//}
//
//void find_max(int *element,int *max)
//{
//	*element > *max ? *max = *element : 0;
//}
//
//void find_min(int *element, int *min)
//{
//	*element < *min ? *min = *element : 0;
//}

// 7
//#include <stdio.h>
//
//int data[5] = { 0 };
//int avgerage;
//
//int avg(void){
//	int sum = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		sum += data[i];
//	}
//	return sum / 5;
//}
//
//void main(void)
//{
//
//
//	for (int i = 0; i < 5; i++)
//	{
//		scanf("%d", &data[i]);
//	}
//
//	avgerage = avg();
//
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", (data[i] < avgerage) ? avgerage - data[i] : data[i] - avgerage);
//	}
//}

// 8
//#include <stdio.h>
//int find_prime_bruteforce(int number) 
//{
//
//	int is_prime = 0; // 0 means false
//
//	if (number == 2) return !is_prime;
//	for (int j = 2; j < number / 2 + 2; j++)
//	{
//		if (number % j == 0) {
//			return is_prime;
//		}
//	}
//	
//	return !is_prime;
//
//}
//
//void main(void)
//{
//	int s, e;
//	int index = 0;
//	int container[10] = { 0 };
//
//
//	scanf("%d%d", &s, &e); 
//
//	
//	for (int i = s; i < e + 1; i++)
//	{
//		if (index == 10) break;
//		if (find_prime_bruteforce(i)){
//			container[index] = i;
//			index++;
//		}
//	}
//
//	for (int i = 0; i < 10; i++)
//	{
//		if (!container[i]) break;
//		printf("%d ", container[i]);
//	}
//}



// 9
//#include <stdio.h>
//
//void main(void)
//{
//	int temp;
//	int data[5] = { 0 };
//	for (int i = 0; i < 5; i++)
//	{
//		scanf("%d", &data[i]);
//	}
//
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = i + 1; j < 5; j++)
//		{
//			if (data[i] < data[j]){
//				temp = data[i];
//				data[i] = data[j];
//				data[j] = temp;
//			}
//		}
//	}
//
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", data[i]);
//	}
//}


// 10
//#include <stdio.h>
//
//void main(void)
//{
//	char name[51] = { 0 };
//
//	scanf("%s", name);
//
//	for (int i = 0; i < sizeof name; i++)
//	{
//		if (name[i] == 0) break;
//		printf("%c\n", name[i]);
//	}
//}


// 11
//#include <stdio.h>
//
//void main(void)
//{
//	char target;
//	char name[51] = { 0 };
//	int rep = 0;
//
//	scanf("%s %c", name, &target);
//
//	for (int i = 0; i < sizeof name; i++)
//	{
//		if (name[i] == target) rep++;
//	}
//
//	printf("%d", rep);
//}

// 12
//#include <stdio.h>
//
//int rep_cnt(int n){
//	return 0;
//}
//
//void main(void)
//{
//	char name[51] = { 0 };
//	int rep = 0;
//
//	scanf("%s", name);
//
//	for (int i = 0; i < 10; i++)
//	{
//		rep = 0;
//		for (int j = 0; j < sizeof name; j++)
//		{
//			if (name[j] == 0) break;
//			if (name[j] - '0' == i) rep++;
//		}
//
//		printf("%d ", rep);
//	}
//
//
//}

// 13
//#include <stdio.h>
//
//int rep_cnt(int n){
//	return 0;
//}
//
//void main(void)
//{
//	char raw[51] = {0};
//	char data[10] = { 0 };
//	int index = 0;
//
//	scanf("%s", &raw);
//
//	for (int i = 0; i < sizeof raw; i++)
//	{
//		if (!raw[i]) break;
//		if ('a' <= raw[i] && raw[i] <= 'z'){
//			data[index] = raw[i];
//			index++;
//		}
//	}
//
//	for (int i = 0; i < sizeof data; i++)
//	{
//		if (!data[i]) break;
//		printf("%c", data[i]);
//	}
//
//  printf("%s", data); // 위와 같은 코드이다.
//}




