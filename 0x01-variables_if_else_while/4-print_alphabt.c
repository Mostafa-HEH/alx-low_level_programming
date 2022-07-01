#include <stdio.h>

/* prints the alphabet in lowercase, followed by a new line. */
/* Print all the letters except q and e. */
/* Use putchar only. */
/* All your code should be in the main function. */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* initalize variables */
	char ch;

	/* prints the alphabet in lowercase, followed by a new line. */
	for (ch = 'a'; ch <= 'z'; ch++)
	{
	/* Print all the letters except q and e. */
		if ((ch != 'q') && (ch != 'e'))
			putchar(ch);
	}

	putchar('\n');

	return (0);
}
