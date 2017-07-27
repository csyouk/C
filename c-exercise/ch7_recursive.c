//#include <stdio.h>
//
//int calendar[11] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30 };
//
//int cal(int b)
//{
//	if (b == 1) return 0;
//	return calendar[b - 1] + cal(--b);
//}
//
//
//void main(void)
//{
//
//	int y,m,d, is_yoon;
//
//	scanf("%d %d %d", &y, &m, &d);
//
//	is_yoon = ((y % 400 == 0) || ((y % 4 == 0) && (y % 100 != 0))) ? 1 : 0;
//
//	printf("%d", cal(m) + d + is_yoon);
//	
//
//
//}

//#include <stdio.h>
//void prt(int n){
//	if (n == 0) return;
//	prt(n - 1);
//	printf("%d\n", n);   
//}
//
//void main(void){
//	int i;
//	scanf("%d", &i);
//	prt(i);
//}


//#include <stdio.h>
//
//int N;
//
//void prt(int n){
//	if (n > N) return;
//	prt(n + 1);
//	printf("%d\n", n);
//}
//
//void main(void){
//	scanf("%d", &N);
//	prt(1);
//}

//
//#include <stdio.h>
//
//int sum(int n){
//	if (n == 0) return 0;
//	return n + sum(n - 1);
//}
//
//void main(void){
//	int N;
//	scanf("%d", &N);
//	printf("%d", sum(N));
//
//}



//
//#include <stdio.h>
//
//void star(int n){
//
//	static int peak = 1;
//
//	if (peak == 0){
//		printf("*");
//		return;
//	}
//
//	printf("*");
//	peak--;
//}
//
//void main(void){
//	int N;
//	scanf("%d", &N);
//	star(N);
//}

//#include <stdio.h>
//
//void star(int n)
//{
//	if (n == 1){
//		printf("\n");
//		return;
//	}
//}
//
//void main()
//{
//
//	int n;
//	scanf("%d", &n);
//
//	star(n);
//
//}


//#include <stdio.h>
//
//void main(){
//	int peak = 3;
//	int last = 2 * 3 - 1;
//
//	for (int i = 0; i < last; i++)
//	{
//		if (i < peak)
//		{
//			for (int j = 0; j <= i; j++)
//			{
//				printf("*");
//			}
//		} 
//		else
//		{
//			for (int j = i; j < last; j++)
//			{
//				printf("*");
//			}
//		}
//		printf("\n");
//	}
//}


//#include <stdio.h>
//void prt(int n, int N){
//	if (n == N + 1) return;
//	//printf("%d\n", n); // 오름차순 -> 함수가 호출될때의 인자를 출력한다.
//	prt(n + 1, N);
//	//printf("%d\n", n);   // 내림차순 -> 함수 호출 스택의 상단의 인자부터 출력한다.
//}
//
//void main(void){
//
//	prt(1, 10);
//
//}

// printf *
// input value 3
// *
// **
// ***
// **
// *

//
//#include <stdio.h>
//void star(int n){
//
//	
//}
//
//void main(void)
//{
//	int n;
//	scanf("%d", &n);
//
//}
//


//
//void draw(int, int);
//void star(int, int);
//
//void main(){
//	int n;
//	scanf("%d", &n);
//	draw(n, 2 * n - 1);
//}
//
//
//void draw(int peak, int last){
//
//	if (last == peak) {
//		star(peak, last);
//		return;
//	}
//
//	star(peak, last);
//	draw(peak, last - 1);
//	star(peak, last);
//}
//
//void star(int peak, int last){
//	for (int i = 2 * peak; i > last; i--) {
//		printf("*");
//	}
//	printf("\n");
//}






//#include <stdio.h>
//int peak;
//
//void draw(int);
//void print_star(int);
//
//void main(void)
//{
//	scanf("%d", &peak);
//	draw(1);
//}
//
//void draw(int cnt)
//{
//	print_star(cnt);
//	if (cnt == peak) return;
//	draw(cnt + 1);
//	print_star(cnt);
//}
//
//void print_star(int iter_cnt)
//{
//	for (int i = 0; i < iter_cnt; i++) {
//		printf("*");
//	}
//	printf("\n");
//}