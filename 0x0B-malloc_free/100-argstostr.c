#include "main.h"

/**
 * _strlen - finf length
 *
 * @s: the input
 *
 * Return: int
*/

int _strlen(char *s)
{
	int g = 0;

	for (; s[g] != '\0' ; g++)
		;
	return (g);
}

/**
 * argstostr - a function that concatenates all the
 * arguments of your program.
 *
 * @a: first input
 * @b:second input
 *
 * Description: it return null
 *
 * Return: a string
*/

char *argstostr(int a, char **b)
{
	int i = 0, j = 0, n = 0, c = 0;
	char *s;

	if (a == 0 || b == NULL)
		return (NULL);
	for (; i < a ; i++, n++)
		n += _strlen(b[i]);
	s = malloc(sizeof(char) * n + 1);
	if (s == 0)
		return (NULL);
	for (i = 0; i < a ; i++)
	{
		for (j = 0 ; b[i][j] != '\0' ; j++, c++)
			s[c] = b[i][j];
		s[c] = '\n';
		c++;
	}
	s[c] = '\0';
	return (s);
}
