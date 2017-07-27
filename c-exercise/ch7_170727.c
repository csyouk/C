////#include <stdio.h>
////
////void main(void){
////	char a[5] = "hello";
////	a[5] = "hello";
////	printf("%s", a);
////}
//
////#include <stdio.h>
////
////int aa[][4];
////int aa[1][];
////
////void main(void){
////
////	int a[6][2] = {0,1,2,3,4,5,6,7,8,9,10,11};
////
////	printf("a = %#x\n", a);
////	printf("a[0] = %#x\n", a[0]);
////	printf("a[0][0] = %#x\n", a[0][0]);
////	printf("===========================\n");
////	printf("&a = %#x\n", &a);
////	printf("&a[0] = %#x\n", &a[0]);
////	printf("&a[0][0] = %#x\n", &a[0][0]);
////
////
////	int b[0] = { 1, 2, 3, 4 };
////	int c[][4] = { 1, 2, 3, 4 };
////	int d[][4];
////	int e[4][];
////}
//
//
//// 14
////#include <stdio.h>
////void main(){
////	int a[4][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 };
////	int b[4][4] = { 0 };
////
////	// transpose
////	
////	for (int i = 0; i < 4; i++)
////	{
////		for (int j = 0; j < 4; j++)
////		{
////			b[3-j][3-i] = a[i][j];
////		}
////	}
////
////	for (int i = 0; i < 4; i++)
////	{
////		for (int j = 0; j < 4; j++)
////		{
////			printf("%2d ", b[i][j]);
////		}
////		printf("\n");
////	}
////}
//
//// 15
////#include <stdio.h>
////void main(){
////	int a[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
////	int b[4][3] = { 0 };
////
////	// transpose
////
////	for (int i = 0; i < 3; i++)
////	{
////		for (int j = 0; j < 4; j++)
////		{
////			b[3 - j][2 - i] = a[i][j];
////		}
////	}
////
////	for (int i = 0; i < 4; i++)
////	{
////		for (int j = 0; j < 3; j++)
////		{
////			printf("%2d ", b[i][j]);
////		}
////		printf("\n");
////	}
////}
//
////#include <stdio.h>
////void main(){
////	int a[2][4] = { 1, 2, 3, 4, 5, 6, 7, 8 };
////	int b[4][2] = { 0 };
////
////	// transpose
////
////	for (int i = 0; i < 2; i++)
////	{
////		for (int j = 0; j < 4; j++)
////		{
////			b[3 - j][1 - i] = a[i][j];
////		}
////	}
////
////	for (int i = 0; i < 4; i++)
////	{
////		for (int j = 0; j < 2; j++)
////		{
////			printf("%2d ", b[i][j]);
////		}
////		printf("\n");
////	}
////}
//
//
////#include <stdio.h>
////void main(){
////	int a[1][4] = { 1, 2, 3, 4 };
////	int b[4][1] = { 0 };
////
////	// transpose
////
////	for (int i = 0; i < 1; i++)
////	{
////		for (int j = 0; j < 4; j++)
////		{
////			b[3 - j][0 - i] = a[i][j];
////		}
////	}
////
////	for (int i = 0; i < 4; i++)
////	{
////		for (int j = 0; j < 1; j++)
////		{
////			printf("%2d ", b[i][j]);
////		}
////		printf("\n");
////	}
////}
//
//// generate random
////#include <stdio.h>
////#include <stdlib.h>
////void main(void){
////	for (int i = 0; i < 10; i++)
////	{
////		printf("%d ", rand());
////	}
////}
//
//// 16 ~ 17
////#include <stdio.h>
////#include <stdlib.h>
////#include <time.h>
////#define W_SAME '\2'
////#define W_YOU_ '\1'
////#define W_PC__ '\0'
////
////void main(){
////
////	int my_strategy;
////	int com_strategy;
////	char rsp[3][5] = { "가위", "바위", "보 " };
////	char winner[3][5] = { "PC  ", "You ", "Same" };
////
////	// table index의 row ==> pc strategy.
////	// table index의 col ==> my strategy.
////	// index는 rsp 테이블을 참조한다. 
////	char table[3][3] = {
////		{ W_SAME, W_YOU_, W_PC__ },
////		{ W_PC__, W_SAME, W_YOU_ },
////		{ W_YOU_, W_PC__, W_SAME }
////	};
////
////	srand((unsigned int)time(NULL));
////
////	// test case
////	// printf("PC : %s / You :  %s /  Winner : %s\n", rsp[0], rsp[0], winner[table[0][0]]);
////
////	printf("가위 바위 보 시작 !!\n");
////
////	for (int i = 0; i < 5; i++)
////	{
////		scanf("%d", &my_strategy);
////		if (my_strategy < 0 || my_strategy > 2){
////			printf("0 ~ 2 사이의 수를 넣어주세요.\n");
////			continue;
////		}
////		com_strategy = rand() % 3;
////		printf("PC : %s / You :  %s /  Winner : %s\n",  \
////			rsp[com_strategy], rsp[my_strategy] , winner[table[com_strategy][my_strategy]]);
////	}
////}
//
//
//// 18
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//#define MAX_SEED 25
//#define ROW_MAX 5
//#define COL_MAX 5
//#define UNTOUCHED -1
//#define SWAPPED -1
//#define BINGO_MARK 0
//
//
//int seeds[MAX_SEED] = { 0 };
//int check_table[MAX_SEED] = { -1, -1, -1, -1, -1,
//							  -1, -1, -1, -1, -1,
//							  -1, -1, -1, -1, -1,
//							  -1, -1, -1, -1, -1,
//							  -1, -1, -1, -1, -1 };
//int bingo_table[ROW_MAX + 1][COL_MAX + 1] = { 0 };
//
//void Set_Seeds(void);
//void Show_Seeds(void);
//void Create_Bingo_table(void);
//void Init_Game(void);
//
//void Find_Num(int num);
//void Display_Table(void);
//int Check_Bingo(void);
//
//
//void main(){
//
//	srand((unsigned int)time(NULL));
//	
//	Create_Bingo_table();
//
//	Init_Game();
//}
//
//void Init_Game(){
//	int val;
//	for (;;)
//	{
//		printf("번호를 입력하세요. : ");
//		scanf("%d", &val);
//		printf("\n");
//		Find_Num(val);
//		Display_Table();
//		//if (Check_Bingo())
//		//{
//		//	printf("\nBingo!\n");
//		//	return;
//		//}
//
//	}
//}
//
//void Create_Bingo_table(void){
//	
//	int cache = -1;
//	int act = 0;
//	Set_Seeds();
//	Show_Seeds();
//
//	printf("Generating Bingo Table.....\n");
//
//	while (1)
//	{
//		int index = rand() % MAX_SEED;
//		if ((cache != index) && (seeds[index] != SWAPPED))
//		{
//			cache = index;
//			check_table[act] = seeds[index];			
//			seeds[index] = SWAPPED;
//			act++;
//		}
//		if (act == MAX_SEED) break;
//	}
//
//
//	printf("Generating Bingo Table Done!!\n");
//	printf("Generated Bingo Table is shown below..\n");
//
//	for (int i = 0; i < ROW_MAX; i++)
//	{
//		for (int j = 0; j < COL_MAX; j++)
//		{
//			bingo_table[i][j] = check_table[ROW_MAX*i + j];
//			printf("%2d ", bingo_table[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void Set_Seeds(void){
//	printf("Generating Seeds..\n");
//	for (int i = 0; i < MAX_SEED; i++)
//	{
//		seeds[i] = '\1' + i;
//	}
//	printf("Generating Seeds done.\n");
//}
//
//void Show_Seeds(void){
//	printf("Expose Seeds..\n");
//	printf("seeds[25] : ");
//	for (int i = 0; i < MAX_SEED; i++)
//	{
//		printf("%d ", seeds[i]);
//	}
//	printf(" : DONE.\n");
//}
//
//
//
//void Find_Num(int num)
//{
//	if (num < 1 || num > 25)
//	{
//		printf("1 ~ 25 사이의 숫자를 입력해주십시오.\n\n");
//		return;
//	}
//
//	for (int i = 0; i < ROW_MAX; i++)
//	{
//		for (int j = 0; j < COL_MAX; j++)
//		{
//			if (bingo_table[i][j] == num)
//			{
//				bingo_table[i][j] = BINGO_MARK;
//				return;
//			}
//		}
//	}
//}
//
//
//void Display_Table(){
//	for (int i = 0; i < ROW_MAX; i++)
//	{
//		for (int j = 0; j < COL_MAX; j++)
//		{
//			bingo_table[i][j] = check_table[ROW_MAX*i + j];
//			printf("%2d ", bingo_table[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//int Check_Bingo(){
//	for (int i = 0; i < ROW_MAX; i++)
//	{
//		for (int j = 0; j < COL_MAX; j++)
//		{
//			//bingo_table[i][j] = check_table[ROW_MAX * i + j];
//		}
//	}
//}
//
//
//
//
//
//
//
//
//
//
//
//
