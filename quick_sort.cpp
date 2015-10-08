#include <iostream>
#include <cstdlib>
 
using std::rand;
using std::swap;
using std::cout;
 
// pivot - "опорный" элемент
// partition - переупорядочивает элементы части массива,
// заданной отрезком [left, right), так что в начале
// следуют элементы меньшие pivot, а в конце - большие;
// возвращает место начала блока элементов, больших pivot;
int * partition(int * left, int * right, int pivot) 
{
	int * store = left; // место для вставки элементов, меньших pivot
	for (int * p = left; p != right; ++p)
		if (*p <= pivot)
			swap(*p, *store++);
	return store;
}
 
void my_qsort(int * arr, int n) 
{
	if (n <= 1)
		return; // массив в 1 или 0 элементов уже упорядочен
	int * pivotPtr = arr + rand() % n; // случайный выбор опорного элемента
	int newPivotIdx = partition(arr, arr + n, *pivotPtr) - arr;
	my_qsort(arr, newPivotIdx);
	my_qsort(arr + newPivotIdx, n - newPivotIdx);
}

void println(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << "\n";
}

int main()
{
	const int m = 9;
	int a[m]{666, 1, 3, 2, 5, 4, 0, -666, 99};
	println(a, m);
	my_qsort(a, m);
	println(a, m);
	cout << "\n";

	const int n = 5;
	int b[n]{1, 666, -666, 0, 2};
	println(b, n);
	my_qsort(b, n);
	println(b, n);
	cout << "\n";

	system("pause");
}