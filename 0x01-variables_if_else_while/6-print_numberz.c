#include <stdio.h>

/* prints all single digit numbers of base 10 starting from 0 . */
/* You are not allowed to use any variable of type char */
/* You can only use the putchar function */
/* You can only use putchar twice in your code */
/* All your code should be in the main function */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* Init counter */
	int ch;

	/* prints all single digit numbers of base 10 starting from 0 */
	for (ch = '0'; ch <= '9'; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
