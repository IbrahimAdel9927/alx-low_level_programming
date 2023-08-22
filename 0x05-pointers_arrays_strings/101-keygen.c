#include "main.h"

/**
 * main - Entry point
 *
 * Descreption: a program that generates random valid passwords
 * for the program 101-crackme.
 *
 * Return:  0 (success)
*/

int main(void)
{
	int a = 0;
	char b;

	srand(time(NULL));
	while (a <= 2645)
	{
		b = rand() % 120;
		a += b;
		putchar(b);
	}
	putchar(2772 - a);
	return (0);
}
