#include "main.h"

/**
 * _islower - check lower case characters
 * @c: The number to be checked
 *
 * Return: Always 1 if c is lower and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
