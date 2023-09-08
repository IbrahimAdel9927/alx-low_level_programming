#include "main.h"
#include <stdio.h>

/**
 * string_nconcat - a function that concatenates
 * two strings.
 *
 * @a: first input
 * @b: second input
 * @n: third input
 *
 * Return: pointer of string
*/

char *string_nconcat(char *a, char *b, unsigned int n)
{
	char *x;
	unsigned int i, j, c, d;

	if (a == NULL)
	{
		a = "";
	}
	if (b == NULL)
	{
		b = "";
	}
	for (c = 0; a[c] != '\0'; c++)
		;
	for (d = 0; b[d] != '\0'; d++)
		;
	x = (int*) malloc(c + n + 1);

	if (x == NULL)
	{
		return (NULL);
	}
	for (i = 0; a[i] != '\0'; i++)
	{
		x[i] = a[i];
	}
	for (j = 0; b[j] != '\0'; j++)
	{
		x[i] = b[j];
		i++;
	}
	x[i] = '\0';
	return (x);
}
