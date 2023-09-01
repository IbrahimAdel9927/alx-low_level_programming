#include "main.h"

/**
 * _strspn - a function that gets the length
 * of a prefix substring.
 *
 * @s: first input
 * @accept: second input
 *
 * Return: the length of a prefix substring
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] ; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
			{
				return (i);

			}
		}
	}
	return (i);
}
