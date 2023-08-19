#include "main.h"

/**
 * print_times_table - a function that prints the n times table,
 * starting with 0.
 * @n: the input
*/

void print_times_table(int n)
{
	int i, j, sum;

	if ((n <= 15) && (n >= 0))
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(48);
			for (j = 1; j <= n; i++)
			{
				_putchar(',');
				sum = i * j;

				if (sum <= 9)
				printf("   ");
				if (sum <= 99 && sum > 9)
				printf("  ");
				if (sum >= 100)
				printf(" ");
				printf("%d", sum);
			}
			_putchar('\n');
		}
	}
}
