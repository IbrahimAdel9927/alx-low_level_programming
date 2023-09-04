#include "main.h"

/**
 * str_concat - a function that concatenates two strings.
 *
 * @a: first input
 * @b:second input
 *
 * Return: pointer of string
*/

char *str_concat(char *a, char *b)
{
	int x = 0, y = 0, i;
	char *m;

	while (a[x] != '\0')
	{
		x++;
	}
	while (b[y] != '\0')
	{
		y++;
	}

	if (a == NULL)
		a = "\0";
	if (b == NULL)
		b = "\0";
	m = malloc((x + y) * sizeof(char) + 1);

	if (m == 0)
		return (0);
	for (i = 0 ; i <= x + y ; i++)
	{
		if (i < x)
			m[i] = a[i];
		else
			m[i] = b[i - x];
	}
	m[i] = '\0';
	return (m);
}
