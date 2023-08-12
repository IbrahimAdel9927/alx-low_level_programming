#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a C program prints the lowercase alphabet in reverse,
 * followed by a new line.
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int a = 122;

	while (a >= 97)
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
