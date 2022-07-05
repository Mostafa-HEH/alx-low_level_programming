#include "main.h"

/**
 * _abs -  computes the absolute value of an integer.
 * @n: number to be checked.
 *
 * Return: Always integer
 */
int _abs(int n)
{
	if (n < 0)
		return (n = -n);
	else
		return (n);
}
