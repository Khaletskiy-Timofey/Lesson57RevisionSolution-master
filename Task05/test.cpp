#include "test.h"

void test01()
{
	int size = 4;
	int* numbers = new int[size];
	numbers[0] = -1;
	numbers[1] = 10;
	numbers[2] = 5;
	numbers[3] = -6;
	int expected = 7;
	print_test(numbers, size, expected, "test01");
}

void test02()
{
	int size = 5;
	int* numbers = new int[size];
	numbers[0] = -1;
	numbers[1] = -2;
	numbers[2] = -3;
	numbers[3] = -4;
	numbers[4] = -5;
	int expected = 15;
	print_test(numbers, size, expected, "test02");
}

void test03()
{
	int size = 2;
	int* numbers = new int[size];
	numbers[0] = 1;
	numbers[1] = 8;
	int expected = 0;
	print_test(numbers, size, expected, "test03");
}

void test04()
{
	int size = 0;
	int* numbers = nullptr;
	int expected = 0;
	print_test(numbers, size, expected, "test04");
}

void test05()
{
	int size = -1;
	int* numbers = nullptr;
	int expected = 0;
	print_test(numbers, size, expected, "test05");
}

void test06()
{
	int size = 7;
	int* numbers = new int[size];
	numbers[0] = -1;
	numbers[1] = 8;
	numbers[2] = -6;
	numbers[3] = 13;
	numbers[4] = 25;
	numbers[5] = -14;
	numbers[6] = 3;
	int expected = 21;
	print_test(numbers, size, expected, "test06");
}

void test07()
{
	int size = 1;
	int* numbers = new int[size];
	numbers[0] = 0;
	int expected = 0;
	print_test(numbers, size, expected, "test07");
}