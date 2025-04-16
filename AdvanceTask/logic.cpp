int try_size(int width, int height, int size)
{
	if (size <= 0)
	{
		return 0;
	}

	int other_size = try_size(width, height, size - 1);
	bool is_size_good = width % size == 0 && height % size == 0;

	if (is_size_good)
	{
		return other_size > size ? other_size : size;
	}
	else
	{
		return other_size;
	}
}

int find_max_size(int width, int height)
{
	if (width <= 0 || height <= 0)
	{
		return 0;
	}

	return try_size(width, height, width > height ? height : width);
}