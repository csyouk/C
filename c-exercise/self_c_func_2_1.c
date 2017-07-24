//#include <stdio.h>
//#include <stdlib.h>
//
///* run this program using the console pauser or add your own getch, system("pause") or input loop */
//int swap(int arr[], int num);
//
//int main(int argc, char** argv) {
//
//	int num, i, j;
//
//	int *arr = (int*)malloc(num*sizeof(int));
//
//	scanf("%d", &num);
//
//	for (i = 0; i < num; i++){
//
//		scanf("%d", &arr[i]);
//	}
//
//	swap(arr, num);
//
//	for (i = 0; i < num; i++){
//
//		printf("%d ", arr[i]);
//	}
//
//	free(arr);
//}
//
//int swap(int arr[], int num){
//
//	int i, j, index, temp;
//
//	for (i = 0; i < num; i++) {
//
//		index = i;
//
//		for (j = i + 1; j < num; j++) {
//
//			if (arr[index] < arr[j])
//
//				index = j;
//		}
//
//		temp = arr[i];
//		arr[i] = arr[index];
//		arr[index] = temp;
//	}
//
//}