#include "main.h"

/**
 * print_line - draw a straight line in the terminal
 * @n: number of _ in line, if equle or less than 0 will be new line
 *
 * Return: Always (0) Success
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
			_putchar(95);

		_putchar('\n');
	}
}
