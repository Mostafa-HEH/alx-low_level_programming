#include "main.h"

/**
 * puts2 - prints every odd character of a string
 * @str: string will be checked
 *
 * Reurn: Always nothing
 */
void puts2(char *str)
{
	int len = 0;

	while (len >= 0)
	{
		if (str[len] == '\0')
		{
			_putchar('\n');
			break;
		}

		if (len % 2 == 0)
			_putchar(str[len]);

		len++;
	}
}
