#include "logic.h"

bool is_element_in_array(int* numbers, int number, int start, int end)
{
	int element_id = (start + end) / 2;
	int element = numbers[element_id];

	return element == number ? true : start >= end ? false : element > number ? element_id - 1 < 0 ? false : is_element_in_array(numbers, number, start, element_id - 1) : is_element_in_array(numbers, number, element_id + 1, end);
}
/* Big return is this code:

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
	else
	{
		return find_place_of_element(numbers, number, start, element_id - 1);
	}
}
else
{
	return find_place_of_element(numbers, number, element_id + 1, end);
}*/

bool binary_search(int* numbers, int size, int number)
{
	return size <= 0 || numbers == nullptr ? false : is_element_in_array(numbers, number, 0, size - 1);
}