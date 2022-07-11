#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: first integer
 * @b: second intger
 *
 * Return: Always nothing
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;

	*a = *b;
	*b = tmp;
}
