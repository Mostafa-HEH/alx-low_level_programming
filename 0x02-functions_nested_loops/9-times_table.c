#include "main.h"

/**
 * times_table -  prints the 9 times table, starting with 0
 *
 * Return: Always nothing
 */
void times_table(void)
{
	int row, cel, inc;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		for (cel = 1; cel <= 9; cel++)
		{
			inc = (row * cel);

			if ((inc / 10) > 0)
			{
				_putchar((inc / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}

			_putchar((inc % 10) + '0');

			if (cel < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}

		_putchar('\n');
	}
}
