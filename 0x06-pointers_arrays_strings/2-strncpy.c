#include "main.h"

/**
 * _strncpy - a function that copies a string.
 *
 * @dest: the first input
 * @src: the second input
 * @n: the third input
 *
 * Return: the pointer of the resulting string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;

	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
