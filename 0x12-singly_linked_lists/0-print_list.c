#include "lists.h"

/**
 * _strlen - find the leangth of str
 *
 * @s: the input
 *
 * Return: int
*/

int _strlen(char *s)
{
	int x;

	if (!s)
		return (0);
	for (x = 0; *s; s++)
		x++;
	return (x);
}

/**
 * print_list - a function that prints all the
 * elements of a list_t list.
 *
 * @h: the input
 *
 * Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}
