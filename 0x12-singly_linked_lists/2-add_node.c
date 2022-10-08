#include "lists.h"
#include <stdlib.h>
#include<string.h>

/**
 * add_node - add new node at first of node
 * @head: the first of node list
 * @str: the data will be added to the node
 *
 * Return: Always 0.
 */
list_t *add_node(list_t **head, const char *str)
{
	int len_str;
	list_t *new = (list_t *)malloc(sizeof(list_t));

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

	for (len_str = 0; str[len_str] != '\0'; len_str++)
	;

	new->len = len_str;
	new->next = *head;
	*head = new;

	return (new);
}
