#include "main.h"

/**
 * _strdup - a function that returns a pointer to a newly
 * allocated space in memory, which contains a copy of
 * the string given as a parameter.
 *
 * @s: first input
 *
 * Return: a pointer to a new string
*/

char *_strdup(char *s)
{
	int a = 0, i = 0;
	char *m;
	if (s == NULL)
	{
		return (NULL);
	}
	while (s[a])
	{
		a++;
	}
	m = malloc(a * sizeof(*s) + 1);

	if (m == 0)
	{
		return (NULL);
	}
	else
	{
		while (i < a)
		{
			m[i] = s[i];
			i++;
		}
	}
	return (m);
}
