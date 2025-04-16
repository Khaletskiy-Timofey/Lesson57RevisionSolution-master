#include "test.h"

void test01()
{
	int size = 5;
	int* numbers = new int[size];
	numbers[0] = 1;
	numbers[1] = 2;
	numbers[2] = 3;
	numbers[3] = 4;
	numbers[4] = 5;
	int number = 4;
	bool expected = true;
	print_test(numbers, size, number, expected, "test01");
}

void test02()
{
	int size = 3;
	int* numbers = new int[size];
	numbers[0] = -5;
	numbers[1] = 0;
	numbers[2] = 4;
	int number = 4;
	bool expected = true;
	print_test(numbers, size, number, expected, "test02");
}

void test03()
{
	int size = 3;
	int* numbers = new int[size];
	numbers[0] = -1;
	numbers[1] = 0;
	numbers[2] = 1;
	int number = 2;
	bool expected = false;
	print_test(numbers, size, number, expected, "test03");
}

void test04()
{
	int size = 0;
	int* numbers = nullptr;
	int number = 4;
	bool expected = false;
	print_test(numbers, size, number, expected, "test04");
}

void test05()
{
	int size = -1;
	int* numbers = nullptr;
	int number = 4;
	bool expected = false;
	print_test(numbers, size, number, expected, "test05");
}

void test06()
{
	int size = 6;
	int* numbers = new int[size];
	numbers[0] = -1;
	numbers[1] = 0;
	numbers[2] = 3;
	numbers[3] = 5;
	numbers[4] = 10;
	numbers[5] = 13;
	int number = 10;
	bool expected = true;
	print_test(numbers, size, number, expected, "test06");
}

void test07()
{
	int size = 5;
	int* numbers = new int[size];
	numbers[0] = -1;
	numbers[1] = 0;
	numbers[2] = 3;
	numbers[3] = 10;
	numbers[4] = 13;
	int number = 5;
	bool expected = false;
	print_test(numbers, size, number, expected, "test07");
}