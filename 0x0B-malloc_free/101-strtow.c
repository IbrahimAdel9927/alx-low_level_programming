#include "main.h"

/**
 * wrdcnt - count the number of words
 *
 * @s: the input
 *
 * Return: int
*/

int wrdcnt(char *s)
{
	int i, j = 0;

	for (i = 0 ; s[i] ; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				j++;
		}
		else if (i == 0)
			j++;
	}
	j++;
	return (j);
}

/**
 * strtow - a function that splits a string into words.
 *
 * @st: the input
 *
 * Return: a pointer to a string
*/

char **strtow(char *st)
{
	int i, j, k, l, n = 0, w = 0;
	char **c;

	if (st == NULL || *st == '\0')
		return (NULL);
	n = wrdcnt(st);
	if (n == 1)
		return (NULL);
	c = (char **)malloc(n * sizeof(char *));
	if (c == NULL)
		return (NULL);
	w[n - 1] = NULL;
	i = 0;
	while (st[i])
	{
		if (st[i] != ' ' && (i == 0 || st[i - 1] == ' '))
		{
			for (j = 1 ; st[i + j] != ' ' && st[i + j]; j++)
				;
			j++;
			c[w] = (char *)malloc(j * sizeof(char));
			j--;
			if (c[w] == NULL)
			{
				for (k = 0; k < w ; k++)
					free(c[k]);
				free(c[n - 1]);
				free(c);
				return (NULL);
			}
			for (l = 0; l < j ; l++)
				c[w][l] = st[i + 1];
			c[w][l] = '\0';
			w++;
			i += j;
		}
		else
			i++;
	}
	return (c);
}
