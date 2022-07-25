#include "main.h"

/**
 * _strdup - create newly allocated space in memory with copy of given string
 * @str: string will be copied
 *
 * Return: copied string location or NULL
 */
char *_strdup(char *str)
{
	char *cp;
	int counter, i;

	if (str == NULL)
		return (NULL);

	counter = 0;
	while (str[counter] != '\0')
		counter++;

	cp = malloc(sizeof(str) * (counter + 1));

	if (cp == NULL)
		return (NULL);

	for (i = 0; i <= counter; i++)
		cp[i] = str[i];

	return (cp);
}
