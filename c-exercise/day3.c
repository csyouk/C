//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//#include "day3.h"
//
//float cal_circle_round(int radius);
//int current_age(int current_year, int birth_year);
//float avg(int sub1, int sub2, int sub3);
//int sum_digits(int val);
//int cnt_odds(int arg1, int arg2, int arg3);
//double height_sqr(double height);
//double fat_calc(double height, double weight);
//int price_calc(int price, int dc);
//int random_calc(void);
//
//
//void main(void)
//{
//	printf("%.3f\n", cal_circle_round(3));   // 18.840
//	printf("%d\n", current_age(2017, 1987)); // 31
//	printf("%.2f\n", avg(82, 83, 91));       // 85.33
//	printf("%d\n", sum_digits(123));         // 6
//	printf("%d\n", cnt_odds(11, 12, 13));    // 2
//	printf("%.2f\n", fat_calc(1.60, 50.0));  // 19.53
//	printf("%d\n", price_calc(3210, 30));    // 2240
//	printf("%d\n", random_calc());           // random value
//	printf("%d\n", random_calc());           // random value
//	printf("%d\n", random_calc());           // random value
//	printf("1%s => %.0fByte\n", "KB", pow(2.0, 10.0));  // 1KB => 1024Byte
//	printf("1%s => %.0fByte\n", "MB", pow(2.0, 20.0));  // 1MB => 1048576Byte
//	printf("1%s => %.0fByte\n", "GB", pow(2.0, 30.0));  // 1GB => 1073741824Byte
//	printf("1%s => %.0fByte\n", "TB", pow(2.0, 40.0));  // 1TB => 1099511627776Byte
//	printf("%c\n", change_case('a'));        // A
//
//}
//
//
//float cal_circle_round(int radius)
//{
//	float pi = 3.14f;
//	return 2 * pi * radius;
//}
//
//int current_age(int current_year, int birth_year)
//{
//	return current_year - birth_year + 1;
//}
//
//float avg(int sub1, int sub2, int sub3)
//{
//	int sum = sub1 + sub2 + sub3;
//	return sum / 3.0f;
//}
//
//int sum_digits(int val)
//{
//	int first = val / 100;
//	int second = val % 100 / 10;
//	int third = val % 10;
//	return first + second + third;
//}
//
//int cnt_odds(int arg1, int arg2, int arg3)
//{
//	int total = 0;
//	total += arg1 % 2;
//	total += arg2 % 2;
//	total += arg3 % 2;
//	return total;
//}
//
//double height_sqr(double height)
//{
//	return height * height;
//}
//
//double fat_calc(double height, double weight)
//{
//	return  weight / height_sqr(height);
//}
//
//int price_calc(int price, int dc)
//{
//	int discounted_price = price - price * dc / 100;
//	int result = discounted_price - discounted_price % 10;
//	return result;
//}
//
//int random_calc(void)
//{
//	return rand() % 10 + 1;
//}
//
//int change_case(char c)
//{
//	return c - 32;
//}