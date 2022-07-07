#include "main.h"

/**
 * print_diagonal - draw a diagonal line on the terminal.
 * @n: is number for / is printed , if 0 or less print newline.
 *
 * Return: always nothing
 */
void print_diagonal(int n)
{
	int times, spaces;

	if (n <= 0)
		_putchar('\n');
	else
		for (times = 0; times < n; times++)
		{
			for (spaces = 0; spaces < times; spaces++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
}
