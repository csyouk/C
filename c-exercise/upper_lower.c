#include <stdio.h>

#define UPPWER_LOWER 0
#define CH2EX10 0
#define UL_CONVERT_CONSTANT 32
#define IC_CONVERT_CONSTANT 48

char upper_char(char);
char lower_char(char); 
char int_to_char(int);
int convert_to_int(char);

#if UPPWER_LOWER
void main(void){

#if CH2EX10
	//char u, l;
	//l = upper_char('a');
	//u = lower_char('A');
	//printf("lower : %c / upper : %c", l, u);

	char c;
	int i;

	c = int_to_char(1);
	i = char_to_int('1');

	printf("%c %d", c, i);

#endif

}


char upper_char(char lower)
{
	return lower - UL_CONVERT_CONSTANT;
}

char lower_char(char upper)
{
	return upper + UL_CONVERT_CONSTANT;
}

char int_to_char(int number)
{
	return number + IC_CONVERT_CONSTANT;
}

int char_to_int(char alphabet)
{
	return alphabet - IC_CONVERT_CONSTANT;
}
		

#endif