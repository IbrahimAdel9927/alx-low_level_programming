#include "main.h"

/**
 * print_binary - a function that prints the binary
 * representation of a number.
 *
 * @n: the input
*/
void print_binary(unsigned long int n)
{
	int i = sizeof(n) * 8, p = 0;

	while (i)
	{
		if (n & 1L << --i)
		{
			_putchar('1');
			p++;
		}
		else if (p)
		{
			_putchar('0');
		}
	}
	if (!p)
		_putchar('0');
}
