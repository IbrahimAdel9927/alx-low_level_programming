#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at
 * the beginning of a listint_t list.
 *
 * @head: the first input;
 * @n: the second input
 *
 * Return: pointer
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_nod = malloc(sizeof(listint_t));

	if (!head || !n_nod)
		return (NULL);
	n_nod->next = NULL;
	n_nod->n = n;
	if (*head)
		n_nod->next = *head;
	*head = n_nod;
	return (n_nod);
}
