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
	if (n < 0)
	{
		n = n * -1;
	}
	printf("%d", n % 10);
	return (n % 10);
}
