#include "lists.h"
#include <stdio.h>

/**
 * print_list - print list of elements
 * @h: the linked list will be printed
 *
 * Return: Always teh number of Nodes.
 */
size_t print_list(const list_t *h)
{
	size_t counter = 0;
	const list_t *p = h;

	while (p)
	{
		if (p->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", p->len, p->str);
		counter++;
		p = p->next;
	}

	return (counter);
}
