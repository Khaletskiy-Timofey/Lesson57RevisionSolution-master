int try_divide(int number, int divider)
{
	if (divider >= number)
	{
		return 0;
	}

	int count = try_divide(number, divider + 1);

	if (number % divider == 0)
	{
		count++;
	}

	return count;
}

int count_dividers(int number)
{
	if (number <= 3)
	{
		return 0;
	}

	return try_divide(number, number + 1);
}