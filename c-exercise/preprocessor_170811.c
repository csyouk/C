#include <stdio.h>
#define ABS(x) ((x > 0) ? x : -(x))
#define SWAP(p,q) {int t = *(p); \
					*(p) = *(q); \
					*(q) = t;}

#define PRT(x) printf("NO_"#x" = %d\n", NO_##x)

int NO_1 = ~0x1fafbfcf;
int NO_2 = 263;
int NO_A = 152;

#if 1
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
}
#endif