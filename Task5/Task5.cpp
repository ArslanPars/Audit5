// Task5.cpp: определяет точку входа для консольного приложения.
//

//Реалізувати алгоритм сортування вставками.

#include "stdafx.h"
#include "Windows.h"
#include "time.h"

#define size 20

void insertion_sort(int* arr, int ) {
	int n, k;
	for (int i = 0; i < size; i++) {
		n = arr[i];
		k = i - 1;
		while (k >= 0 && arr[k] > n) {
			arr[k + 1] = arr[k];
			k = k - 1;
		}
		arr[k + 1] = n;
	}
}


int main()
{
	srand(time(NULL));
	int i ;
	
	printf("Raw array: \n");
	int *sort_arr = (int*)malloc(size * sizeof(int));
	for (i = 0; i<size; i++) {
		sort_arr[i] = rand() % 100;
		printf("%d ", sort_arr[i]);
	}
	printf("\n");
	insertion_sort(sort_arr, size);
	printf("Sorted array: \n");
	for (int i = 0; i < size; i++) {
		printf("%d ", sort_arr[i]);
	}
	printf("\n");
	return 0;
}