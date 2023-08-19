#include "main.h"

/**
 * times_table - a function that prints the 9 times table, starting with 0.
*/

void times_table(void)
{
	int m, h;

	for (h = 0; h <= 9; h++)
	{
		for (m = 0; m <= 9; m++)
		{
			_putchar((h * m) + 48);
			if (m != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
