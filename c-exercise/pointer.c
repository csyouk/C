#include <stdio.h>

#define DOUBLE_POINTER 0
#define TRIPLE_POINTER 0

#if DOUBLE_POINTER
void main(void){
	
	int num = 123;
	// *  called "Value at address"
	// &  called "Adress of"

	// pointer for num
	int *pr2;

	// double pointer for pr2
	int **pr1;
	
	pr2 = &num; // pr2에는 num변수의 address 값을 저장한다. 

	// storing the address of pointer pr2 into another pointer pr1
	// pr1에는 pr2변수의 주소값을 저장한다. 
	// 그런데 pr2는 num의 주소값을 저장해놓은 변수 였다. 
	// 따라서 pr1은 실제로는 주소값이 두번 연이어서 저장되어 있는 형태이다. 
	pr1 = &pr2; 

	/* Possible ways to find value of variable num*/
	printf("\n Value of num is: %d", num); 
	printf("\n Value of num using pr2 is: %d", *pr2);
	printf("\n Value of num using pr1 is: %d", **pr1);

	/*Possible ways to find address of num*/
	printf("\n Address of num is: %u", &num);
	printf("\n Address of num using pr2 is: %u", pr2);
	printf("\n Address of num using pr1 is: %u", *pr1);

	/*Find value of pointer*/
	printf("\n Value of Pointer pr2 is: %u", pr2);
	printf("\n Value of Pointer pr2 using pr1 is: %u", *pr1);

	/*Ways to find address of pointer*/
	printf("\n Address of Pointer pr2 is:%u", &pr2);
	printf("\n Address of Pointer pr2 using pr1 is:%u", *pr1);

	/*Double pointer value and address*/
	printf("\n Value of Pointer pr1 is:%u", pr1);
	printf("\n Address of Pointer pr1 is:%u", &pr1);
	printf("\n");

}
#endif


#if TRIPLE_POINTER
void main(void){
	int num = 123;
	int *pr1;
	int **pr2;
	int ***pr3;

	pr1 = &num;
	pr2 = &pr1;
	pr3 = &pr2;

	printf("\n Value of num is: %d", num);
	printf("\n Value of num using pr1 is: %d", *pr1);
	printf("\n Value of num using pr2 is: %d", **pr2);
	printf("\n Value of num using pr3 is: %d", ***pr3);
	printf("\n");

	printf("Test \\38 is : \38 \n");
}
#endif