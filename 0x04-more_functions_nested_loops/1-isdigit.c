#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: the int will be checked
 *
 * Return: 1 if is digit, else return 0
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
