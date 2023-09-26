#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n).
 *
 * @head: the input
 *
 * Return: int
*/
int pop_listint(listint_t **head)
{
	listint_t *nod;
	int i;

	if (!head || !*head)
		return (0);
	nod = (*head)->next;
	i = (*head)->n;
	free(*head);
	*head = nod;
	return (i);
}
