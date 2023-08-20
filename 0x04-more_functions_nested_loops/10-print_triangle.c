#include "main.h"

/**
 * print_triangle - a function that prints a triangle, followed by a new line.
 * @n: the input of the function
*/

void print_triangle(int n)
{
	int i, j, k;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= (n - i); j++)
		{
			_putchar(' ');
		}
		for (k = 1; k <= i; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
