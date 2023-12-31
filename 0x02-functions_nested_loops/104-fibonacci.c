#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: program that prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int a = 1;

	printf("%d", a);
	int b = 2;

	printf(", %d", b);
	int i;

	for (i = 0; i < 48; i++)
	{
		a += b;

		printf(", %d", a);
		b += a;

		printf(", %d", b);
	}
	_putchar('\n');
	return (0);
}
