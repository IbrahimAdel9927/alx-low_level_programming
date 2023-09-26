#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node
 * of a listint_t linked list.
 *
 * @head: the first input
 * @index: the second input
 *
 * Return: pointer
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nod;
	unsigned int i;

	for (nod = head, i = 0; nod && i < index; nod = nod->next, i++)
		;
	return (nod);
}
