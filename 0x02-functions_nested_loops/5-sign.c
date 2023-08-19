#include "main.h"

/**
 * print_sign - function that prints the sign of a number
 *
 * @n: check the input of the function
 *
 * Return: 1  if n is greater than zero
 * -1 - if n is less than zero
 * else it return 0 (success)
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
