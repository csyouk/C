#if 0
#include <stdio.h>
#define MAX 20000
#define N_FINISH 0
int n;
int cnt;
int seq[MAX];
int container[MAX];

void swap(int *p, int *q)
{
	int temp = *p;
	*p = *q;
	*q = temp;
}

void mix()
{
	//for (int i = 0; i < n; i++)
	//{
	//	//container[seq[i] - 1]
	//}

	//if (seq[i] == container[i]) continue;
	int temp = container[0];
	container[0] = container[seq[0] - 1];
	container[seq[0] - 1] = 
}

int is_finish()
{
	for (int i = 0; i < n; i++)
	{
		if (i != container[i]) return N_FINISH;
	}
	return !N_FINISH;
}
void main(void){

	freopen("170811_jungol.txt", "r", stdin);

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &seq[i]);
		container[i] = i + 1;
	}

	do{
		mix();
		cnt++;
	} while (!is_finish());

	printf("%d", cnt);
}
#endif