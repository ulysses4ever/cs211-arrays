#include <iostream>
#include <cassert>


// NOTE: you should move this `if` down as you start solving each task

void task_1()
{
    int const n = 10;
    int a[n];
}


// Task 2
void task_2()
{
    int a[5] = {0};
	assert(!a[4]); // последний элемен инициализирован нулём
}

// returns zero
int task_3_zero()
{
	int a[5] = { 0 }; 
    assert(!a[4]);
    return a[4]; // don't touch this!
}


void task_4()
{
    // Task 4: asserts at the end must hold
    // Hint: fix with initialization (not assignment)
	int a[5] = { 1, 2, 3, 4, 5 };
    
    assert(a[0] == 1);
    assert(a[1] == 2);
    assert(a[2] == 3);
    assert(a[3] == 4);
    assert(a[4] == 5);    
}

// Task 5
// copy arr1 to arr2
void task_5_copy(const int * arr1, int * arr2, int size)
{
	for (int i = 0; i < size; i++)
		arr2[i] = arr1[i];
}

// Task 6
// copy array `arr1` to array `arr2` of the same size
void task_6_poor_copy(const int * arr1, int * arr2, int size)
{
	for (int i = 0; i < size; i++)
		arr2[i] = arr1[i];
}
#if 0
// Task 7
// print array `arr`
void task_7_print(int * arr, int size, char delim)
{
	// Hint: something wrong here; run this from main()
	for (int i = 0; i < size; ++i)
	{
		std::cout << arr[i] << delim;
	}

#endif
