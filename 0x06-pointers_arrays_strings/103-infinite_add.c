#include "main.h"

/**
 * infinite_add - a function that adds two numbers.
 *
 * @n1: input
 * @n2: input
 * @r: input
 * @size_r: input
 *
 * Return: sum
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int q = 0, j = 0, k, l = 0, f, s, d = 0;

	while (n1[q] != '\0')
		q++;
	while (n2[j] != '\0')
		j++;
	if (q > j)
		l = q;
	else
		l = g;
	if (l + 1 > size_r)
		r[l] = '\0';
	for (k = l - 1 ; k >= 0 ; k--)
	{
		q--;
		j--;
		if (q >= 0)
			f = n1[q] - '0';
		else
			f = 0;
		if (j >= 0)
			s = n2[j] - '0';
		else
			s = 0;
		r[k] = (f + s + d) % 10 + '0';
		d = (f + s + d) / 10;
	}
	if (d == 1)
	{
		r[l + 1] = '\0';
		if (l + 2 > size_r)
			return (0);
		while (l-- >= 0)
			r[l + 1] = r[l];
		r[0] = d + '0';
	}
	return (r);
}
