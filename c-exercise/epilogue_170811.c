
/***********************************************************/
// [Epilogue-1] memchar
/***********************************************************/

#if 0
#include <string.h>
#include <stdio.h>

void main(void)
{
	char astr[] = "Hello C World!\n";
	char * p;

	p = astr;

	for (;;)
	{
		p = memchr(p, 'l', sizeof(astr));
		if (p) p++;
		else break;
		printf("%s\n", p);
	}
}
#endif

/***********************************************************/
// [Epilogue-2] memcmp
/***********************************************************/

#if 0
#include <stdio.h>
#include <string.h>

void main(void)
{
	char first[] = "1234567890";
	char second[] = "1234567891";
	int result;

	result = memcmp(first, second, 9);
	printf("fisrt = second : %d\n", result);

	result = memcmp(first, second, 10);
	printf("first < second : %d\n", result);
}
#endif

/***********************************************************/
// [Epilogue-3] memcpy & memmove
/***********************************************************/

#if 0
#include <string.h>
#include <stdio.h>

char str1[10] = "abcdefgh";
char str2[10];

void main(void)
{
	memcpy(str2, str1, sizeof(str1));
	printf("memcpy : %s, %s\n", str1, str2);
}
#endif

/***********************************************************/
// [Epilogue-4] memset
/***********************************************************/

#if 0
#include <string.h>
#include <stdio.h>

void main(void)
{
	char buffer[] = "memset function test";

	printf("Before: %s\n", buffer);
	memset(buffer, '*', 4);
	printf("After:  %s\n", buffer);
}
#endif

/***********************************************************/
// [Epilogue-5] strcpy
/***********************************************************/

#if 0
#include <stdio.h>
#include <string.h>

void main(void)
{
	char str1[10] = "abcdefghi";
	char str2[10];

	strcpy(str2, str1);
	printf("strcpy: str2 = %s\n", str2);

	strcpy(str2, "123456789012345");
	printf("src > buffer: str2 = %s\n", str2);

	strcpy(str2, "12345");
	printf("src < buffer: str2 = %s\n", str2);
}
#endif

/***********************************************************/
// [Epilogue-6] strncpy
/***********************************************************/

#if 0
#include <stdio.h>
#include <string.h>

void main(void)
{
	char str1[10] = "abcdefghi";
	char str2[10];

	strncpy(str2, str1, 10);
	printf("strncpy: str2  = %s\n", str2);

	strncpy(str2, "ABCDEFGHIJKLMNO", 10);
	printf("src > count: str2 = %s\n", str2);

	strncpy(str2, "123", 10);
	printf("src < count: str2 = %s\n", str2);
}
#endif

/***********************************************************/
// [Epilogue-7] strcat & strcpy
/***********************************************************/

#if 0
#include <string.h>
#include <stdio.h>

void main(void)
{
	char string[80];
	//char string[20];

	strcpy(string, "Hello world from ");

	strcat(string, "strcpy ");
	strcat(string, "and ");
	strcat(string, "strcat!");
	printf("String = %s\n", string);
}
#endif

/***********************************************************/
// [Epilogue-8] strncat
/***********************************************************/

#if 0
#include <string.h>
#include <stdio.h>

void main(void)
{
	char string[80];

	strcpy(string, "Hello world from ");

	strncat(string, "strcpy ", 7);
	strncat(string, "and ", 8);
	strncat(string, "strcat!", 3);
	printf("String = %s\n", string);
}
#endif

/***********************************************************/
// [Epilogue-9] strlen
/***********************************************************/

#if 0
#include <string.h>
#include <stdio.h>

void main(void)
{
	char astr[10] = "Hello";
	char bstr[] = "Hello";

	printf("%d, %d\n", sizeof(astr), strlen(astr));
	printf("%d, %d\n", sizeof(bstr), strlen(bstr));
	printf("%d, %d\n", sizeof("Hello"), strlen("Hello"));
}
#endif

/***********************************************************/
// [Epilogue-10] strcmp & strncmp
/***********************************************************/

#if 0
#include <string.h>
#include <stdio.h>

