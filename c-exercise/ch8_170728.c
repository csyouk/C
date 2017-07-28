#include <stdio.h>

// change endian (little -> big)
#if 0
#include <stdio.h>
union uni
{
	int a;
	char b[4];
};

int Change_Endian(int data);

void main(void){
	int a = 0x12345678;

	printf("%#.8x => %#.8x", a, Change_Endian(a));

	//union uni x = { 0x12345678, 0xEF };
}

int Change_Endian(int data){

	//union uni z, x = {data}; // c 표준에서는 초기화자로 변수를 쓰지 못한다.
	// or



	// sol 1
	//union uni z, x;
	//x.a = data;
	//for (int i = 0; i < sizeof z.a; i++)
	//{
	//	z.b[3 - i] = x.b[i];
	//}
	//return z.a;

	// sol 2
	union uni x;
	x.a = data;
	for (int i = 0; i < sizeof x.a / 2; i++)
	{
		char tmp;
		tmp = x.b[3 - i];
		x.b[3 - i] = x.b[i];
		x.b[i] = tmp;
	}
	return x.a;
}
#endif


#if 0
struct st1
{
	unsigned char a;
	int b;
	unsigned short c;
} x = { 0xEF, 0x12345678, 0xABCD };

struct st2
{
	unsigned char a;
	unsigned short b;
	int c;
} y = {0xEF, 0xABCD, 0x12345678};

struct st3
{
	unsigned char a;
	unsigned char b;
	unsigned char c;
} z = {0x12, 0xAB, 0x78};

struct st4
{
	int a;
	char b;
	short c;
} k = { 0x12345678, 'B', 0xABCD };
void main(void){
	int arr_a[4] = { 0xBDEF0110,102,101,-84 };
	
	printf("a=%x, b=%x, c=%x\n", x.a, x.b, x.c);
	printf("&x.a=%#.8x, b=%x, c=%x\n", x.a, x.b, x.c);

	printf("&x = %#x\n", &x);
	printf("z = %#x\n", z);
	printf("x = %#x\n", x);
	printf("k = %#x\n", k);

	printf("&arr_a = %#x\n", arr_a);
	printf("arr_a[0] = %#x\n", arr_a[0]);

	//printf("%d\n", sizeof z);
}
#endif

#if 0

union uni
{
	int a;

	struct st
	{
		long long x;
		int y;
	} st_data;
} uni_data = {0x12345678};

void main(){
	printf("size of uni_data = %dB\n", sizeof(uni_data));
}
#endif

#if 0
union uni
{
	int a;

	struct st
	{
		char x[4];
		int y;
	} st_data;
} uni_data = { 0x12345678 };

void main(){

	uni_data.st_data.y = 0xABCDE89;
	printf("%#.8x\n", uni_data.st_data.y);
	printf("%#.8x\n", uni_data.a);
	printf("%#.8x\n", uni_data.st_data.x[0]);
	printf("%#.8x\n", uni_data.st_data.x[1]);
	printf("%#.8x\n", uni_data.st_data.x[2]);
	printf("%#.8x\n", uni_data.st_data.x[3]);




}
#endif

#if 0
enum color{white, black, yellow, red};

enum fruit{apple=2, banana, watermelon=-2, grape, pineapple=2};

void main(void){
	printf("%d %d %d %d\n", white, black, yellow, red);
	
	//printf("sizeof white = %d\n", sizeof white);
	//printf("sizeof color = %d\n", sizeof enum);

	printf("%d %d %d %d %d\n", apple, banana, watermelon, grape, pineapple);

}
#endif

#if 0
enum color{ white, black, yellow, red };
char * ctable[] = { "white", "black", "yellow", "red" };

void main(void)
{
	int i;
	enum color pen = white;
	//int pen = white; 위의 식과 실질적으로 하는 행위가 동일하다. 단지 타입만 다를 뿐. 
	for (int i = 0; i < 8; i++)
	{
		printf("%d => %s\n", pen, ctable[pen]);
		pen++;
		if (pen > red) pen = white;
	}
}

#endif


#if 0
#define MAX 10
struct Student
{
	int score;
	char name[20];
};

struct Student students[MAX];

void record_user_info(void){
	for (int i = 0; i < MAX; i++)
	{
		scanf("%s", students[i].name);  // 배열의 멤버 ==> 문자열.
		scanf("%d", &(students[i].score));
		//scanf("%d", &students[i].score); // 바로 위 문장과 동일 하다.
	}
}

void sort_ascending(void){
	struct Student tmp;

	for (int i = 0; i < MAX - 1; i++)
	{
		for (int j = i; j < MAX; j++)
		{
			if (students[i].score > students[j].score){
				tmp = students[j];
				students[j] = students[i];
				students[i] = tmp;
			}
		}
	}
}

int cal_avg(void){
	int sum = 0;
	for (int i = 0; i < MAX; i++)
	{
		sum += students[i].score;
	}
	return sum / 10;
}

void show_all(void){
	for (int i = 0; i < MAX; i++)
	{
		printf("student name : %s / student score : %d\n", students[i].name, students[i].score);
	}
}


void main(){

	// record
//cs 10
//ys 20
//peter 30
//mike 20
//nancy 2
//hong 20
//su 20
//lee 20
//kim 15
//jeon 10

	record_user_info();
	sort_ascending();
	printf("total avg : %d\n", cal_avg());
	show_all();

}

#endif

#if 0

struct 
{
	int a;
	char b;
} x,y,z;

void main(void){

	//x = { 100, 'A' }; // 불가하다.
}

#endif

#if 0
int a = 3;
//int b = a;

void main(){
	float f = 5 / 3;
	printf("%d\n", 5 / 3 );    // 1
	printf("%\n", 5 / 3);     // 0.000000
	printf("%f\n", f);         // 1.000000
	printf("%f\n", 5.f / 3);   // 1.666667
	printf("%f\n", 5.f / 3.f); // 1.666667

	long double ld = 3.1;
	printf("%f", ld);
}
#endif