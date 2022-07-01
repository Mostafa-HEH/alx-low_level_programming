#include <stdio.h>

/* prints all possible combinations of single-digit numbers */
/* Numbers must be separated by ,, followed by a space */
/* You can only use the putchar */
/* All your code should be in the main function */
/* You can only use putchar four times maximum in your code */
/* You are not allowed to use any variable of type char */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* Initalize the number */
	int counter;

	/* prints all possible combinations of single-digit numbers */
	for (counter = '0'; counter <= '9'; counter++)
	{
		putchar(counter);
		if (counter != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
