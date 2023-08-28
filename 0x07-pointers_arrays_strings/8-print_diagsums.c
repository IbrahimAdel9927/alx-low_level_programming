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
	int i, x = 0, y = 0;

	for (i = 0; i < size; i++)
	{
		x += a[i][i];
		y += a[i][size - i - 1];
	}
	printf("%d, %d\n", x, y);
}
