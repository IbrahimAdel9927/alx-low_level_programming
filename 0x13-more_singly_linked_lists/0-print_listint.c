#include "lists.h"

/**
 * print_listint - a function that prints all the
 * elements of a listint_t list.
 *
 * @h: the input
 *
 * Return: the size
*/
size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
