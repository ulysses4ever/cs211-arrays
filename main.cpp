#include <iostream>
#include "arrays.h"

int main()
{
	task_1(); //����� �-�� task_1

	task_2(); //����� �-�� task_2

	task_3_zero(); //����� �-�� task_3_zero

	task_4(); //����� �-�� task_4

	int a1[5]{ 1, 0, -5, 3, 10 };
	int a2[5]{ 0 };
	task_5_copy(a1, a2, 5); //����������� ��������� ������� a1 � ������ �2 � ������� �-�� task_5_copy

	task_7_print(a2, 5); //���������� ������� � ������� �-�� task_7_print

	std::cout << std::endl; //����������� ������

	int b1[3]{ 3, 5, -2 };
	int b2[3];
	task_6_poor_copy(b1, b2, 3); //����������� ��������� ������� b1 � ������ b2 � ������� �-�� task_6_poor_copy

	task_7_print(b2, 3); //���������� ������� � ������� �-�� task_7_print
}