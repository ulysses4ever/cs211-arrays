#include <iostream>
#include <cassert>

// task 1
void task_1()
{
    int n = 10;
    int a[n];
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
    // Task 3
    // Hint 1: fix with initialization (not assignment)
    // Hint 2: you can use only one zero and not five of them! cf. task 2
    int a[5] = {0};

    assert(!a[4]);
    return a[4]; // don't touch this!
}

void task_4()
{
    // Task 4: asserts at the end must hold
    // Hint: fix with initialization (not assignment)
    int a[5] = {1, 2, 3, 4, 5};

    assert(a[0] == 1);
    assert(a[1] == 2);
    assert(a[2] == 3);
    assert(a[3] == 4);
    assert(a[4] == 5);
}

// Task 5
// copy arr1 to arr2
void task_5_copy(int * arr1, int * arr2, int size)
{
    for (int i = 0; i < size; i++)
        arr2[i] = arr1[i];
}

// Task 6
// copy array `arr1` to array `arr2` of the same size
void task_6_poor_copy(int * arr1, int * arr2)
{
    for(int i = 0; i < sizeof(arr2) / sizeof(int); ++i)
        arr2[i] = arr1[i];
}

// Task 7
// print array `arr`
void task_7_print(int * arr, int size, char delim = ' ')
{
    // Hint: something wrong here; run this from main()
    for(int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << delim;
    }
}
