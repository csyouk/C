#include <stdio.h>

#if 0

struct st_info
{
	short age;
	char name[18];
	unsigned int id;
	char tel[16];
};

void main(){
	struct st_info cs = {31, "youk", 1, "010-9570-0441"};

	printf("%s\t%s\t%s\t%s\n", "사번", "이름","나이", "연락처");
	printf("%d\t%s\t%hd\t%s\n", cs.id, cs.name, cs.age, cs.tel);
}

#endif

#if 0

union uni
{
	long long a;
	struct st
	{
		short b[4];
		int c[2];
	} st_data;

} uni_data = { 0x1234567890ABCDEFLL };

//uni_data.st_data.c[1] = 0x11223344; // 식이 필요하다고 오류가 나온다. 왜 일까?

void main(void){

	uni_data.st_data.c[1] = 0x11223344;

	printf("%x, %x, %llx\n", uni_data.st_data.b[2], uni_data.st_data.b[3], uni_data.a);
}

#endif


#if 0
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int is_num_exist_in_arr(int num, int a[5][5], int row, int col){
	int exist = 1; // 0 means not exist
	if (a[row][col] == 0) return exist;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (a[i][j] == num) return exist;
		}
	}
	return !exist;
}

void main(){
	
	int num;
	char a[5][5] = { 0 };
	
	srand((unsigned int)time(NULL));

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			num = rand() % 100 + 1;

			if (is_num_exist_in_arr(num, a, i, j))
			{
				a[i][j] = num;
			}
		}
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}
	
}
#endif


#if 0

void main(void){


	int null_point = 0;

	char name[101] = { 0 };

	gets(name);

	for (null_point = 0; null_point < sizeof name; null_point++)
	{
		if (name[null_point] == 0) break;
	}

	for (int i = null_point - 1; i > -1; i--)
	{
		printf("%c", name[i]);
	}
	

}
#endif


#if 0

void main(void)
{
	int target_length = 0;
	int rep;
	char raw[51] = { 0 };
	char target[51] = { 0 };

	scanf("%s %s", raw, target);

	for (int i = 0; i < sizeof target; i++)
	{
		if (target[i] == 0) break;
		target_length++;
	}

	//printf("%d", target_length);

	for (int i = 0; i < sizeof raw; i++)
	{
		rep = 0;
		if (raw[i] == target[0])
		{
			for (int j = 0; j < target_length; j++)
			{
				// hongi gil 경우 오류가 나올 위험있음.
				if (raw[i + j] == target[j])
				{
					rep++;
				}
			}

			if (rep == target_length)
			{
				break;
			}
		}
	}

	if (rep == target_length)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
}

#endif

#if 0

// input
//1 7 4 0 9 4 8 8 2 4
//5 5 1 7 1 1 5 2 7 7
//1 4 2 3 2 2 1 6 8 5
//7 6 1 8 9 2 7 9 5 4
//3 1 2 3 3 4 1 1 3 8
//7 4 2 7 7 9 3 1 9 8
//6 5 0 2 8 6 0 2 4 8
//6 5 0 9 0 0 6 1 3 8
//9 3 4 4 6 0 6 6 1 8
//4 9 6 3 7 8 8 2 9 1

// output
//1 7 53

int check_sum(int bmp[10][10], int start_row, int start_col)
{
	int sum = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			sum += bmp[start_row + i][start_col + j];
		}
	}
	return sum;
}


void main(void)
{
	int max_row, max_col, partial_sum = 0, sum = -1;
	int bmp[10][10];

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			scanf("%d", &bmp[i][j]);
		}
	}


	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			partial_sum = check_sum(bmp, i, j);
			if (partial_sum > sum)
			{
				max_row = i;
				max_col = j;
				sum = partial_sum;
			}
		}
	}

	
	printf("%d %d %d\n", max_row, max_col, sum);


}

#endif



#if 0

void sort_ascending(int data[3])
{
	int tmp;
	for (int i = 0; i < 2; i++)
	{
		for (int j = i; j < 3; i++)
		{
			if (data[i] > data[j])
			{
				tmp = data[i];
				data[i] = data[j];
				data[j] = tmp;
			}
		}
	}

}

int strike_cnt(int random[3], int user[3])
{
	int ball = 0; // 0 means ball, 1 means strike
	int match_cnt = 0;
	sort_ascending(random);
	sort_ascending(user);

	for (int i = 0; i < 3; i++)
	{
		if (random[i] == user[i])
		{
			match_cnt++;
		}
	}

	return (match_cnt == 3) ? !ball : ball;
}

void main(main)
{
	int random[3] = { 0 };
	int user[3] = { 0 };
	int trial_cnt = 0;



	printf(">>>> 야구 게임 <<<<\n");
	printf("규칙 : 1~9 사이, 중복없이 3자리 입력\n");
	printf("입력 : ");
	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &random[i]);
	}



}


#endif


#if 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int cnt_strike(int random[3], int user[3])
{
	int match_cnt = 0;
	int strike = 1;

	for (int i = 0; i < 3; i++)
	{
		if (random[i] == user[i])
		{
			match_cnt++;
		}
	}

	return match_cnt;
}

int cnt_ball(int random[3], int user[3])
{
	int ball_cnt = 0;

	//if (random[3] != user[3]) ball_cnt++;

	for (int i = 0; i < 3; i++)
	{
		if (random[i] == user[i])
		{
			continue;
		}
		for (int j = 0; j < 3; j++)
		{
			if (random[i] == user[j])
			{
				ball_cnt++;
			}
		}
	}

	return ball_cnt;
}

void main(main)
{
	int strike_cnt;
	int ball_cnt;
	int random[3] = { 0 };
	//int random[3] = { 1,2,3 };
	int user[3] = { 0 };

	srand((unsigned int)time(NULL));
	for (int i = 0; i < 3; i++)
	{
		random[i] = rand();
	}

	printf(">>>> 야구 게임 <<<<\n");
	printf("규칙 : 1~9 사이, 중복없이 3자리 입력\n");
	

	for (int i = 0; i < 10; i++)
	{
		printf("입력 : ");

		for (int i = 0; i < 3; i++)
		{
			scanf("%d", &user[i]);
		}

		strike_cnt = cnt_strike(random, user);
		ball_cnt = cnt_ball(random, user);
		printf("======>");
		if (strike_cnt == 3)
		{
			printf("정답\n");
			break;
		}
		printf(" %d strike %d ball\n", strike_cnt, ball_cnt);
	}
}


#endif