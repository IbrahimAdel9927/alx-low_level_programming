#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a
 * new node at a given position.
 *
 * @head: the first input
 * @idx: the second input
 * @n: the third input
 *
 * Return: pointer
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nod, *n_nod = malloc(sizeof(listint_t));
	unsigned int k = 0;

	if (!head || !n_nod)
		return (NULL);
	n_nod->n = n;
	n_nod->next = NULL;
	if (!idx)
	{
		n_nod->next = *head;
		*head = n_nod;
		return (n_nod);
	}
	nod = *head;
	while (nod)
	{
		if (k == idx - 1)
		{
			n_nod->next = nod->next;
			nod->next = n_nod;
			return (n_nod);
		}
		k++;
		nod = nod->next;
	}
	free(n_nod);
	return (NULL);
}
