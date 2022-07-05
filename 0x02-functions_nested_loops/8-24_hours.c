#include "main.h"

/**
 * jack_bauer - print every minute of 00:00 to 23:59.
 *
 * Return: Always void
 */
void jack_bauer(void)
{
	int h, m;

	for (h = 00; h < 24; h++)
	{
		for (m = 00; m < 60; m++)
		{
			_putchar(((h / 10) + '0'));
			_putchar(((h % 10) + '0'));
			_putchar(':');
			_putchar(((m / 10) + '0'));
			_putchar(((m % 10) + '0'));
			_putchar('\n');
		}
	}
}
