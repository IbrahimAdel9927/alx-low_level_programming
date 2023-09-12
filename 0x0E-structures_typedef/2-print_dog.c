#include <stdio.h>
#include "dog.h"

/**
 * print_dog - a function that prints a struct dog
 *
 * @p: the input
*/

void print_dog(struct dog *p)
{
	if (p)
	{
		if (p->name)
			printf("Name: %s\n", p->name);
		else
			printf("Name: %s\n", "(nill)");
		printf("Age: %f\n", p->age);
		if (p->owner)
			printf("Owner: %s\n", p->owner);
		else
			printf("Owner: %s\n", "(nill)");
	}
}
