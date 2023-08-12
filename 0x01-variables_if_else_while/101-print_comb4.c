#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a C program prints
 * all possible different combinations of three digits.
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int a, b, c;

	for (a = 48; a <= 55; a++)
	{
		for (b = a + 1; b <= 56; b++)
		{
			for (c = b + 1; c <= 57; c++)
			{
				putchar(a);
				putchar(b);
				putchar(c);
				if (a != 55)
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
