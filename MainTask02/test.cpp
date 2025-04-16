#include "test.h"

void test01()
{
	int number = -1;
	int expected = 0;
	print_test(number, expected, "test01");
}

void test02()
{
	int number = 4;
	int expected = 1;
	print_test(number, expected, "test02");
}

void test03()
{
	int number = 10;
	int expected = 2;
	print_test(number, expected, "test03");
}

void test04()
{
	int number = 7;
	int expected = 0;
	print_test(number, expected, "test04");
}

void test05()
{
	int number = 16;
	int expected = 3;
	print_test(number, expected, "test05");
}

void test06()
{
	int number = 12;
	int expected = 3;
	print_test(number, expected, "test06");
}

void test07()
{
	int number = 60;
	int expected = 4;
	print_test(number, expected, "test07");
}