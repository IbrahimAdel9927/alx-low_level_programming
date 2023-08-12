#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a C program prints all possible combinations of
 * single-digit numbers
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int a = 48;

	while (a <= 57)
	{
		putchar(a);
		if (a != 57)
		{
			putchar(',');
			putchar(' ');
		}
		a++;
	}
	putchar('\n');
	return (0);
}
