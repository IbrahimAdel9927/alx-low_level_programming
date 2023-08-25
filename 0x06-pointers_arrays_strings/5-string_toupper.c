#include "main.h"

/**
 * string_toupper - a function that changes all lowercase
 * letters of a string to uppercase.
 *
 * @a: the first input
 *
 * Return: string
*/

char *string_toupper(char *a)
{
	int i = 0;

	while (a[i])
	{
		if (a[i] <= 122 && a[i] >= 97)
			a[i] -= 32;
		i++;
	}
	return (a);
}
