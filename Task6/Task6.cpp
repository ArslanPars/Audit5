// Task6.cpp: определяет точку входа для консольного приложения.
//

//Реалізувати алгоритм сортування вибором.

#include "stdafx.h"
#include "time.h"
#include <Windows.h>
void selection_sort(int*, const int);
#define SIZE 20

int main()
{
	srand(time(NULL));
	int *arr = (int*) malloc(SIZE * sizeof(int));
	printf("Raw array:\n");
	for (int i = 0; i < SIZE; ++i) {
		arr[i] = rand() % 100;
		printf("%d ", arr[i]);
	}
	printf("\nSorted array:\n");
	selection_sort(arr, SIZE);
	for (int i = 0; i < SIZE; ++i) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}

void selection_sort(int* arr, const int size) {
	int i, j, tmp;
	for (i = 0; i < size; ++i) {
		int maxi = i;
		for (j = i + 1; j < size; ++j) {
			if (arr[j] < arr[maxi]) {
				maxi = j;
			}
		}
		tmp = arr[i];
		arr[i] = arr[maxi];
		arr[maxi] = tmp;
	}
}