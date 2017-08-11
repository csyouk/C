#include <stdio.h>
#include <time.h>
#include "string.h"
#include "pointer_string_lib.h"

#if 0
void main(void)
{
	char a[4] = {1,2,3,4};

	char *p = a;

	++*p;
	printf("%x  ", p);
	for (int i = 0; i < 4; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	*p++;
	printf("%x  ", p);
	for (int i = 0; i < 4; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");


	(*p)++;
	printf("%x  ", p);
	for (int i = 0; i < 4; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}
#endif


#if 0
void main(void)
{
	for (int i = 0; i < 10; i++)
	{
		printf("h");
	}
	printf("\n");

	printf("i = %d\n", i); // error
}
#endif

#if 0

char s[1024 * 1024 * 100] = { 'A' };
char d[1024 * 1024 * 100] = { -1 };

void disp(char *p){
	while (*p)
	{
		printf("%c", *p);
		p++;
	}
	printf("\n");
}

void init()
{
	for (int i = 0; i < sizeof(d)-1; i++)
	{
		s[i] = 'A';
		d[i] = 3;
	}
}

void main(){

	clock_t begin;
	clock_t end;
	double time_spent;




	init();
	begin = clock();
	str_copy(d, s);
	end = clock();
	time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("mycode time spent : %f\n", time_spent);


	init();
	begin = clock();
	str_copy_with_designated_length(d, s, 1024 * 1024 * 100);
	end = clock();
	time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("mycode-designated len, time spent : %f\n", time_spent);

	init();
	begin = clock();
	str_copy_with_use_register(d, s);
	end = clock();
	time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("mycode use register, time spent : %f\n", time_spent);

	init();
	begin = clock();
	strcpy_apple(d, s);
	end = clock();
	time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("apple time spent : %f\n", time_spent);


	init();
	begin = clock();
	strcpy_apple(d, s);
	my_strcpy(d, s);
	end = clock();
	time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("stackoverflow time spent : %f\n", time_spent);

	init();
	begin = clock();
	strcpy(d, s);
	end = clock();
	time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("library time spent : %f\n", time_spent);



}
#endif

#if 0
#include <stdlib.h>
#include <time.h>
#define RANDOM(mini, maxi) ((rand() % (maxi - (mini - 1))) + (mini))
void main(void)
{
	srand(time(NULL));

	int mini, maxi;
	scanf("%d%d", &mini, &maxi);

	printf("Random %d to %d\n", mini, maxi);

	for (int i = mini; i < maxi; i++)
	{
		printf(" %d", RANDOM(mini, maxi));
	}
}
#endif

#if 0
#include <stdio.h>

#pragma warning (disable : 4101 4700)
#pragma warning (once : 4552)
#pragma warning (error : 4700)

void main(void)
{
	unsigned int a, b; //(C4101 : b 미사용)

	a + 1;		//(C4552 : "+" has no effect)
	a >> 4;		//(C4552 : ">>" has no effect)
	a = a;		//(C4700 : use not initialized a)
}
#endif


#if 0
#include <stdio.h>

#define SOUND_DEVICE_TYPE	1

void main(void)
{
#if !SOUND_DEVICE_TYPE
	printf("사운드 장치를 사용하지 않음\n");

#else
#error CODE 1590aa: Unknown Device!

#endif
	printf("사운드 모드 = %d\n", SOUND_DEVICE_TYPE);
}
#endif

#if 0
#include <stdio.h>

#define SOUND_DEVICE_TYPE	0

void main(void)
{
#if SOUND_DEVICE_TYPE == 1
	printf("사운드 장치를 사용하지 않음\n");
#else
	printf("CODE 15 : Unknown Device!\n");
#endif

#if defined SOUND_DEVICE_TYPE
	printf("define SOUND_DEVICE_TYPE\n");
#else
	printf("not define SOUND_DEVICE_TYPE\n");
#endif

#if !defined SOUND_DEVICE_TYPE
	printf("define SOUND_DEVICE_TYPE\n");
#else
	printf("not define SOUND_DEVICE_TYPE\n");
#endif
}
#endif



#if 0
void main(void)
{
	int a = 1;
#if !a
	printf("사운드 장치를 사용하지 않습니다.\n");
#elif a== 1
	printf("STREO 모드 장치 사용\n");
#else
	printf("CODE 15 : Unknown device!\n");
#endif
	printf("사운드 모드 = %d\n", a);

	a = 1;

#if a == 0
	printf("a == 1 %d \n", a);
#endif

#if a == 1
	printf("a == 1 %d \n", a);
#endif

#if MODE == 0.1
	printf("a == 1 %d \n", a);
#endif


}
#endif


#if 0
#include <stdio.h>

#define SOUND_DEVICE_TYPE	0

void main(void)
{
#if !SOUND_DEVICE_TYPE
	printf("사운드 장치를 사용하지 않음\n");

#elif SOUND_DEVICE_TYPE == 1
	printf("STEREO 모드 장치 사용\n");

#else
	printf("CODE 15 : Unknown Device!\n");

#endif
	printf("사운드 모드 = %d\n", SOUND_DEVICE_TYPE);
}
#endif

#if 0
#define DEBUG

void main(void)
{
#ifdef DEBUG
	#undef DEBUG
#endif

#ifdef DEBUG
	printf("%s", "debug msg ..\n");
#endif

#undef TEST
//printf("%s", TEST);

}
#endif



#if 0
#define ABS(x) ((x > 0) ? x : -(x))
#define SWAP(p,q) {int t = *(p); \
					*(p) = *(q); \
					*(q) = t;}

#define PRT(x) printf("NO_"#x" = %d\n", NO_##x)

#define ARR_SIZE(x) (sizeof(x)/sizeof((x)[0]))

int NO_1 = ~0x1fafbfcf;
int NO_2 = 263;
int NO_A = 152;

struct st
{
	int a;
};

typedef struct st STUDENT;

typedef struct stt
{
	int a;
	char b;
} STU;

void main(void)
{
	printf("%d\n", ABS(-5));

	int x = 10, y = 20;
	printf("%d %d\n", x, y);
	SWAP(&x, &y)
	printf("%d %d\n", x, y);


	PRT(1);
	PRT(2);
	PRT(A);

	printf("hello""my" "dear"	"welcome"
		"have a good time\n");

	int a[4] = { 1, 2, 3, 4 };
	printf("cnt of array a %d\n", ARR_SIZE(a));
	printf("cnt of array a %d\n", ARR_SIZE(a+1));

	STUDENT xxxx = { 1 };
	printf("--> %d\n", xxxx);

	//STUDENT x;
	//x = 3;

	//printf("--> %d\n", x);

	STU xx = { 3, 'A' };
	printf("%d %c\n", xx.a, xx.b);

}
#endif