#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 *
 * @dest: first input
 * @src: second input
 * @n:third input
 *
 * Return: string
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d;

	d = dest;

	for (dest ; n > 0 ; dest++, n--, src++)
	{
		*dest = *src;
	}
	return (d);
}
