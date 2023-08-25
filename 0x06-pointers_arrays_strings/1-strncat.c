#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 *
 * @dest: the first input
 * @src: the second input
 * @n: the third input
 *
 * Return: the pointer of the resulting string
*/

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;

	while (dest[a])
		a++;
	b = 0;
	while (src[b] && b < n)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	return (dest);
}
