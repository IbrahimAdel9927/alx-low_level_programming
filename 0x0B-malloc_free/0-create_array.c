#include "main.h"

/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 *
 * @a: first input
 * @c:second input
 *
 * Return: NULL if size = 0
 * a pointer to the array, or NULL if it fails
*/

char *create_array(unsigned int a, char c)
{
	char *b = malloc(a);

	if (a == 0 || b == 0)
		return (0);
	while (a--)
		b[a] = c;

	return (b);
}
