#include "main.h"

/**
 * print_alphabet_x10 - prit alphabet in lowercase 10 times
 *
 * Return: Always 0 0
 */
void print_alphabet_x10(void)
{
	int i;
	int max;

	max = 1;
	while (max <= 10)
	{
		i = 97;
		while (i <= 122)
		{
			_putchar(i);
			i++;
		}

		_putchar('\n');
		max++;
	}
}
