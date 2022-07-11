#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: string will be reverse
 *
 * Return: Always nothing
 */
void print_rev(char *s)
{
	int i, len;

	len = 1;
	while (s[len] != '\0')
	{
		len++;
	}

	i = len;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}

	_putchar('\n');
}
