#include "lists.h"

/**
 * _strlen - a function that returns the length of a string.
 *
 * @s: the input
 *
 * Return: the length of a string.
*/

int _strlen(char *s)
{
	int a;

	if (!s)
		return (0);
	for (a = 0; *s ; s++)
		a++;
	return (a);
}
