//#include <stdio.h>

// 1
//void main(){
//	int s[3][4] = { 0 };
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			scanf("%d", &s[i][j]);
//		}
//	}
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			printf("%d ", s[i][j]);
//		}
//		printf("\n");
//	}
//}


//2
//void main(){
//	int row_sum, col_sum;
//	int s[3][4] = { 0 };
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			scanf("%d", &s[i][j]);
//		}
//	}
//
//	for (int i = 0; i < 3; i++)
//	{
//		row_sum = 0;
//		for (int j = 0; j < 4; j++)
//		{
//			row_sum += s[i][j];
//		}
//		printf("%d ", row_sum);
//	}
//
//	printf("\n");
//
//	for (int i = 0; i < 4; i++)
//	{
//		col_sum = 0;
//		for (int j = 0; j < 3; j++)
//		{
//			col_sum += s[j][i];
//		}
//		printf("%d ", col_sum);
//	}
//}


// 3
//int s[3][3] = { 0 };
//int reflected[3][3] = { 0 };
//void clockwise_90(void);
//void clockwise_90_more(void);
//void main(){
//	int row_sum, col_sum;
//	
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			scanf("%d", &s[i][j]);
//		}
//	}
//
//	clockwise_90();
//	clockwise_90_more();
//
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			printf("%d ", s[i][j]);
//		}
//		printf("\n");
//	}
//
//}
//
//void clockwise_90(void)
//{
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			reflected[j][2 - i] = s[i][j];
//		}
//	}
//}
//
//void clockwise_90_more(void)
//{
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			s[j][2 - i] = reflected[i][j];
//		}
//	}
//}


// 5

//void main(){
//	int eend = -1;
//	scanf("%d", &eend);
//
//	int matrix[10][10] = {0,};
//
//	int cnt = 1;
//
//	for (int i = eend; i > 0; i--)
//	{
//		for (int j = eend; j > 0; j--)
//		{
//			matrix[i-1][j-1] = cnt;
//			cnt++;
//		}
//	}
//
//
//	for (int i = 0; i < eend; i++)
//	{
//		for (int j = 0; j < eend; j++)
//		{
//			printf("%d ", matrix[i][j]);
//		}
//		printf("\n");
//	}
//
//}

// 6
//void main(){
//
//	int input, last, peak;
//	int start = 1;
//	char display[11][11] = { 0 };
//
//	scanf("%d", &input);
//
//	peak = input - 1;
//	last = input * input;
//
//	
//	for (int i = 0; i < input; i++)
//	{
//		for (int j = 0; j <= 2*peak; j++)
//		{
//			if ((peak - i <= j) && (j <= peak + i))
//			{
//				display[i][j] = start;
//				printf("%3d", display[i][j]);
//				start++;
//
//			}
//			else 
//			{
//				printf("   ");
//			}
//		}
//		printf("\n");
//	}
//
//}

// 7
//void main(){
//	int row_sum = 0;
//	int col_sum = 0;
//	int last = 0;
//	int left_diag = 0;
//	int right_diag = 0;
//
//	int s[4][4] = { 0 };
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			scanf("%d", &s[i][j]);
//		}
//	}
//
//	// add row sum
//	for (int i = 0; i < 3; i++)
//	{
//		row_sum = 0;
//		for (int j = 0; j < 3; j++)
//		{
//			row_sum += s[i][j];
//		}
//		s[i][3] = row_sum;
//	}
//
//	// add col sum
//	for (int i = 0; i < 3; i++)
//	{
//		col_sum = 0;
//		for (int j = 0; j < 3; j++)
//		{
//			col_sum += s[j][i];
//		}
//		s[3][i] = col_sum;
//	}
//
//	// add 4,4
//	for (int i = 0; i < 3; i++)
//	{
//		last += s[3][i];
//	}
//	s[3][3] = last;
//
//	// left & right diag
//	for (int i = 0; i < 3; i++)
//	{
//		left_diag += s[i][2-i];
//		right_diag += s[i][i];
//	}
//
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			printf("%3d ", s[i][j]);
//		}
//		printf("\n");
//	}
//	printf("%d %d", left_diag, right_diag);
//}
//
//
////// G
//void main(){
//	int row_sum = 0;
//
//	int s[4][4] = { 0 };
//
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			scanf("%d", &s[i][j]);
//		}
//	}
//
//	// add row sum
//	for (int i = 0; i < 4; i++)
//	{
//		row_sum = 0;
//		for (int j = 0; j < 3; j++)
//		{
//			row_sum += s[i][j];
//		}
//		s[i][3] = row_sum;
//	}
//
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			printf("%4d", s[i][j]);
//		}
//		printf("\n");
//	}
//}


