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
		for (i = 1; i <= n; i++)
		{
			_putchar(48);
			for (j = 0; j <= n; i++)
			{
				_putchar(',');
				_putchar(' ');
				sum = i * j;
				if (sum <= 9)
				printf(" ");
				if (sum <= 99)
				printf(" ");
				if (sum >= 100)
				{
					_putchar((sum / 100) + 48);
					_putchar((sum / 10) + 48);
				}
				else if (sum <= 99 && sum >= 10)
				{
					_putchar((sum / 10) + 48);
				}
				_putchar((sum % 10) + 48);
			}
			_putchar('\n');
		}
	}

}
