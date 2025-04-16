#include "util.h"

void print_test(int width, int height, int expected, string test_name) {
	HANDLE h;
	h = GetStdHandle(STD_OUTPUT_HANDLE);

	long long actual = find_max_size(width, height);
	bool result = actual == expected;

	SetConsoleTextAttribute(h, (0 | 15));

	if (!result) {
		cout << "Size: " << width << "x" << height << endl;
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