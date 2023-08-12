#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a C program prints the numbers of base 16 in lowercase,
 * followed by a new line.
 *
 * Return: always 0 (success)
*/

int main(void)
{
	char a = 48;

	while (a <= 57)
	{
		putchar(a);
		a++;
	}
	a = 97;
	while (a <= 102)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
