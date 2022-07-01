#include <stdio.h>

/* prints all single digit numbers of base 10 starting from 0 */
/* All your code should be in the main function */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* init start counter */
	int counter;

	/* prints all single digit numbers of base 10 starting from 0 */
	for (counter = 0; counter < 10; counter++)
		printf("%d", counter);

	printf("\n");

	return (0);
}
