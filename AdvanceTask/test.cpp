#include "test.h"

void test01()
{
	int width = 1680;
	int height = 640;
	int expected = 80;
	print_test(width, height, expected, "test01");
}

void test02()
{
	int width = 1920;
	int height = 1080;
	int expected = 120;
	print_test(width, height, expected, "test02");
}

void test03()
{
	int width = 564;
	int height = 876;
	int expected = 12;
	print_test(width, height, expected, "test03");
}

void test04()
{
	int width = 100;
	int height = 200;
	int expected = 100;
	print_test(width, height, expected, "test04");
}

void test05()
{
	int width = 1111;
	int height = 3333;
	int expected = 1111;
	print_test(width, height, expected, "test05");
}

void test06()
{
	int width = 1234;
	int height = 9876;
	int expected = 2;
	print_test(width, height, expected, "test06");
}

void test07()
{
	int width = -11111;
	int height = -33333;
	int expected = 0;
	print_test(width, height, expected, "test07");
}