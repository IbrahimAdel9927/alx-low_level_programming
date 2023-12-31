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
	int a, b;

	for (a = 0; a <= 99; a++)
	{
		for (b = a; b <= 99; b++)
		{
			if (a != b)
			{
				putchar((a / 10) + 48);
				putchar((a % 10) + 48);
				putchar(' ');
				putchar((b / 10) + 48);
				putchar((b % 10) + 48);
				if ((a != 98) || (b != 99))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
