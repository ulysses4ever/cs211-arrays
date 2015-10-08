#include <iostream>
#include "arrays.h"

int main()
{
	task_1(); //вызов ф-ии task_1

	task_2(); //вызов ф-ии task_2

	task_3_zero(); //вызов ф-ии task_3_zero

	task_4(); //вызов ф-ии task_4

	int a1[5]{ 1, 0, -5, 3, 10 };
	int a2[5]{ 0 };
	task_5_copy(a1, a2, 5); //копирование элементов массива a1 в массив а2 с помощью ф-ии task_5_copy

	task_7_print(a2, 5); //распечатка массива с помощью ф-ии task_7_print

	std::cout << std::endl; //разделитель вывода

	int b1[3]{ 3, 5, -2 };
	int b2[3];
	task_6_poor_copy(b1, b2, 3); //копирование элементов массива b1 в массив b2 с помощью ф-ии task_6_poor_copy

	task_7_print(b2, 3); //распечатка массива с помощью ф-ии task_7_print
}