#include <stdio.h>

void str_copy(char *d, const char *s)
{
	while (*d++ = *s++);
}

unsigned int str_length(const char *d)
{
	int length = 0;
	while (*d)
	{
		*d++;
		length++;
	}
	return length;
}

void str_add(char *a, const char *b){
	int length = str_length(a);

	for (int i = 0; i < str_length(b); i++)
	{
		a[length + i] = b[i];
	}
}

int str_comp(const char *a, const char *b)
{

	while (*a || *b)
	{
		if (*a == *b) {
			a++; b++;
			continue;
		}
		return (*a > *b)? 1 : -1;
	}
	return 0;
}

int str_cmp_size(const char *a, const char *b)
{
	unsigned int size_a = 0, size_b = 0;
	while (*a) size_a++, a++;
	while (*b) size_b++, b++;
	return size_a - size_b;
}

int str_cmp2(const char *a, const char *b)
{
	while (1)
	{
		if (*a > *b) return 1;
		if (*a < *b) return -1;
		if (*a == 0) return 0;
		a++, b++;
		
	}
}

void swap(char **pa, char **pb)
{
	char *temp = *pb;
	*pb = *pa;
	*pa = temp;
}

//void swap_struct(struct st_info *p, struct st_info *q)
//{
//	printf("sizeof %d \n", sizeof(*p));
//
//}



#if 0
void main(void){

	// str copy
	//char arr[15] = { 0 };
	//char *p = "hello world";
	//char *q = &arr;
	//str_copy(q, p);
	//printf("%s\n", q);


	// str length
	//char a[] = "Willtek";
	//printf("%d\n", str_length(a));

	// str concatenate
	//char a[30] = "willtek ";
	//char b[15] = "corporation";
	
	//str_add(a, b);
	//printf("%s\n", a);

	// str comparison
	printf("%d\n", str_comp("ABC", "BC"));    // -1
	printf("%d\n", str_comp("ABC", "AC"));    // -1
	printf("%d\n", str_comp("ABC", "AB"));    // 1
	printf("%d\n", str_comp("abc", "ABC"));   // 1
	printf("%d\n", str_comp("ab", " "));      // 1
	printf("%d\n", str_comp("abc", "abc"));   // 0
	printf("%d\n", str_comp("AB", "AB "));   // -1

	char *w_a[4];
	char(*w_b)[4];
}

#endif