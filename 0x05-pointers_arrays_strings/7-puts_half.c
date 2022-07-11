#include "main.h"

/**
 * puts_half - print half of a string
 * @str: string will be split
 *
 * Return: ALways nothing
 */
void puts_half(char *str)
{
	int len, i;

	len = 0;
	while (str[len] != '\0')
		len++;

	for (i = len / 2; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
