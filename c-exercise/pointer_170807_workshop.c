#include <stdio.h>
#define FIRST 0
#define SIZE(arr) (sizeof(arr) / sizeof(arr[FIRST]))
//#if 1
//void main(void){
//}
//#endif


// 1
#if 0
void main(){
	char a = 65;
	char *p = &a;
	printf("%d\n", *p);
	*p = 97; printf("%d\n", *p);
	*p += 10; printf("%d\n", *p);
	(*p)++; printf("%d\n", *p);
}

#endif

// 2
#if 0
void main(void){

	short a = 100;
	float b = 3.5f;
	short *p = &a; float *q = &b;
	printf("%hd, %f\n", *p, *q);
	printf("%#.8x, %#.8x, %#.8x, %#.8x\n", p, &a, q, &b);
	printf("%d, %d, %d, %d\n", sizeof(*p), sizeof(a), sizeof(*q), sizeof(b));
	printf("%#.8x, %#.8x, %#.8x, %#.8x\n", p + 1, &a + 1, q + 1, &b + 1);
	printf("%hd, %hd, %hd, %hd\n", p[1], *(&a + 1), q[1], *(&b + 1));
}
#endif

// 4
#if 0
void Input(float *p)
{
	*p = 3.5f;
}
void main(void){
	float f;
	Input(&f);
	printf("f=%f\n", f);

}
#endif

// 5
#if 0
void main(void){
	int a[5] = { 1, 2, 3, 4, 5 };
	printf("%d, %d, %d\n", a[2], *(a + 2), (a+2)[0]);
	printf("%#.8x, %#.8x, %#.8x\n", &a[2], a+2, &a[0] + 2);
}
#endif

// 6
#if 0
void main(void){

	int a[5] = { 1, 2, 3, 4, 5 };
	printf("%d, %d, %d\n", *(a + 2) + 1, *&a[1], *a);
	printf("%#.8x, %#.8x, %#.8x\n", a, a + 1, &a[1] + 1);

}
#endif

// 7
#if 0
void main(void){

	short a[4] = { 1, 2, 3, 4 };
	printf("%d %d\n", *a, a[0]);
	printf("%d %d\n", *(a+1), a[1]);
	printf("%d %d\n", *(a+2), a[2]);
	printf("%d %d\n", *(a+3), a[3]);
	printf("==================\n");
	printf("%x %x\n", &a[0], a);
	printf("%x %x\n", &a[1], a+1);
	printf("%x %x\n", &a[2], a+2);
	printf("%x %x\n", &a[3], a+3);
}
#endif

// 8
#if 0
void main(void){

	int a[4] = { 1, 2, 3, 4 };
	int *p = a; 
	//printf("%#x %#x\n", p, a);
	//int *p = &a;
	//printf("%#x %#x\n", p, a);
	//int *p = &a[0];
	//printf("%#x %#x\n", p, a);

	printf("%d %d\n", *p, p[2]);
}
#endif

// 9
#if 0
int Max_Find(int size, int *p_a)
{
	int i, max = -1;
	for (i = 0; i < size; i++)
	{
		if (p_a[i] > max){
			max = p_a[i];
		}
	}
	return max;
}


void main(void){

	int a[10] = { 40, 30, 20, 90, 60, 80, 24, 100, 54, 32 };
	printf("%d\n", Max_Find(SIZE(a), a));

}
#endif

// 10
#if 0
char * Name_Return(void){
	static char name[100] = "Youk ChangSu";
	return name;
}
void main(void){
	char *p;
	p = Name_Return();
	printf("%s\n", p + 5);
}
#endif

// 11
#if 0
void Name_Edit(char *p){
	p[0] = 'H';
	p[5] = 'G';
}

void main(void){
	char name[100] = "hong gildong"; 
	Name_Edit(name);
	printf("%s\n", name);
}
#endif


// 12
#if 0
void main(void){
	char *p = "HiSCSA";
	char a[3][10] = { "Hi", "SCSA", "SAMSUNG" };
	printf("%s\n", p + 2);

	printf("%c\n", p[3]);

	printf("%s\n", a[1]);

	printf("%s\n", &a[2][3]);
}
#endif

// 13
#if 0
void main(void){
	char days[7][10] = { "Sunday", "Monday", "Tuesday", \
		"Wednesday", "Thursday", "Friday", "Satursday" };
	for (int i = 0; i < 7; i++)
	{
		printf("%s\n", days[i]);
	}
}
#endif


// 14
#if 1
char * Week_Calc(int num){
	static char days[7][10] = { "Sunday", "Monday", "Tuesday", \
		"Wednesday", "Thursday", "Friday", "Satursday" };

	return days[num];
}

void main(void){

	int n;
	scanf("%d", &n);
	printf("%s\n", Week_Calc(n));

}
#endif


// 15
#if 0
int cal_length(char *s){
	int length = 0;
	while (*s){
		length++;
		s++;
	}
	return length;
}

void main(void){

	printf("%d\n", cal_length("Honggildong"));
}
#endif



