//#include <stdio.h>
//
//int a = 3;
//int b = sizeof(b);
//
//void main(void){
//	printf("value of b : %d\n", b);
//}


//#include <stdio.h>
//void main(void){
//	int aa[] = {10,20,30,40,50};
//
//	printf("size of a[] : %d\n", sizeof aa / sizeof aa[0]);
//
//	char b[] = "ABCD";
//
//	printf("size of b[] : %d\n", sizeof b);
//
//	char bb[3] = "ABC";
//
//	printf("bb[3] : %s\n", bb);
//
//	int a[4] = { 10, 20 };
//
//	printf("%d %d %d %d\n", a[0], a[1], a[2], a[3]);
//
//	//char c[] = {};  // 오류 : 경계가 지정되지 않은 배열에 빈 이니셜라이저를 사용할 수 없습니다.
//	//printf("%s\n", c);
//
//	char d[5] = { 'A', 'B', 'C', 'D', 0 };
//	printf("%s\n", d);
//	
//}

// ex3
//#include <stdio.h>
//void main(void){
//	int nums[10] = {2,5,20,10,33,52,223,51,50,30};
//	int input, flag;
//	for(;;)
//	{
//		flag = 0;
//		scanf("%d", &input);
//		for (int i = 0; i < 10; i++)
//		{
//			if (nums[i] == input){
//				printf("nums[%d] = %d\n", i, nums[i]);
//				flag = !flag;
//				break;
//			}
//		}
//		if (flag) { break; }
//		else { printf("꽝\n"); }
//	}
//}
//


// ex4, 5

//#include <stdio.h>
//void main(void){
//	int a[20] = {0};
//	for (int i = 0; i < (sizeof(a)/sizeof(a[0])); i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
//	{
//		printf("%d\n", a[i]);
//	}
//}


// find min max
//#include <stdio.h>
//
//void find_max(int*, int*);
//void find_min(int*, int*);
//
//void main(void)
//{
//	int min = 0x7fffffff, max = 0x80000000;
//	int data[20] = { 20, 40, 30, 20, 90, -20, 30, 90, -200, 58, 10, 15 ,489};
//
//	for (int i = 0; i < sizeof data / sizeof data[0]; i++)
//	{
//		//if (data[i] > max){
//		//	max = data[i];
//		//}
//		//if (data[i] < min){
//		//	min = data[i];
//		//}
//		find_max(&data[i], &max);
//		find_min(&data[i], &min);
//	}
//
//	printf("max : %d / min : %d\n", max, min);
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


//#include <stdio.h>
//void main(void){
//	int temp;
//	int data[10] = { -56, -23, -99, 64, 9, 0, 32, 45, 23, -34 };
//
//	for (int i = 0; i < 10 - 1; i++)
//	{		
//		for(int j = i + 1; j < 10; j++)
//		{
//			if (data[i] > data[j])
//			{
//				temp = data[i];
//				data[i] = data[j];
//				data[j] = temp;
//			}
//		}
//	}
//
//	for (int i = 0; i < 10; i++)
//	{
//		printf("a[%d] = %d\n", i, data[i]);
//	}
//}
//
//#include <stdio.h>
//#include <conio.h>
//
//char seeds[] = "QWERTYUIOPLKJHGFDSAZXCVBNM";
//
//char encoding(char);
//char decoding(char);
//
//void main(void){
//
//	char input;
//
//	printf("A-Z 사이의 문자를 입력하시오 이외 글자는 종료합니다.\n");
//	
//	
//	for (;;)
//	{	
//		input = getche();
//		if (input < 'A' || input > 'Z') break;
//		printf(" => %c\n", decoding(input));
//	}
//
//}
//
//
//char encoding(char c)
//{
//	return seeds[c - 'A'];
//}
//
//char decoding(char c)
//{
//	for (int i = 0; i < sizeof seeds; i++)
//	{
//		if (seeds[i] == c) return i + 'A';
//	}
//}
//
//
//

//#include <stdio.h>
//#include <conio.h>
//
//int r_grade(int score){
//	if (score < 0 || score > 100) return 5;
//	if (score < 61) return 4;
//	return 10 - (score - 1) / 10;
//}
//
//void main(){
//
//	//char grade[6] = { 'A', 'B', 'C', 'D', 'F', 'X' };
//	char grade[7] = "ABCDFX";
//	int score;
//
//	for (;;)
//	{
//		scanf("%d", &score);
//		printf("Score:%4d ==> %c\n", score, grade[r_grade(score)]);
//	}
//}