﻿// Task3.cpp: определяет точку входа для консольного приложения.
//

///Реалізувати обчислення чисел Фібоначі

#include "stdafx.h"

int fib(int n, int p, int c)
{
	int f;
	if (n <= 2) {
		f = c;
		printf("%d, ", c);
		return f;
	}
	return fib(n - 1, c, p + c);
}

int main()
{
	int i, j;
	for (i = 1; i <= 20; i++) {
		j = fib(i, 1, 1);
	}
	printf("\n");
	return 0;
}

// 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765...
