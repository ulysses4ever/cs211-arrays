#include <iostream>
#include <cassert>
#include "arrays.h"

// Task 1
void task_1()
{
    int n = 10;
    int * a = new int [n];
}


// Task 2
void task_2()
{
    int a[5] = {0};
	assert(!a[4]);
}


// returns zero
int task_3_zero()
{
	int a[5] {0};  
    assert(!a[4]);
    return a[4]; // don't touch this!
}

// Task 4
void task_4()
{
	int a[5]{ 1, 2, 3, 4, 5 };
    
    assert(a[0] == 1);
    assert(a[1] == 2);
    assert(a[2] == 3);
    assert(a[3] == 4);
    assert(a[4] == 5);    
}

#if 0
// Task 5
// copy arr1 to arr2
void task_5_copy(int * arr1, int * arr2, int size)
{
    arr2 = arr1;
}

// Task 6
// copy array `arr1` to array `arr2` of the same size
void task_6_poor_copy(int * arr1, int * arr2)
{
    // Hint: something wrong here; test this from main()
    for(int i = 0; i < sizeof(arr2); ++i)
    {
        arr2[i] = arr1[i];
    }
}

// Task 7
// print array `arr`
void task_7_print(int * arr, int size, char delim = ' ')
{
    // Hint: something wrong here; run this from main()
    for(int i = 0; i <= size; ++i)
    {
        std::cout << a[i] << delim;
    }
}

#endif
