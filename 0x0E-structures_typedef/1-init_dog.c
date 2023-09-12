#include "dog.h"

/**
 * init_dog -  a function that initialize a
 * variable of type struct dog
 *
 * @p: the struct
 * @name: first input
 * @age: second input
 * @owner: third input
*/

void init_dog(struct dog *p, char *name, float age, char *owner)
{
	if (p)
	{
		p->name = name;
		p->age = age;
		p->owner = owner;
	}
}
