// [The Tribonacci Number]
// Число трибоначчи 
// 
// Необходимо разработать рекурсивную функцию, которая находит 
// число трибоначчи по его порядковому номеру.
// Числа трибоначчи – бесконечная последовательность целых чисел { tn },
// заданного с помощью рекуррентного соотношения:
// t1 = 0, t2 = 0, t3 = 1, t(n+3) = t(n+2) + t(n+1) + tn.
// Пример ряда трибоначчи : 0, 0, 1, 1, 2, 4, 7, 13, 24, 44, 81, 149, …
//                          1  2  3  4  5  6  7  8   9   10  11  12
// Первые три числа ряда трибоначчи – это 0, 0 и 1.
// Если порядковый номер задан некорректно, то нужно возвратить -1.

#include "logic.h"

long long get_tribonacci_number(int index)
{
	if (index < 1)
	{
		return -1;
	}

	if (index == 1 || index == 2)
	{
		return 0;
	}
	if (index == 3)
	{
		return 1;
	}

	long long tribonacci_number = get_tribonacci_number(index - 1);
	tribonacci_number += get_tribonacci_number(index - 2);
	tribonacci_number += get_tribonacci_number(index - 3);

	return tribonacci_number;
}