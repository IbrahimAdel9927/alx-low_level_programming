#include "main.h"

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

	for (a = 0; *s != '\0'; s++)
		a++;
	return (a);
}
