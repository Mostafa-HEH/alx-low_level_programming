#include <stdio.h>

/**
 * main - Entry point
 * @argc: offset count
 * @argv: offset value
 *
 * Return: Always 0 on Success
 */


int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
