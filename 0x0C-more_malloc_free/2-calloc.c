#include "main.h"

/**
 * _ms - fills memory
 *
 * @a: first input
 * @b: second input
 * @c: third input
 *
 * Return: a
*/

char *_ms(char *a, char b, unsigned int c)
{
	char *p = a;

	while (c--)
		*a++ = b;
	return (p);
}


/**
 *_calloc - a function that allocates memory for an
 *array, using malloc.
 *@n: first input
 *@s: second input
 *
 * Return: a pointer
*/

void *_calloc(unsigned int n, unsigned int s)
{
	void *x;

	if (s == 0 || n == 0)
		return (NULL);
	x = malloc(sizeof(int) * n);

	if (x == 0)
		return (NULL);

	_ms(x, 0, sizeof(int) * n);

	return (x);
}
