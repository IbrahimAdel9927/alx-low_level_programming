#include "lists"

/**
 * add_nodeint_end - a function that adds a new node
 * at the end of a listint_t list.
 *
 * @head: the first input
 * @n: the second input
 *
 * Return: a pointer
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n_nod = malloc(sizeof(listint_t));
	listint_t *nod;

	if (!head || !n_nod)
		return (NULL);
	n_nod->next = NULL;
	n_nod->n = n;
	if (!*head)
		*head = n_nod;
	else
	{
		nod = *head;
		while (nod->next)
			nod = nod->next;
		nod->next = n_nod;
	}
	return (n_nod);
}
