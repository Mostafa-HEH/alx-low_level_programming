#include <stdio.h>

/* prints all possible different combinations of three digits. */
/* Numbers must be separated by ,, followed by a space */
/* The three digits must be different */
/* 012, 120, 102, 021, 201, 210 are considered the same */
/* Print only the smallest combination of three digits */
/* Numbers should be printed in ascending order, with three digits */
/* You can only use the putchar function */
/* You can only use putchar six times maximum in your code */
/* You are not allowed to use any variable of type char */
/* All your code should be in the main function */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* Inilial variables */
	int first, second, third;

	first = 48;
	second = 48;
	third = 48;

	while (first < 58)
	{
		second = first + 1;
		while (second < 58)
		{
			third = second + 1;
			while (third < 58)
			{
				putchar(first);
				putchar(second);
				putchar(third);

				if (first < 55 || second < 56 || third < 57)
				{
					putchar(44);
					putchar(32);
				}

				third++;
			}

			second++;
		}

		first++;
	}

	putchar('\n');
	return (0);
}
