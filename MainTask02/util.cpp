#include "util.h"

void print_test(int number, int expected, string test_name) {
	HANDLE h;
	h = GetStdHandle(STD_OUTPUT_HANDLE);

	long long actual = count_number_of_dividers(number);
	bool result = actual == expected;

	SetConsoleTextAttribute(h, (0 | 15));

	if (!result) {
		cout << "Number: " << number << endl;
		cout << "Is element: expected = " << expected
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