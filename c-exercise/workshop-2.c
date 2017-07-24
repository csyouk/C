#include <stdio.h>

#define WORKSHOP2 0

#if WORKSHOP2

#define VARIABLE 0
#define WS7 0
#define WS8 1
#define WS14 0
#define WS15 0

void main(void){
#if VARIABLE
	int ^data;
	int data^;
	int main;
	int 3star;
	int star3;
	int _abCD;
	int new-purpose;
	int new=purpose;
#endif 

#if WS7
	int value1, value2;
	scanf("%c", &value1);
	printf("%c \n", value1 - 32);

	scanf("%c", &value2);
	printf("%c \n", value2 - 32);
#endif

#if WS8
	//char product[];
	//int hdd_size;
	//char odd;
	//float display;

	//gets(product);
	//scanf("%d", &hdd_size);
	//scanf(" %c", &odd);
	//scanf("%f", &display);

	char product[] = "삼성 노트북9 Lite";
	int hdd_size = 128;
	char odd = 'n';
	float display = 33.7;


	printf("%-20s%3s%5s%11s\n", "제품명", "HDD", "ODD", "디스플레이"); 
	printf("%-20s%3d%5c%11.1f", product,  hdd_size, odd, display);

#endif

#if WS14
	int a = -5, b, c;
	//printf("%d", 10/3);  // 3
	//printf("%d", -a);    // 5
	//printf("%d", -3*-4%+6/5);   // 0
	//printf("%d", c = b = 10 % 4);   // 2
	//printf("%d", 1234/100%10);  // 2
	//printf("%d", a *= 10 -2);
#endif

#if WS15
	int a = 6, b = 2, c;
	c = a / b++;
	printf("%d, %d, %d\n", a++, b, c);
#endif
}
#endif