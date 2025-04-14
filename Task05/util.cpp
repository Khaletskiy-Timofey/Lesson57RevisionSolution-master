#include "util.h"

string array_to_string(int* numbers, int size)
{
	string array_string = "";

	for (int i = 0; i < size; i++)
	{
		array_string += to_string(numbers[i]) + " ";
	}

	return array_string;
}

void print_test(int* numbers, int size, int expected, string test_name) {
	HANDLE h;
	h = GetStdHandle(STD_OUTPUT_HANDLE);

	long long actual = sum_negative_elements(numbers, size);
	bool result = actual == expected;

	SetConsoleTextAttribute(h, (0 | 15));

	if (!result) {
		cout << "Index: " << array_to_string(numbers, size) << endl;
		cout << "Tribonacci number: expected = " << expected
			<< ", but actual = " << actual << endl;
	}

	cout << test_name << " --> ";

	string msg;

	if (result) {
		msg = "PASS(green)                   ";
		// background  color
		SetConsoleTextAttribute(h, (((2 << 4) | 15)));
	}
	else {
		msg = "FAIL(red)                     ";
		SetConsoleTextAttribute(h, ((4 << 4) | 15));
	}

	cout << msg << endl;

	SetConsoleTextAttribute(h, (0 | 14));
	cout << "--------------------------------------------------------" << endl;
	SetConsoleTextAttribute(h, (0 | 15));
}