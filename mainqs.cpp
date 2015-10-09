#include <iostream>
#include "quick_sort.h"

void print(const int * arr, int size, char delim = ' ')
{
	for (int i = 0; i < size; ++i)
	{
		std::cout << arr[i] << delim;
	}
}

int main()
{
	//Тесты

	int a[5]{ 3, 2, 1, 0, 5 };
	my_qsort(a, 5); // 0 1 2 3 5
	print(a, 5);

	std::cout << std::endl;

	int b[3]{ 1, 6, 8 };
	my_qsort(b, 3); // 1 6 8
	print(b, 3);

	std::cout << std::endl;

	int c[1]{ 4 };
	my_qsort(c, 1); // 4
	print(c, 1);

	std::cout << std::endl;
}

/*
Лог работы:

0 1 2 3 5
1 6 8
4

*/