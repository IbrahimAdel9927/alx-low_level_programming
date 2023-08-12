#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a C program prints all single digit numbers of base 10
 * starting from 0, followed by a new line
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int a = 48;

	while (a <= 57)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
