#include <stdio.h>

// K
#if 1
//1
//1     1
//1     2     1
//1     3     3     1
//1     4     6     4     1
void main(void)
{
	//printf("%3d", 1);
}
#endif

// J
#if 0
int container[10][10];
void main(void)
{

	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		container[i][0] = 1;
	}
	for (int j = 0; j < n; j++)
	{
		container[0][j] = 1;
	}


	for (int i = 1; i < n; i++)
	{
		for (int j = 1; j < n; j++)
		{
			container[i][j] = container[i - 1][j] + container[i][j - 1];
		}
	}



	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d ", container[i][j]);
		}
		printf("\n");
	}

}
#endif

// I
#if 0
#include <stdio.h>
char charset[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char container[100][100];
int main(void)
{
	int n;
	int cnt = 0;

	scanf("%d", &n);
	for (int j = n-1; j >= 0; j--)
	{
		for (int i = n-1; i >= 0; i--)
		{
			container[i][j] = charset[cnt];
			cnt++;
			if (!(cnt % 26)) cnt = 0;
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%c ", container[i][j]);
		}
		printf("\n");
	}

	return 0;
}
#endif

// 2차원 배열의 동적할당 문제는 추후에 다룰 문제이다. 
// 이 접근법은 잠시 보류한다.
#if 0
#include <stdio.h>
#include <malloc.h>
int main(void)
{
	int n;
	char **p;
	char charset[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int cnt = 0;

	scanf("%d", &n);

	*p = malloc(n * n * sizeof(char));

	for (int j = n-1; j >= 0; j--)
	{
		for (int i = n-1; i >= 0; i--)
		{
			p[i][j] = charset[cnt];
			cnt++;
			if (!(cnt % 26)) cnt = 0;
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d ", p[i][j]);
		}
		printf("\n");
	}

	return 0;
}
#endif

// H
#if 0

#include <stdio.h>
#include <malloc.h>
void main(void)
{
	int player, same_detect;
	int *strategy;

	scanf("%d", &player);

	strategy = malloc(player * sizeof(int));

	for (int i = 0; i < player; i++)
	{
		scanf("%d", &strategy[i]);
	}

	for (int i = 0; i < player - 1; i++)
	{
		same_detect = 0;
		for (int j = i+1; j < player; j++)
		{
			if (strategy[i] == strategy[j])
			{
				strategy[j] = 0;
				same_detect = 1;
			}
		}
		if (same_detect) strategy[i] = 0;
	}

	for (int i = 0; i < player; i++)
	{
		printf("%d\n", strategy[i]);
	}
}
#endif

// G
#if 0
// greatlovestoomustbeendured abs // NO
int is_match(char *p, char *q){
	int size = 0, b_size=0, m_size=0;
	char * b_q = q, *b_p=p;

	while (*q){
		size++, q++;
	}
	q = b_q;
	b_size = size;

	while (*p)
	{
		if (*p == *q){
			// backup
			b_p = p;
			b_q = q;
			b_size = size;
			while (size--)
			{
				if (*p != *q) break;
				m_size++;
				p++, q++;
			}
			// restore
			p = b_p;
			q = b_q;
			size = b_size;
			if (m_size == size) return 1;
			m_size = 0;
		}
		p++;
	}
	

	return 0;
}
void main(void)
{
	char src[51] = {0};
	char target[51] = { 0 };

	scanf("%s %s", &src, &target);

	printf("%s", (is_match(src, target)) ? "YES" : "NO");
}
#endif

// f
#if 0

void main(void)
{
	char c;
	scanf("%c", &c);

	if ('a' <= c && c <= 'z'){
		for (char i = 'a'; i <= c; i++)
		{
			printf("%c", i);
		}
		return;
	}

	if ('A' <= c && c <= 'Z'){
		for (char i = c; i <= 'Z'; i++)
		{
			printf("%c", i);
		}
		return;
	}

	printf("Error");
}
#endif

// e
#if 0
void find_primes(int min, int max, int *p_min, int *p_max, int *p_cnt)
{
	int i,j,min_flag = 0;
	for (i = min; i <= max; i++)
	{
		if (i == 1) continue;

		for (j = 2; j < (i/2 + 1); j++)
		{
			if (i%j == 0) {
				break;
			}
		}

		if (j == (i/2 + 1)){
			(*p_cnt)++;
			if (min_flag == 0) {
				min_flag = !min_flag;
				*p_min = i;
			}
			*p_max = i;
		}

	}
	if (min == 2) min = 2;
}
void main(void)
{
	int min, max, tmp, prime_min=0, prime_max=0, sum=0, cnt=0;
	int *p_min = &prime_min, *p_max = &prime_max, *p_cnt = &cnt;
	scanf("%d%d", &min, &max);
	if (min > max){
		tmp = max;
		max = min;
		max = tmp;
	}

	find_primes(min, max, p_min, p_max, p_cnt);
	printf("%d\n%d", cnt, prime_min + prime_max);
}
#endif

// d
#if 0
void main(void)
{
	int a, i=0;
	scanf("%d", &a);
	if (a < 14) {
		printf("14");
		return;
	}


	while (1)
	{
		if (!((a - i) % 14)) {
			printf("%d", a - i);
			return;
		}
		if (!((a + i) % 14)) {
			printf("%d", a + i);
			return;
		}

		i++;
	}

}
#endif

// c
#if 0
int main(void)
{
	unsigned int a, length=1;
	scanf("%d", &a);

	while (a /= 10){
		length++;
	}
	printf("%d", length);

	return 0;
}
#endif

// b
#if 0
char toUpper(char c){
	if (!('a' <= c && c <= 'z')) return c;
	c = c - 'a' + 'A';
	return c;
}
void reverse_print(char *p, int n){
	int i;
	for (i = 1; i < n+1; i++)
	{
		printf("%c", toUpper(p[-i]));
	}
}
int main(void)
{
	char a[51] = { 0 };
	gets(a);
	int k = 0;
	int cnt = 0;

	while (a[k]){
		if (a[k] == ' ' || a[k] == '.' || a[k] =='!')
		{
			reverse_print(a + k, cnt);
			cnt = 0;
			printf("%c", a[k]);
		}
		else
		{
			cnt++;
		}
		k++;
	}
	reverse_print(a + k, cnt);
	printf("\n");
}

#endif