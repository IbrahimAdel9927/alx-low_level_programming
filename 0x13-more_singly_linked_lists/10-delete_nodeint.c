#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node at
 * index index of a listint_t linked list.
 *
 * @head: the first input
 * @index: the second input
 *
 * Return: int
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *nod, *p_nod;
	unsigned int k = 0;

	if (!head || !*head)
		return (-1);
	if (!index)
	{
		nod = *head;
		*head = (*head)->next;
		free(nod);
		return (1);
	}
	nod = *head;
	while (nod)
	{
		if (k == index)
		{
			p_nod->next = nod->next;
			free(nod);
			return (1);
		}
		k++;
		p_nod = nod;
		nod = nod->next;
	}
	return (-1);
}
