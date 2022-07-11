#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: string will be reversed.
 *
 * Return: Always nothing.
 */
void rev_string(char *s)
{
	int length, i, j;
	char temp, *str;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}

	str = s;

	for (i = 0; i < (length - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(str + j);
			*(str + j) = *(str + (j - 1));
			*(str + (j - 1)) = temp;
		}
	}

}
