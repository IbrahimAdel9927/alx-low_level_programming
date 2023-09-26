#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 *
 * @head: the input
*/
void free_listint2(listint_t **head)
{
	listint_t *nod, nood;

	if (!head)
		return;

	nod = *head;
	while (nod)
	{
		nood = nod;
		nod = nod->next;
		free(nood);
	}
	*head = NULL;
}
