#include "main.h"

/**
 * print_last_digit - print the last digit of a number.
 * @n: print last digit
 *
 * Return: Always intger
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = (-1 * (n % 10));
		_putchar(n + '0');
		return (n);
	}
	else
	{
		n = (n % 10);
		_putchar(n + '0');
		return (n);
	}
}