void main(void)
{
	printf("%d\n", strcmp("ABC", "BC"));
	printf("%d\n", strcmp("ABC", "AC"));
	printf("%d\n", strcmp("ABC", "AB"));
	printf("%d\n", strcmp("abc", "ABC"));
	printf("%d\n", strcmp("ab", " "));
	printf("\n");
	printf("%d\n", strncmp("ABC", "BC", 5));
	printf("%d\n", strncmp("ABC", "AC", 3));
	printf("%d\n", strncmp("ABC", "AB", 2));
	printf("%d\n", strncmp("abc", "ABC", 2));
	printf("%d\n", strncmp("ab", " ", 2));
}
#endif

/***********************************************************/
// [Epilogue-11] strstr
/***********************************************************/

#if 0
#include <string.h>
#include <stdio.h>

void main(void)
{
	char * str1 = "Embedded C Programming";

	printf("str1 = %#.8x, %#.8x\n", str1, strstr(str1, "gram"));
	printf("str1 = %#.8x, %#.8x\n", str1, strstr(str1, "Imbedded"));
	printf("str1 = %#.8x, %#.8x\n", str1, strstr(str1, "\0"));
}
#endif

/***********************************************************/
// [Epilogue-12] strtok
/***********************************************************/

#if 0
#include <string.h>
#include <stdio.h>

// char str[] ������ char * str�� ��ġ�� ������� ���ô�

char str[] = "Ritchie was\nunder the radar."
"His name \twas not a household name at all,"
"but... if you had a microscope and could look in"
"a computer, you'd see his work everywhere inside!.";
char sep[] = "\t\n,.!";

int main(void)
{
	char * p;

	p = strtok(str, sep);

	while (p != NULL)
	{
		printf("%s\n", p);
		p = strtok(NULL, sep);
	}
}
#endif

/***********************************************************/
// [Epilogue-13] ������ ������ ������ ���� ���ų� �����Ѵ�
/***********************************************************/

#if 0

#include <stdio.h>

void main(void)
{
	FILE * file;

	file = fopen("..\\test_dir.txt", "rt");
	if (file == NULL)
	{
		printf("..\\test_dir.txt ���� ���� ����!!\n");
		return;
	}
	else
	{
		printf("..\\test_dir.txt ���� ���� ����!!\n");
		fclose(file);
	}

	file = fopen("test1.txt", "rt");
	if (file == NULL) printf("test1.txt ���� ���� ����!!\n");
	else printf("test1.txt ���� ���� ����!!\n");

	file = fopen("test1.txt", "wt");
	if (file == NULL)
	{
		printf("test1.txt ���� ���� ����!!\n");
		return;
	}
	else
	{
		printf("test1.txt ���� ���� ����!!\n");
		fclose(file);
	}
}

#endif

/***********************************************************/
// [Epilogue-14] ����� �� �� ������ �ݴµ� ����Ѵ�
/***********************************************************/

#if 0

#include <stdio.h>

void main(void)
{
	FILE * file;
	int r;

	file = fopen("test.txt", "rt");
	if (file == NULL)
	{
		printf("���� ���� ����!!\n");
		return;
	}
	else printf("���� ���� ����!!\n");

	r = fclose(file);
	if (!r) printf("���� �ݱ� ���� r = %d\n", r);
	else printf("���� �ݱ� ���� r = %d\n", r);

	r = fclose(file);
	if (!r) printf("���� �ݱ� ���� r = %d\n", r);
	else printf("���� �ݱ� ���� r = %d\n", r);
}

#endif

/***********************************************************/
// [Epilogue-15] ���Ͽ��� ���ڿ��� �о� �´�
/***********************************************************/

#if 0

#include <stdio.h>

void main(void)
{
	FILE * file;
	char buf[256];
	char * rtn;

	file = fopen("test.txt", "rt");
	if (file == NULL)
	{
		printf("���� ���� ����!!\n");
		return;
	}

	for (;;)
	{
		rtn = fgets(buf, sizeof(buf), file);
		if (rtn != NULL) printf(buf);
		else break;
	}

	fclose(file);
}

#endif

/***********************************************************/
// [Epilogue-16] ���Ͽ� ���ڿ��� ��� �Ѵ�
/***********************************************************/

#if 0

#include <stdio.h>

void main(void)
{
	FILE * file;
	char buf[256] = "123\nTest\n";
	int rtn;

	file = fopen("test_fputs.txt", "wt");
	if (file == NULL)
	{
		printf("���� ���� ����!!\n");
		return;
	}

	rtn = fputs(buf, file);
	if (rtn != -1) printf("���� ���� ����!!\n");
	else printf("���� ���� ����!!\n");

	fclose(file);
}

