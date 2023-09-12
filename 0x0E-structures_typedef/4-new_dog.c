#include "dog.h"
#include <stdlib.h>

/**
 * _sl - get the length of string
 *
 * @str: the input
 *
 * Return: the length
*/

int _sl(const char *str)
{
	int l = 0;

	while (*str++)
		l++;
	return (l);
}

/**
 * _sc - return copy of string
 *
 * @src: the first input
 * @new: the new string
 *
 * Return: pointer to string
*/

char *_sc(char *new, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		new[i] = src[i];
	new[i] = '\0';

	return (new);
}

/**
 * new_dog - a function that creates a new dog.
 *
 * @name: first input
 * @age: second input
 * @owner: third input
 *
 * Return: NULL if the function fails
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newd;

	if (!name || age < 0 || !owner)
		return (NULL);

	newd = (dog_t *) malloc(sizeof(dog_t));
	if (newd == NULL)
		return (NULL);
	newd->name = malloc(sizeof(char) * (_sl(name) + 1));
	if ((*newd).name == NULL)
	{
		free(newd);
		return (NULL);
	}
	newd->owner = malloc(sizeof(char) * (_sl(owner) + 1));
	if ((*newd).owner == NULL)
	{
		free(newd->name);
		free(newd);
		return (NULL);
	}
	newd->name = _sc(newd->name, name);
	newd->age = age;
	newd->owner = _sc(newd->owner, owner);
}
