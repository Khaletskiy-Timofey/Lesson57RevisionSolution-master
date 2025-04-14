#include "logic.h"

int sum_negative_elements(int* numbers, int size)
{
	if (size <= 0 || numbers == nullptr)
	{
		return 0;
	}

	int sum = sum_negative_elements(numbers, size - 1);

	if (numbers[size - 1] < 0)
	{
		sum += abs(numbers[size - 1]);
	}

	return sum;
}