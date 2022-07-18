#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string will be located char in
 * @c: char that will start with
 *
 * Return: selected string if c is founded and null if not
 */
char *_strchr(char *s, char c)
{
	int i, is_found = 0, start;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			is_found = 1;
			start = i;
			break;
		}
	}

	if (is_found == 1)
	{
		for (; s[start] != '\0'; start++)
			return (s + start);
	}

	return ('\0');
}
