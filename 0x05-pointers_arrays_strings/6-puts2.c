#include "main.h"

/**
 * puts2 - prints every odd character of a string
 * @str: string will be checked
 *
 * Reurn: Always nothing
 */
void puts2(char *str)
{
	int len, i;

	len = 0;
	while (str[len] != '\0')
		len++;

	i = 0;
	while (i < len)
	{
		if ((str[i] % 2) == 0)
			_putchar(str[i]);
		else
			_putchar('\n');
		i++;
	}

	_putchar('\n');
}
