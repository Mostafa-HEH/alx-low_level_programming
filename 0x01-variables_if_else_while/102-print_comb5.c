#include <stdio.h>

/* prints all possible combinations of two two-digit numbers. */
/* The numbers should range from 0 to 99 */
/* The two numbers should be separated by a space */
/* All numbers should be printed with two digits. 1 should be printed as 01 */
/* numbers must be separated by comma, followed by a space */
/* The combinations of numbers should be printed in ascending order */
/* 00 01 and 01 00 are considered as the same */
/* You can only use the putchar function */
/* You can only use putchar eight times maximum in your code */
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
	int first, second, third, fourth;

	first = 48;
	while (first < 58)
	{
		second = 48;
		while (second < 58)
		{
			fourth = second + 1;
			third = first;
			while (third < 58)
			{
				while (fourth < 58)
				{
					putchar(first);
					putchar(second);
					putchar(32);
					putchar(third);
					putchar(fourth);
					if (first < 57 || second < 56 || third < 57 || fourth < 57)
					{
						putchar(44);
						putchar(32);
					}
					fourth++;
				}
				fourth = 48;
				third++;
			}
			second++;
		}
		first++;
	}

	putchar('\n');
	return (0);
}
