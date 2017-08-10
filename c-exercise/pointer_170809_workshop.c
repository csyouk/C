#include <stdio.h>
#include <malloc.h>
#include "pointer_string_lib.h"
// 5
#if 0
union uni
{
	int a;
	char b[4];
} x = { 0x12345678 };
void main(void){
	union uni *p = &x;
	printf("%x", p->b[2]);
}


#endif

// 4
#if 0
struct st
{
	int no; char *name; struct st *p;
};
void main(void)
{
	struct st x[3] = { { 1, "Kim", &x[1] }, { 2, "lew", &x[2] }, { 3, "park", 0 } };

	struct st *p;
	p = &x[0];
	printf("%d %c", p[1].no, p[2].name[2]);
	printf("%d %c", p->p->no, p->p->p->name[2]);
}
#endif


// 3
#if 0
struct st_info
{
	unsigned id;
	char name[8];
	unsigned short age;
	char tel[9];
};

void swap_struct(struct st_info *p, struct st_info *q)
{
	struct st_info temp = *q;
	*q = *p;
	*p = temp;
}

void Data_Print(struct st_info *p){
	printf("%9s%9s%9s%12s\n", \
		"사번", "이름", "나이", "연락처");
	for (int i = 0; i < 4; i++)
	{
		printf("%9d%9s%9d%12s\n", \
			p[i].id, p[i].name, p[i].age, p[i].tel);
		
	}
}

void Data_Input(struct st_info *p)
{
	
	//freopen("170809_data.txt", "r", stdin);
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		printf("input : ", i + 1);
		scanf("%d %s %d %s", \
			&p[i].id, &p[i].name, &p[i].age, &p[i].tel);
	}
}

void Data_Sort(struct st_info *p)
{
	int i, j;
	struct st_info temp;
	for (i = 0; i < 4 - 1; i++)
	{
		for (j = i; j < 4; j++)
		{
			if (str_comp(p[i].name, p[j].name) > 0)
			{
				//swap_struct(&p[i], &p[j]);
				swap_struct(p + i, p + j);
				/*temp = p[i];
				p[i] = p[j];
				p[j] = temp;*/
			}
		}
	}
}

void main(void)
{
	struct st_info info[4];

	Data_Input(info);
	Data_Print(info);
	Data_Sort(info);
	Data_Print(info);
}
#endif


// 2
#if 0
void main(void){
	int n=0;
	char *p;
	char name[20];
	scanf("%s", name);

	while (name[n]){
		n++;
	}

	p = calloc(n, sizeof(char));

	for (int i = 0; i < n; i++)
	{
		p[i] = name[i];
	}

	for (int i = 0; i < n; i++)
	{
		printf("%c", p[i]);
	}
}
#endif

// 1
#if 0
void main(void)
{
	int n;
	int *p;
	scanf("%d", &n);

	p = malloc(n * sizeof(int));

	for (int i = 0; i < n; i++)
	{
		scanf("%d", p + i);
	}

	for (int i = 0; i < n; i++)
	{
		printf("%d ", p[i]);
	}

}
#endif


#if 0
void main(void)
{
	int i = 0, j = 0, temp;
	char a[51] = { 0 };
	char *p_arr[10] = { 0 };
	char *p = a;

	gets(a);

	while (a[i])
	{
		if ('a' <= a[i] && a[i] <= 'z'){
			a[i] -= 'a' + 'A';
			temp = i;
			while ('a' <= a[temp + 1] && a[temp + 1] <= 'z')
			{
			
			};
			//if ('a' <= a[i + 1] && a[i + 1] <= 'z'){
			//	p_arr[j] = &a[i];
			//	p_arr[j + 1] = &a[i + 1];
			//	j++;
			//}
		}
		i++;
	}

}
#endif

#if 0
// 최대 길이 50이하인 문자열을 입력 받아 
// 단어 별로 뒤집어서 출력하는 프로그램을 작성. 단어만 뒤짚어야 함. 
// your score is 30 point.
// i12 j2je qwe!! ABC 123ab.
void main(void)
{
	int i = 0, j = 0, whitespace_i = 0;
	char a[51] = { 0 };
	char *p_arr[10] = { 0 };

	char *p = a;

	gets(a);
	
	p_arr[whitespace_i] = &a[0] - 1;
	whitespace_i++;

	while (a[i])
	{
		if (a[i] == ' ') 
		{ 
			p_arr[whitespace_i] = &a[i];
			whitespace_i++;
		}
		i++;
	}

	p_arr[whitespace_i] = &a[i];

	//while (p_arr[j])
	//{
	//	printf("%d, %c, %#.8x \n", j, *p_arr[j], p_arr[j]);
	//	j++;
	//}

	for ( j = 0; j < whitespace_i; j++)
	{
		for (char * k = p_arr[j+1] - 1; k > p_arr[j] ;k--)
		{
			if (!((('a' <= (*k)) && ((*k) <= 'z' )))){
				printf("%c", (*k));
			}
			else
			{
				printf("%c", (*k) - 'a' + 'A'); 
			}

		}
		printf(" ");
	}
}


#endif

#if 0

//주어진 문자열에서 연속 3개의 문자가 IOI 이거나 KOI인
//문자열이 각각 몇 개 있는지 찾는 프로그램을 작성하라.
//문자열은 알파벳의 대문자로만 이루어진다.
//예를 들어 "KOIOIOI"라는 문자열은 KOI 1개, IOI 2개가 포함되어 있다.

void main(void)
{
	int k_cnt = 0, i_cnt=0, i=0;
	char inputs[10000] = { 0 };
	
	scanf("%s", inputs);

	while (inputs[i])
	{
		if ((inputs[i] == 'K') && (inputs[i + 1] == 'O') && (inputs[i + 2] == 'I')){
			k_cnt++;
		}
		if ((inputs[i] == 'I') && (inputs[i + 1] == 'O') && (inputs[i + 2] == 'I')){
			i_cnt++;
		}
		i++;
	}
	
	printf("%d\n", k_cnt);
	printf("%d\n", i_cnt);
}
#endif


#if 0
// i12 j2je qwe!! ABC 123ab.
// your score is 0 hahaha
// i12 j2je qwe!! ABC 123ab.
void main(void)
{
	int i = 0, cnt = 0 ;
	char a[51] = { 0 };
	char *p = a;

	gets(a);

	while (*p){
		if ('a' <= *p && *p <= 'z'){
			*p = *p - 'a' + 'A';
		}
		p++;
	}

	p = a;

	while (*p){
		if (('A' <= *p && *p <= 'Z') || ('0' <= *p && *p <= '9')){
			cnt++;
		}

		//if (*p == ' ' || *p == '!' || *p == '.'  )
		if (!('A' <= *p && *p <= 'Z'))
		{
			for (int j = 0; j < cnt ; j++)
			{
				printf("%c", p[-j - 1]);
			}
			cnt = 0;
			printf("%c", *p);
		}

		p++;
		
	}
	for (int j = 0; j < cnt; j++)
	{
		printf("%c", p[-j - 1]);
	}
	cnt = 0;


}

#endif