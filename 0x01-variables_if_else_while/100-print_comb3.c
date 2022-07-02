#include <stdio.h>

/* prints all possible different combinations of two digits. */
/* Numbers must be separated by ,, followed by a space */
/* The two digits must be different */
/* 01 and 10 are considered the same combination of the two digits 0 and 1 */
/* Print only the smallest combination of two digits */
/* Numbers should be printed in ascending order, with two digits */
/* You can only use the putchar */
/* You can only use putchar five times maximum */
/* You are not allowed to use any variable of type char */
/* All your code should be in the main function */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* Initalize variables */
	int first_digit, second_digit;

	first_digit = 48;
	second_digit = 48;

	/* prints all possible different combinations of two digits. */
	while (first_digit < 58)
	{
		second_digit = first_digit + 1;

		while (second_digit < 58)
		{
			putchar(first_digit);
			putchar(second_digit);

			if (first_digit < 56 || second_digit < 57)
			{
				putchar(44);
				putchar(32);
			}
			second_digit++;
		}
		first_digit++;
	}

	putchar('\n');
	return (0);
}
