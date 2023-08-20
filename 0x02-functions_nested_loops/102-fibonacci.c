#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: program that prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int a = 0;

	printf("%lu", a);
	int b = 1;

	printf(", %lu", b);
	int i;

	for (i = 0; i < 24; i++)
	{
		a = a + b;

		printf(", %lu", a);
		b = b + a;

		printf(", %lu", b);
	}
	_putchar('\n');
	return (0);
}
