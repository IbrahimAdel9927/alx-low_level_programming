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
	if (s == NULL)
	{
		return (NULL);
	}
	int i = 0, a = 0;
	char *m;

	for (; s[a] != '\0' ; a++)
		;
	m = malloc(a * sizeof(*s) + 1);

	if (m == 0)
	{
		return (NULL);
	}
	else
	{
		return (m);
	}
}
