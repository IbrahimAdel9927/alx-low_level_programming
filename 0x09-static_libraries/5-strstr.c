#include "main.h"

/**
 * _strstr - a function that locates a substring.
 *
 * @haystack: first input
 * @needle: second input
 *
 * Return: a pointer of string
*/

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j, z;

	char *p;
	int f = 0;
	while (needle[f])
	{
		f++;
	}

	while (haystack[i])
	{
		j = 0;

		while (needle[j])
		{
			if (needle[j] == haystack[i])
			{
				p = (haystack + i);
				z = 0;
				while (needle[j] == haystack[i]
						&& haystack[i] && needle[j])
				{
					z++;
					i++;
					j++;
					if (z == f)
						return (p);
				}
				i -= z;
				break;
			}
			j++;
		}
		i++;
	}
	return ('\0');
}