#endif

/***********************************************************/
// [Epilogue-17] ���Ͽ��� �� ���ڸ� �о� �´�
/***********************************************************/

#if 0

#include <stdio.h>

void main(void)
{
	FILE * file;
	int ch;

	file = fopen("test.txt", "rt");
	if (file == NULL)
	{
		printf("���� ���� ����!!\n");
		return;
	}

	do
	{
		ch = fgetc(file);
		if (ch != EOF) printf("%c", ch);
	} while (ch != EOF);

	fclose(file);
}

#endif

/***********************************************************/
// [Epilogue-18] ���Ͽ� �� ���ڸ� ��� �Ѵ�
/***********************************************************/

#if 0

#include <stdio.h>

void main(void)
{
	FILE * file;
	char buf[] = "Hello C World!!\n";
	int ch, i;

	file = fopen("test_fputc.txt", "wt");
	if (file == NULL)
	{
		printf("���� ���� ����!!\n");
		return;
	}

	for (i = 0; i<sizeof(buf) / sizeof(buf[0]); i++)
	{
		ch = fputc(buf[i], file);
		if (ch != buf[i]) printf("���� ���� ����!!\n");
	}

	printf("���� ���� ����!!\n");

	fclose(file);
}

#endif

/***********************************************************/
// [Epilogue-19] ���Ͽ��� ���ϴ� ũ�⾿ ���ϴ� ������ŭ �о�´�
/***********************************************************/

#if 0

#include <stdio.h>

void main(void)
{
	FILE * file;
	int buf[20];
	int rtn, i;

	file = fopen("test_bin.txt", "rb");
	if (file == NULL)
	{
		printf("���� ���� ����!!\n");
		return;
	}

	rtn = fread(buf, sizeof(buf[0]), sizeof(buf) / sizeof(buf[0]), file);
	printf("���� ������ ���� = %d\n", rtn);

	for (i = 0; i<rtn; i++)
	{
		printf("%d ", buf[i]);
	}
	printf("\n");

	fclose(file);
}

#endif

/***********************************************************/
// [Epilogue-20] ���Ͽ� ���ϴ� ũ�⾿ ���ϴ� ������ŭ ����Ѵ�
/***********************************************************/

#if 0

#include <stdio.h>

void main(void)
{
	FILE * file;
	int buf[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, };
	int rtn;

	file = fopen("test_fwrite.txt", "wb");
	if (file == NULL)
	{
		printf("���� ���� ����!!\n");
		return;
	}

	rtn = fwrite(buf, sizeof(buf[0]), sizeof(buf) / sizeof(buf[0]), file);
	if (rtn != sizeof(buf) / sizeof(buf[0])) printf("���� ���� ����!!\n");

	printf("���� ���� ����!!\n");

	fclose(file);
}

#endif

/***********************************************************/
// [Epilogue-21] ���ϴ� ������ �Է��� ���Ϸκ��� �Է� �޴´�
/***********************************************************/

#if 0

#include <stdio.h>

void main(void)
{
	FILE * file;
	int a[10];
	char b[10];
	float f;
	int c;
	int i;

	file = fopen("test_fscanf.txt", "rt");
	if (file == NULL)
	{
		printf("���� ���� ����!!\n");
		return;
	}

	fscanf(file, "%d %s", &c, b);
	printf("%d %s\n", c, b);

	fscanf(file, "%f", &f);
	printf("%f\n", f);

	for (i = 0; i<10; i++) fscanf(file, "%d,", &a[i]);
	for (i = 0; i<10; i++) printf("%d ", a[i]);
	printf("\n");

	fclose(file);
}

#endif

/***********************************************************/
// [Epilogue-22] ���ϴ� ������ ����� ���Ͽ� ��� �Ѵ�
/***********************************************************/

#if 0

#include <stdio.h>

