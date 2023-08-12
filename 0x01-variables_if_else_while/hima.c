#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a C program prints
 * all possible combinations of two two-digit numbers.
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int a, b, c, d;

	for (a = 48; a <= 57; a++)
	{
		for (b = a; b <= 56; b++)
		{
			for (c = b; c <= 57; c++)
			{
				for (d = c + 1; d <= 57; d++)
				{
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);
					if ((a != 57) || (b != 56) || (c != 57) || (d != 57))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
