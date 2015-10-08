#include <iostream>
#include <cassert>
#include "arrays.h"

using namespace std;

int main()
{
	task_1();
	task_2();
	task_3_zero();
	task_4();

	int a[3]{1, 2, 3};
	int b[3];
	int c[3];

	task_5_copy(a, b, 3);
	assert(a[0] == 1);
	assert(a[1] == 2);
	assert(a[2] == 3);

	task_6_poor_copy(a, c, 3);
	assert(c[0] == 1);
	assert(c[1] == 2);
	assert(c[2] == 3);

	task_7_print(a,3);

	system("pause");
}