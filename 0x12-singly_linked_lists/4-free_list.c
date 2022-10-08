#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free all list nodes
 * @head: list will be frees
 *
 * Return: Always Nothing.
 */
void free_list(list_t *head)
{
	list_t *p, *q;

	p = head;
	while (p)
	{
		q = p;
		p = p->next;

		head = p;
		free(q->str);
		free(q);
	}
}
