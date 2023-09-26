#include "lists.h"

/**
 * reverse_listint - a function that reverses
 * a listint_t linked list.
 *
 * @head: the input
 *
 * Return: a pointer
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *nod = NULL, *n = NULL;

	if (!head || !*head)
		return (NULL);
	nod = *head;
	*head = NULL;
	while (node)
	{
		n = nod->next;
		nod-> = *head;
		*head = nod;
		nod = n;
	}
	return (*head);
}
