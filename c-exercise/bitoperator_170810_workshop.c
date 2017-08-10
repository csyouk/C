
#include <stdio.h>
#if 0
void main(void)
{
	unsigned int my_info = 0, sabun = 0, age = 0;
	unsigned char gender = 0;


	my_info = sabun = age = gender = 0;
	printf("사번입력:"); scanf("%d", &sabun);
	printf("성별입력:"); scanf(" %c", &gender);
	printf("나이입력:"); scanf("%d", &age);


	my_info |= sabun;
	(gender == 'w') ? (my_info |= (1 << 8)) : (my_info |= (0 << 8));
	my_info |= (age << 9);

	printf("나의 사번 %u, 성별 %c, 나이 %u\n", \
		my_info & 0xff,
		(my_info >> 8 & 1)? 'w' : 'm',
		my_info >> 9);
	

	(my_info >> 8 & 1) ? (my_info &= ~(1<<8)) : (my_info |= (1 << 8));

	printf("나이 재입력:"); scanf("%d", &age);
	//my_info |= (age << 9);

	my_info = (my_info & ~(0x7f << 9)) | (age << 9);

	printf("나의 사번 %u, 성별 %c, 나이 %u\n", \
		my_info & 0xff,
		(my_info >> 8 & 1) ? 'w' : 'm',
		my_info >> 9);

}
#endif