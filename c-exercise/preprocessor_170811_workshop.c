// 3
#if 1
#include <stdio.h>
#define MAX 6
typedef struct st_score
{
	int no; 
	char name[30]; 	
	int age;
	int kor; int eng; int tot;
} STU;
void All_Print(STU *p)
{
	for (int i = 0; i < MAX; i++)
	{
		printf("%d %4s %3d %3d %3d");
	}
}
void One_Print(STU *p);
void Data_Input(STU *p);
void Data_Update(STU *p);
void Name_Sort(STU *p);
void Tot_Sort(STU *p);

int Menu_Disp(void)
{   
	int sel=0;
	printf("==== 신상 기록부 ===\n");
	printf(" 1) 전체출력 \n");		
	printf(" 2) 개인출력 \n");
	printf(" 3) 개인정보입력 \n");
	printf(" 4) 개인정보수정 \n");
	printf(" 5) 이름순정렬 \n");		
	printf(" 6) 성적순정렬 \n");
	printf("=================\n");
	printf(">>메뉴 선택? ");  scanf("%d", &sel);	 return sel;
}
void main(void)
{      
	int sel;
	STU score[MAX];
	//struct st_score score[MAX]={ {1,"kim",25, 80, 90, 0},\
	//{2, "lew",35, 70, 60, 0},{3, "hong",29, 80, 55,0},\
	//{4, "lee", 44, 89, 79,0},{5, "park", 37, 50, 100,0} };

	freopen("170811_ws_data_3.txt", "r", stdin);

	for (int i = 0; i < MAX; i++)
	{
		scanf("%d %s %d %d %d %d", \
			&score[i].no, \
			&score[i].name, \
			&score[i].age, \
			&score[i].kor, \
			&score[i].eng, \
			&score[i].tot);
	}

	for(;;)
	{	
		//system("cls");
		sel=Menu_Disp();
		switch(sel)
		{
		case 1:All_Print(score);break;
		case 2:One_Print(score);break;
		case 3:Data_Input(score);break;
		case 4:Data_Update(score);break;
		case 5:Name_Sort(score);break;
		case 6:Tot_Sort(score);break;
		default:printf("다시입력해주세요\n");break;
		}
	}
}
#endif

// 2
#if 0
#include <stdio.h>
char string[256];
char target[16];

int str_len(char *p)
{
	int length = 0; 
	while (*p++) length++;
	return length;
}

int find_word(char *sentence, char *word)
{
	int match_cnt = 0;
	int len = str_len(word);
	int back = 0;
	char * back_ch;
	char *back_word;

	back_word = word;

	while (*sentence)
	{
		back = len;
		back_ch = sentence;
		if (*sentence == *word)
		{
			
			while (len)
			{
				//printf("len : %d\n", len);
				if (*sentence != *word) break;
				sentence++;
				word++;
				len--;
			}
			if (!len && (*sentence == ' ')) {
				//printf("%c ", *sentence);
				match_cnt++;
				word = back_word;
			}
		}
		len = back;
		word = back_word;
		sentence++;
	}
	return match_cnt;
}

void main(void)
{
	char *p = string;
	char *q = target;

	freopen("170811_ws_data_2.txt", "r", stdin);

	//scanf("%s", p);
	gets(string);
	scanf("%s", q);

	printf("%s\n", string);
	printf("%s\n", target);
	printf("There are(is) %d word in the sentence.\n", find_word(p, q));
}

#endif

#if 0
#include <stdio.h>
char hex[] = "0123456789ABCDEF";
void hex_to_n(int val, int n)
{
}
int n_to_hex(int val, int n)
{

}
void main(void)
{
	int n;
	char op1, op2;
	printf(">>>>N 진법 연산<<<<\n");
	printf("2 ~ 16진법 입력 : ");
	scanf("%d", &n);

	printf("operand1 : ");
	scanf("%c", &op1);

	printf("operand2 : ");
	scanf("%c", &op2);

	printf("10 => ");  hex_to_n(n_to_hex(op1 + op2, n), 10);
	printf("\n");
	printf("%d  => ", n); hex_to_n(n_to_hex(op1 + op2, n), n);
	printf("\n");
}
#endif


#if 0

// 10진수의 두 수를 입력받아 n진수로 바꾸기. 
#include <stdio.h>
char hex[] = "0123456789ABCDEF";
int pow(int b, int n)
{
	if (n == 0) return 1;
	int base = b;
	while (--n) { b *= base; };
	return b;
}
int tenth(int op1, int op2) {
	return op1 + op2; 
}
int significand(int n, int decimal)
{
	return n / decimal;
}
int find_exp(int n, int base)
{
	int exp = 0;
	while (n/=base)exp++;
	return exp;
}
int n_deci(int deci, int op1, int op2)
{
	
	int val = op1 + op2;
	//printf("val ==> %d\n", val);
	//printf("significant ==> %d\n", significand(val, pow(deci, find_exp(val, deci))));
	//printf("exp ==> %d\n", find_exp(val, deci));
	while (val)
	{
		int _exp = find_exp(val, deci);
		int _pow = pow(deci, _exp);
		int _significant = significand(val, _pow);

		val -= _significant * _pow;
	
		printf("%c", hex[_significant]);

	}
}
void main(void)
{
	freopen("170811_ws_data.txt", "r", stdin);
	int op1, op2, deci;
	printf("2 ~ 16진법 입력 : ");
	scanf("%d", &deci);

	printf("operand1 : ");
	scanf("%d", &op1);
	
	printf("operand2 : ");
	scanf("%d", &op2);
	

	printf("10 => %d\n", op1+op2);
	printf("10=>%d , 8=> ", op1 + op2);
	n_deci(deci, op1, op2);

	//printf("%d", pow(2, 10));
	//printf("%d", find_exp(321, 9));

	//printf("%d %d\n", significand(321, pow(9,find_exp(321,9))), find_exp(321, 9));
}
#endif
#if 0
#include <stdio.h>
#include "BINOP.h"

struct st{ int a; char b; };
typedef struct st ST;

#define Write_Block(data, bits, value, bit) \
 ((data) = (((data) & (~((bits)<<(bit)))) | (((value) <<(bit)))))

//(data) = ((data) & (~((bits)<<(bit))) | ((value) << (bit))
void main(void)
{

	int a = -1;
	bddisp(a);
	Write_Block(a, 7, 2,0);
	bddisp(a);

	ST x = { 1, 'A' };
	printf("%d %c\n", x.a, x.b);
}
#endif