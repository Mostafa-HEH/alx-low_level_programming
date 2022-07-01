#include <stdio.h>

/* prints the lowercase alphabet in reverse */
/* You can only use the putchar function */
/* All your code should be in the main function */
/* You can only use putchar twice in your code */

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	/* init cahracter */
	char ch;

	/* prints the lowercase alphabet in reverse */
	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);

	putchar('\n');

	return (0);
}
