#ifndef DOG_H
#define DOG_H

/**
 * struct dog - an struct
 *
 * @name: the name
 * @age: the age
 * @owner: the owner's name
 *
 * Description: a dog struct
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
