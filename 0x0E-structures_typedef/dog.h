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

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
