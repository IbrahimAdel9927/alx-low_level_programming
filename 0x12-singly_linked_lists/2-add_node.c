#include "lists.h"

/**
 * add_node -  a function that adds a new node at the
 * beginning of a list_t list.
 *
 * @head: the first input
 * @str: the second input
 *
 * Return: the address of the new element,
 * or NULL if it failed
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *nexth = malloc(sizeof(list_t));

	if (!head || !nexth)
		return (NULL);
	if (str)
	{
		nexth->str = strdup(str);
		if (!nexth->str)
		{
			free(nexth);
			return (NULL);
		}
		nexth->len = _strlen(nexth->str);
	}
	nexth->next = *head;
	*head = nexth;
	return (nexth);
}
