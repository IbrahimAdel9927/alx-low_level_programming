#include "lists.h"

/**
 * free_list - a function that frees a list_t list.
 *
 * @head: the input
*/

void free_list(list_t *head)
{
	list_t *ig, *nor;

	if (!head)
		return;
	ig = head;
	while (ig)
	{
		nor = ig->next;
		free(ig->str);
		free(ig);
		ig = nor;
	}
}
