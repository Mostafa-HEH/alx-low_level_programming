#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: only 0 (Success)
 */
int main(void)
{
	char ch;

	/* Print alphabet in lowercase */
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	/* Print alphabet in upparcase */
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
