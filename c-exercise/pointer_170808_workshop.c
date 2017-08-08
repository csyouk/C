

// 7
//#include <stdio.h>
//void Swap(char *a, char *b)
//{
//	char temp;
//	while (*a || *b)
//	{
//		temp = *b;
//		*b = *a;
//		*a = temp;
//
//		a++; b++;
//	}
//}
//
//int main(void)
//{
//	char a[110] = { 0 }, b[110] = {0};
//	scanf("%s %s", a, b);
//	Swap(a, b);
//	printf("%s %s\n", a, b);
//	return 0;
//}

// 6
//#include < stdio.h> 
//// 여기에 Week_Calc()함수를 구현한다
//char * Week_Calc(int num)
//{
//	static char *days[7] = { "Sunday", "Monday", "Tuesday", 
//		"Wednesday", "Thursday", "Friday", "Saturday" };
//	return days[num];
//}
//
//void main(void)
//{
//	int n;
//	scanf("%d", &n);
//	printf("%s\n", Week_Calc(n));
//}


//5
//#include < stdio.h> 
//// 여기에 Input()와 Display()함수를 구현한다.
//void Input(int *p)
//{
//	for (int i = 0; i < 5; i++)
//	{
//		scanf("%d", p + i);
//	}
//}
//
//void Display(int *p)
//{
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", p[i]);
//	}
//}
//void main(void)
//{
//	int a[5];
//	Input(a);
//	Display(a);
//}


////4
//#include <stdio.h> 
//// 여기에 대문자로 변환하여 저장하는 Upper_Change()함수를 구현한다
//void Upper_Change(char *d, char *s)
//{
//	//while (*d++ = (*s++ - 'a' +'A'));
//	while (*s){
//		*d = *s - 'a' + 'A';
//		s++;
//		d++;
//	}
//}
//
//int main(void)
//{
//	char s_str[110] = { 0 };	// src 
//	char d_str[110] = { 0 }; // dest 
//	scanf("%s", s_str);
//	Upper_Change(d_str, s_str);
//	printf("%s", d_str);
//	return 0;
//}
// 3
//#include <stdio.h> 
//// 여기에 문자열을 역순으로 인쇄하는 Reverse_Disp()함수를 구현한다
//void Reverse_Disp(char *p)
//{
//	int last = 0;
//	while (*p){
//		p++;
//		last++;
//	}
//
//	for (int i = 1; i <= last; i++)
//	{
//		printf("%c", p[-i]);
//	}
//}
//
//int main(void)
//{
//	char a[110];
//	scanf("%s", a);
//	Reverse_Disp(a);
//	return 0;
//}


// 2
//#include <stdio.h> 
//// 여기에 대문자로 변환하여 인쇄하는 Upper_Disp()함수를 구현한다
//void Upper_Disp(char *p)
//{
//	char *backup = p;
//	while (*p)
//	{
//		*p = *p - 'a' + 'A';
//		p++;
//	}
//
//	printf("%s", backup);
//}
//
//void main(void)
//{
//	char a[110];
//	scanf("%s", a);
//	Upper_Disp(a);
//}


// 1
//#include <stdio.h> 
//// 여기에 넘어온 문자열에서 찾을 문자c의 개수를 리턴하는
//// Char_Find()함수를 구현한다
//
//int Char_Find(char *p, char c){
//	int match_cnt = 0;
//	while (*p){
//		if (*p == c) match_cnt++;
//		p++;
//	}
//	return match_cnt;
//}
//
//int main(void)
//{
//	char a[110];
//	char c;
//	scanf("%s", a);
//	scanf(" %c", &c);
//	printf("%d\n", Char_Find(a, c));
//	return 0;
//}
