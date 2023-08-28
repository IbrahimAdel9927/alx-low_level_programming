#include "main.h"

/**
 * _strpbrk - a function that searches a string for
 * any of a set of bytes.
 *
 * @s: first input
 * @accept: second input
 *
 * Return: string
*/

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	char *a;

	while (s[i])
	{
		j = 0;

		while (accept[j])
		{
			if (accept[j] == s[i])
			{
				a = &s[i];
				return (a);
			}
			j++;
		}
		i++;
	}
	return (0);
}
