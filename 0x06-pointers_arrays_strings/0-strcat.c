#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 *
 * @dest: the first input
 * @src: the second input
 *
 * Return: the pointer of the resulting string
*/

char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;

	while (dest[a])
		a++;
	b = 0;
	while (src[b])
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	return (dest);
}
