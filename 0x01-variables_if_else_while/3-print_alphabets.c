#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a C program prints the alphabet in lowercase,
 *
 * and then in uppercase, followed by a new line
 *
 * Return: always 0 (success)
*/

int main(void)
{
	char a = 97;

	while (a <= 122)
	{
		putchar(a);
		a++;
	}
	a = 65;
	while (a <= 90)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
