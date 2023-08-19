#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number.
 *
 * @n : the input of the function taken in integer
 *
 * Return: the last digit
*/

int print_last_digit(int n)
{
	int last;

	if (n < 0)
	{
		last = (n % 10) * -1;
	}
	else
	{
		last = n % 10;
	}

	_putchar(last + 48);
	return (last);
}
