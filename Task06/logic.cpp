#include "logic.h"

bool find_place_of_element(int* numbers, int number, int start, int end)
{
	int element_id = (start + end) / 2;
	int element = numbers[element_id];

	if (element == number)
	{
		return true;
	}
	else if (start >= end)
	{
		return false;
	}
	else if (element > number)
	{
		if (element_id - 1 < 0)
		{
			return false;
		}
		return find_place_of_element(numbers, number, start, element_id - 1);
	}
	else
	{
		return find_place_of_element(numbers, number, element_id + 1, end);
	}
}

bool binary_search(int* numbers, int size, int number)
{
	if (size <= 0 || numbers == nullptr)
	{
		return false;
	}

	return find_place_of_element(numbers, number, 0, size - 1);
}