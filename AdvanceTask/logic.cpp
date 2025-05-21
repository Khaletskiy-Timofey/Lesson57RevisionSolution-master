int find_max_size(int width, int height)
{
	if (width <= 0 || height <= 0)
	{
		return 0;
	}

	if (width < height)
	{
		int t = width;
		width = height;
		height = t;
	}

	if (width % height == 0)
	{
		return height;
	}

	return find_max_size(height, width % height);
}