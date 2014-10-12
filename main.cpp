#include <locale>
#include <cassert>
#include <iostream>
#include <cstdio>
#include "arrays.h"

using namespace std;

int main()
{
	task_1();

	task_2();

	assert(0 == task_3_zero());

	task_4();

	int a[3]{1, 2, 3}; // тест task_6() эквивалентен данному, т.к. функции одинаковы
	int b[3] = { 0 };
	task_5_copy(a, b, 3);
	assert(a[0] == b[0]);
	assert(a[1] == b[1]);
	assert(a[2] == b[2]);

	task_7_print(b, 3);

	system("pause");

}