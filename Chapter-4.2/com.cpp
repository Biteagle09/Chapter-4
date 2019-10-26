#include "stdafx.h"
#define random(x) (rand()%x)





//Produce many random number
//param arr[] ： saving these randrom number in this arr[]
//param count :  The total number of random Numbers
//param limit :  The upper limit of these random Numbers
void randMy(int arr[], int count, int limit) {
	srand((int)time(0));
	for (int x = 0; x < count; x++) {
		arr[x] = random(limit);
	}
}





//从头至尾打印int型数组里的内容
void printArray(int arr[], int lens) {
	printf("int Array[%d]={", lens);
	for (int i = 0; i < lens; i++) {
		if (i < lens - 1) {
			printf("%d,", arr[i]);
		}
		else {
			printf("%d}\n", arr[i]);
		}
	}
}




//对数组里面的内容进行排序
void quickSort(int arr[], int low, int high) {
	int temp, i = low, j = high;
	if (low < high) {
		temp = arr[low];
		while (i < j) {
			while (j > i && arr[j] > temp) {
				j--;
			}
			if (i < j) {
				arr[i++] = arr[j];
			}

			while (i < j && arr[i] < temp) {
				i++;
			}
			if (i < j) {
				arr[j--] = arr[i];
			}
		}
		arr[i] = temp;
		quickSort(arr, low, i - 1);
		quickSort(arr, i + 1, high);
	}
}