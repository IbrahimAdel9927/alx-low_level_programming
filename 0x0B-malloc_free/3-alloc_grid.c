#include "main.h"

/**
 * alloc_grid - a function that returns a pointer to
 * a 2 dimensional array of integers.
 *
 * @a: first input
 * @b:second input
 *
 * Return: a pointer to the array
*/

int **alloc_grid(int a, int b)
{
	int x, y, **i;

	i = malloc(sizeof(*i) * b);

	if (a <= 0 || b <= 0 || i == 0)
		return (NULL);
	else
	{
		for (x = 0; x < b; x++)
		{
			i[x] = malloc(sizeof(**i) * a);

			if (i[x] == 0)
			{
				while (i--)
				{
					free(i[x]);
				}
				free(i);
				return (NULL);
			}
			for (y = 0; y < a; y++)
			{
				i[x][y] = 0;
			}
		}
	}
	return (i);
}
