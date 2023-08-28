#include "main.h"

/**
 * print_diagsums - a function that prints the sum of the
 * two diagonals of a square matrix of integers.
 *
 * @a: first input
 * @size: second inpit
*/

void print_diagsums(int *a, int size)
{
	int i, j, x = 0, y = 0;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (i == j)
				x += a[i][j];
			if (i == (size - j - 1))
				y += a[i][j];
		}
	}
	printf("%d, %d\n", x, y);
}
