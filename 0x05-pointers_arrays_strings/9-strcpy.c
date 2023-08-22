#include "main.h"

/**
 * *_strcpy - a function that copies the string pointed to
 * by src, including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 *
 * @dest: frist input
 * @src: second input
 *
 * Return: dest
*/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	return (dest);
}
