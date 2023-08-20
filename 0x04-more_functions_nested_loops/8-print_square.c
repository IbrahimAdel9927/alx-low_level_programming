#include "main.h"

/**
 * print_square - a function that prints a square, followed by a new line.
 * @n: the input of the function
*/

void print_square(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{

		for (j = 1; j <= n; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
