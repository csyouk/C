//#include <stdio.h>
//
//void intput(int a[], int cnt)
//{
//	int i;
//	for (int i = 0; i < cnt; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//}
//
//void output(int a[], int cnt)
//{
//	int i;
//	for (int i = 0; i < cnt; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//}
//
//// 전달 받은 주소의 값을 서로 교체해준다. 
//void swap(int *x, int *y)
//{
//	int imis = *x;
//	*x = *y;
//	*y = imis;
//}
//
//void sort(int a[], int cnt)
//{
//	int i, j;
//	for (int i = 0; i < cnt - 1; i++)
//	{
//		for (int j = i + 1; j < cnt; j++)
//		{
//			if (a[i] > a[j])
//			{
//				swap(&a[i], &a[j]);  // 교체할 두 변수의 주소를 넘긴다. 
//			}
//		}
//	}
//}
//
//void main(){
//
//	int n;
//
//	scanf("%d", &n);
//
//	int arr[10];
//
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", arr);
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	intput(arr, 6);
//	sort(arr, 6);
//	output(arr, 6);
//}
//
