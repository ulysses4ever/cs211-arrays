#include "arrays.h"
#include "iostream"

using namespace std;

int main() {
	task_1();
	task_2();
	int result = task_3_zero();
	cout << "zero = " << result << endl;
	task_4();
	int arr1[4] = { 1, 2, 3, 4 };
	int arr2[4];
	task_5_copy(arr1, arr2, 4);
	cout << "arr1: ";
	for (int i = 0; i < 4; ++i)
		cout << arr1[i] << ' ';
	cout << "\ncopy of arr1: ";
	for (int i = 0; i < 4; ++i)
		cout << arr2[i] << ' ';
	task_6_poor_copy(arr1, arr2);
	cout << "\ncopy of same size\narr1: ";
	for (int i = 0; i < 4; ++i)
		cout << arr1[i] << ' ';
	cout << "\ncopy of arr1: ";
	for (int i = 0; i < 4; ++i)
		cout << arr2[i] << ' ';
	cout << endl;
	task_7_print(arr1, 4);

	return 0;
}
