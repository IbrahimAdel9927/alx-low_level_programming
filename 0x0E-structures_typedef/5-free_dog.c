#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - a function that frees dogs.
 *
 * @p: the input
*/

void free_dog(dog_t *p)
{
	if (p)
	{
		if (p->name)
			free(p->name);
		if (p->owner)
			free(p->owner);
		free(p);
	}
}
