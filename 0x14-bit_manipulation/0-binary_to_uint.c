/**
 * clc_pow - get power of number
 * @n: number will get its power
 * @p: power will rise on
 *
 * Return: Always te result.
 */
int clc_pow(int n, int p)
{
	int result = 1;

	if (p == 0)
	{
		result = 1;
	} else if (p == 1)
	{
		result = n;
	} else
	{
		while (p != 0)
		{
			result *= n;
			p--;
		}
	}

	return (result);
}

/**
 * binary_to_uint - convert binary to decimal
 * @b: the dicmal string will converted
 *
 * Return: Always the converted dicmal number.
 */
unsigned int binary_to_uint(const char *b)
{
	int i, pow_is;
	unsigned int result = 0;

	if (!b)
		return (0);

	i = 0;
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}

	i--;
	pow_is = 0;
	while (i >= 0)
	{
		if (b[i] != '0')
		{
			result += clc_pow(2, pow_is);
		}
		pow_is++;
		i--;
	}
	return (result);
}
