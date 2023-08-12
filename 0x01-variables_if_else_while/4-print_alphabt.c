#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a C program prints the alphabet in lowercase,
 * followed by a new line except q and e
 *
 * Return: always 0 (success)
*/

int main(void)
{
	char a = 97;

	while (a <= 122)
	{
		if ((a == 101) || (a == 113))
		{
			a++;
		}
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
