#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - add Node to the end if Nodes
 * @head: the first of list
 * @str: string will be copied
 *
 * Return: Always new Node or Null.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int counter;
	list_t *new;
	list_t *p;

	p = *head;
	while (p && p->next != NULL)
		p = p->next;

	for (counter = 0; str[counter] != '\0'; counter++)
	;

	new = (list_t *)malloc(sizeof(list_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->str = strdup(str);

	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = counter;
	new->next = NULL;

	if (p == NULL)
		*head = new;
	else
		p->next = new;

	return (new);
}