void main(void)
{
	FILE * file;
	int d;
	float f;
	char c[10];
	int rtn;

	file = fopen("test_fprintf.txt", "wt");
	if (file == NULL)
	{
		printf("���� ���� ����!!\n");
		return;
	}

	rtn = fprintf(file, "%d %s %f\n", 123, "SCSA", 3.14);
	printf("��³��� : %d %s %f ����� ����Ʈ �� = %d\n", 123, "SCSA", 3.14, rtn);

	fclose(file);

	file = fopen("test_fprintf.txt", "rt");
	if (file == NULL)
	{
		printf("���� ���� ����!!\n");
		return;
	}

	rtn = fscanf(file, "%d %s %f", &d, c, &f);
	printf("�������� : %d %s %f ���� ������ �� = %d\n", d, c, f, rtn);

	fclose(file);
}

#endif

/***********************************************************/
// [Epilogue-23] ������ ó������ �ٽ� �׼��� �ϰ��Ѵ�
/***********************************************************/

#if 0

#include <stdio.h>

void main(void)
{
	FILE * file;
	char buf[256];
	char * rtn;

	file = fopen("test.txt", "rt");
	if (file == NULL)
	{
		printf("���� ���� ����!!\n");
		return;
	}

	do{
		rtn = fgets(buf, sizeof(buf), file);
		if (rtn) printf("1 : %s", buf);
	} while (rtn);

	do{
		rtn = fgets(buf, sizeof(buf), file);
		if (rtn) printf("2 : %s", buf);
	} while (rtn);

	rewind(file);

	do{
		rtn = fgets(buf, sizeof(buf), file);
		if (rtn) printf("3 : %s", buf);
	} while (rtn);

	fclose(file);
}

#endif

/***********************************************************/
// [Epilogue-24] ������ �׼��� ��ġ(FP)�� �� ����� ���Ѵ�
/***********************************************************/

#if 0

#include <stdio.h>

void main(void)
{
	FILE * file;
	char buf[256];
	char * rtn;

	file = fopen("test.txt", "rt");
	if (file == NULL)
	{
		printf("���� ���� ����!!\n");
		return;
	}

	fseek(file, 17, SEEK_SET);

	rtn = fgets(buf, sizeof(buf), file);
	if (rtn != NULL) printf(buf);

	fclose(file);
}

#endif

/***********************************************************/
// [Epilogue-25] ������ ���� �׼��� ��ġ(FP)�� �˷��ش�
/***********************************************************/

#if 0

#include <stdio.h>

void main(void)
{
	FILE * file;
	char buf[256];
	char * rtn;

	file = fopen("test.txt", "rt");
	if (file == NULL)
	{
		printf("���� ���� ����!!\n");
		return;
	}

	printf("FP -> %d\n", ftell(file));

	rtn = fgets(buf, sizeof(buf), file);
	if (rtn != NULL) printf(buf);

	printf("FP -> %d\n", ftell(file));

	fclose(file);
}

#endif

/***********************************************************/
// [Epilogue-26] ������ ������ �о����� �˷��ش�
/***********************************************************/

#if 0

#include <stdio.h>

void main(void)
{
	FILE * file;

	file = fopen("test.txt", "rt");
	if (file == NULL)
	{
		printf("���� ���� ����!!\n");
		return;
	}

	while (!feof(file))
	{
		printf("%c", fgetc(file));
	}

	fclose(file);
}

#endif

/***********************************************************/
// [Epilogue-27] ������ �ĺ���(�ڵ�)�� �˷��ش�
/***********************************************************/

#if 0

#include <stdio.h>

void main(void)
{
	FILE * file;
	int handle;

	file = fopen("test.txt", "rt");
	if (file == NULL)
	{
		printf("���� ���� ����!!\n");
		return;
	}

	handle = fileno(file);

	printf("%d\n", handle);

	fclose(file);
}

#endif

/***********************************************************/
// [Epilogue-28] ������ ũ�⸦ �˷��ش�
/***********************************************************/

#if 0

#include <stdio.h>
#include <io.h>

void main(void)
{
	FILE * file;
	long size;

	file = fopen("test.txt", "rt");
	if (file == NULL)
	{
		printf("���� ���� ����!!\n");
		return;
	}

	size = filelength(fileno(file));

	printf("%d\n", size);

	fclose(file);
}

#endif

/***********************************************************/
// [Epilogue-29] ������ �����ϴ� ���α׷��� �ۼ��϶�
/***********************************************************/

#if 0

#include <stdio.h>
#include <stdlib.h>
#include <io.h>

void main(void)
{


}

#endif
