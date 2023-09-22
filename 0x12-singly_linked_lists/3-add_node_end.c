#include "lists.h"

/**
 * add_node_end - a function that adds a new node at
 * the end of a list_t list.
 *
 * @head: the first input
 * @str: the second input
 *
 * Return: the address of the new element,
 * or NULL if it failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nextn = malloc(sizeof(list_t));
	list_t *n = *head;

	if (!head || !nextn)
		return (NULL);
	if (str)
	{
		nextn->str = strdup(str);
		if (!nextn)
		{
			free(nextn);
			return (NULL);
		}
		nextn->len = _strlen(nextn->str);
	}
	if (n)
	{
		while (n->next)
		{
			n = n->next;
		}
		n->next = nextn;
	}
	else
	{
		*head = nextn;
	}
	return (nextn);
}
