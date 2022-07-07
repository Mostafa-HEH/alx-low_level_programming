#include "main.h"

/**
 * more_numbers - print 10 times the numbers, from 0 to 14 .
 *
 * Return: Always nothing
 */
void more_numbers(void)
{
	int times, i;

	times = 0;
	while (times <= 9)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar(i / 10 + '0');
			_putchar((i % 10) + '0');
		}

		times++;
		 _putchar('\n');
	}
}
