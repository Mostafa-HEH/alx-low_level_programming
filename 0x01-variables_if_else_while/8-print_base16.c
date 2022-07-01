#include <stdio.h>

/* prints all the numbers of base 16 in lowercase */
/* You can only use the putchar function */
/* All your code should be in the main function */
/* You can only use putchar three times in your code */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* Inilalize holder variables */
	int di;
	char ch;

	/* prints all the numbers of base 16 in lowercase */
	for (di = '0'; di <= '9'; di++)
		putchar(di);

	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