// H


// G
//void main(){
//	int val;
//	int highest = -1;
//
//
//	int s[4][4] = { 0 };
//
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			scanf("%d", &s[i][j]);
//		}
//	}
//
//
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			if (s[i][j] > highest)
//			{
//
//				highest = s[i][j];
//				val = i;
//			}
//		}
//	}
//	printf("%d", val);
//}


//// I
//void main(){
//	int val;
//	int highest = -1;
//
//
//	int s[4][4] = { 0 };
//
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			scanf("%d", &s[i][j]);
//		}
//	}
//
//
//	for (int i = 0; i < 4; i++)
//	{
//
//		if (s[i][2] > highest)
//		{
//
//			highest = s[i][2];
//			val = i;
//		}
//		
//	}
//	printf("%d", val);
//}

//// J
//void main(){
//	int val = 0;
//	int sum = 0; 
//	int lowest = 9999;
//
//
//	int s[4][4] = { 0 };
//
//	int sums[3] = { 0, };
//
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			scanf("%d", &s[i][j]);
//		}
//	}
//
//
//	for (int i = 0; i < 3; i++)
//	{
//		sum = 0;
//		for (int j = 0; j < 4; j++)
//		{
//			sum += s[j][i];
//		}
//		sums[i] = sum;
//
//	}
//
//	for (int i = 0; i < 3; i++)
//	{
//		if (sums[i] < lowest)
//		{
//			lowest = sums[i];
//			val = i;
//		}
//	}
//
//	//for (int i = 0; i < 4; i++)
//	//{
//	//	for (int j = 0; j < 3; j++)
//	//	{
//	//		printf("%d ", s[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//
//	//for (int i = 0; i < 3; i++)
//	//{
//	//	printf("%d ", sums[i]);
//	//}
//
//	
//	printf("%d", val);
//}



// K
//
//void main(){
//	int data[10] = { 0 };
//	int target = 0;
//	int rep = 0;
//
//	for (int i = 0; i < 11; i++)
//	{
//		if (i == 10)
//		{
//			scanf("%d", &target);
//			break;
//		}
//		scanf("%d", &data[i]);
//	}
//
//	for (int i = 0; i < 10; i++)
//	{
//		if (data[i] == target)
//		{
//			for (int j = i+1; j < 10; j++)
//			{
//				data[j-1] = data[j];
//			}
//			data[9] = 0;
//		}
//		else
//		{
//			rep++;
//		}
//		
//	}
//
//	if (rep == 10)
//	{
//		printf("ERROR");
//	}
//	else
//	{
//		for (int i = 0; i < 10; i++)
//		{
//			printf("%d ", data[i]);
//		}
//	}
//
//}







//#include <stdio.h>
//
//void clockwise_90(int s[3][3]);
//
//void main(){
//	int row_sum, col_sum;
//
//	int s[3][3] = { 0 };
//	int r[3][3] = { 0 };
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			scanf("%d", &s[i][j]);
//		}
//	}
//
//	clockwise_90(s, r);
//	clockwise_90(r, s);
//
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			printf("%d ", s[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void clockwise_90(int s[3][3], int r[3][3])
//{
//	int temp;
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = i; j < 3 - i; j++)
//		{
//			r[j][2 - i] = s[i][j];
//		}
//	}
//}