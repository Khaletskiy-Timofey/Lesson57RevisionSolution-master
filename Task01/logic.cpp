// [The Count of Even Digits]
// Количество чётных цифр 
//
// Необходимо разработать рекурсивную функцию, которая подсчитывает 
// количество чётных цифр у заданного пользователем целого числа.
// Число может быть как положительным, так и отрицательным.
// Не забудьте, что цифра ноль в математике является чётным числом. 

#include "logic.h"

int count_even_digits(long long number)
{
	if (number == 0)
	{
		return 1;
	}
	if (number / 10 == 0)
	{
		if (number % 2 == 0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}

	int even_digits = count_even_digits(number / 10);

	if (number % 2 == 0)
	{
		even_digits++;
	}

	return even_digits;
}