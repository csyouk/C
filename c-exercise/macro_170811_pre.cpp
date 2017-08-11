//#include <stdio.h>
//#include "BINOP.h"
//void main(void){
//	int a = 0x33cc33cc;
//	a &= (((~(0xff << 16)) | (0x55 << 16)));
//	bddisp(a);
//}
//#include <stdio.h>
//
//#define PRT
//#define SQR(x) x*x
//
//void main(void)
//{
//	int x = 4;
//	printf("%d\n", SQR(x + 3));
//
//#ifdef PRT
//	printf("prt defined\n");
//#endif
//
//#ifndef ABC
//	printf("abc not defined\n");
//#elif
//	printf("abc defined\n");
//#endif
//}
//#include <stdio.h>
//
//#define PRT(x) printf("NO_"#x" = %d\n", NO_##x)
//#define UI unsigned int
//
//int NO_1 = 128;
//int NO_2 = 555;
//int NO_A = 888;
//
//typedef struct st
//{
//	int a;
//	char b[4];
//} STUDENT;
//void main(void)
//{
//	
//	PRT(1); 
//	PRT(2);
//	PRT(A);
//
//	UI a = 3;
//	printf("%d\n", 0x80000000);
//
//	STUDENT stu = { 0, "hel" };
//	printf("%d %s\n", stu.a, stu.b);
//}