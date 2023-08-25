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
	char *k[] = {'A', 'E', 'O', 'T', 'L'};
	char *v[] = {4, 2, 0, 7, 1};
	int i, j;

	i = 0;

	while (s[i])
	{
		for (j = 0; j < sizeof(k) / sizeof(char); j++)
			if (s[i] == k[j] || s[i] == k[j] + 32)
				s[i] = 48 + v[j];
		i++;
	}
	return (s);
}
