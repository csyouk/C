//#include <stdio.h>

//void print_gugu(int s, int e);
//
//void main()
//{
//	int start, end;
//	scanf("%d%d", &start, &end);
//	print_gugu(start, end);
//}
//
//void print_gugu(int start, int end)
//{
//	int s, e;
//	if (start < end){
//		s = start;
//		e = end;
//	}
//	else {
//		s = end;
//		e = start;
//
//	}
//	for (int i = s; i < e + 1; i++)
//	{
//		printf("== %ddan ==\n", i);
//		for (int j = 1; j < 10; j++)
//		{
//			printf("%d * %d = %2d\n", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//
//void print_rep(int);
//void main()
//{
//	int iteration;
//	scanf("%d", &iteration);
//	print_rep(iteration);
//
//}
//
//void print_rep(int iter)
//{
//	for (int i = 0; i < iter; i++)
//	{
//		printf("~!@#$^&*()_+|\n");
//	}
//}



//
/*int round_f(float num);
int floor(float);
int gauss(float);
void analyze(float values[3]);

void main(){
	float fvalues[3];
	scanf("%f %f %f", &fvalues[0], &fvalues[1], &fvalues[2]);

	analyze(fvalues);
}

void analyze(float values[3])
{

	for (int i = 0; i < 3; i++)
	{
		for (int j = i + 1; j < 3; j++)
		{
			if (values[i] > values[j])
			{
				float temp = values[i];
				values[i] = values[j];
				values[j] = temp;
			}
		}
	}

	printf("%d %d %d", floor(values[2]), gauss(values[0]), round_f(values[1]));
}

int floor(float num)
{
	int result;

	if (num > 0.0f){
		result = num + 1.0f;
		return result;
	}
	result = num;
	return result;

}

int round_f(float num)
{
	int result;

	if (num > 0.0f){
		result = num + 0.5f;
		return result;
	}
	result = num - 0.5f;
	return result;
}

int gauss(float num)
{
	int result;

	if (num > 0.0f){
		result = num;
		return result;
	}
	result = num - 1.0f;
	return result;

}*/

//void main()
//{
//	int a = 1;
//	printf("%c\n", a + 48);
//}


//#include <stdio.h>
//
//void check_cross(int a, int b, int c, int d);
//
//int main(void)
//{
//	// 여기서부터 작성
//
//	int fs, fe, ss, se;
//
//	scanf("%d%d", &fe, &fs);
//	scanf("%d%d", &ss, &se);
//
//	check_cross(fs, fe, ss, se);
//
//	return 0;
//}
//
//void check_cross(int fs, int fe, int ss, int se)
//{
//
//	if (fs > fe)
//	{
//		int temp = fs;
//		fs = fe;
//		fe = temp;
//	}
//
//	if (ss > se)
//	{
//		int temp = ss;
//		ss = se;
//		se = temp;
//	}
//
////	printf("%d %d %d %d", fs, fe, ss, se);
//
//	if (((fs < ss) && (ss < fe)) || ((fs < se) && (se < fe)) )
//	{
//		printf("cross");
//	}
//	else
//	{
//		printf("not cross");
//	}
//}