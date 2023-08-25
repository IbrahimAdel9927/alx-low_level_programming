#include "main.h"

/**
 * leet - a function that encodes a string into 1337.
 *
 * @s: the input
 *
 * Return: string
*/

char *leet(char *s)
{
	char *a = s;
	char *k[] = {'A', 'E', 'O', 'T', 'L'};
	char *v[] = {4, 3, 0, 7, 1};
	int j;

	while (*s)
	{
		for (j = 0; j < sizeof(k) / sizeof(char); j++)
			if (*s == k[j] || *s == k[j] + 32)
			{
				*s = 48 + v[j];
			}
		s++;
	}
	return (a);
}
