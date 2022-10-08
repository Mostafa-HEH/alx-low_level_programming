#include "lists.h"

/**
 * list_len - count Nodes
 * @h: first of Nodes will be checked
 *
 * Return: Always number of nodes.
 */
size_t list_len(const list_t *h)
{
	const list_t *p = h;
	int counter = 0;

	while (p)
	{
		p = p->next;
		counter++;
	}

	return (counter);
}
