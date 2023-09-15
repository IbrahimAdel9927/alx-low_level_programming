#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the
 * sum of all its parameters
 *
 * @n: the count
 * @...: thr nums
 *
 * Return: integer
*/

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i = n;
	va_list hi;

	if (!n)
		return (0);
	va_start(hi, n);
	while (i--)
		sum += va_arg(hi, int);
	va_end(hi);
	return (sum);
}
