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
	va_list l;
	int sum = 0, i = n;

	if (!n)
		return (0);
	va_start(l, n);
	for (; i; i--)
		sum += va_arg(l, int);
	va_end(l);
	return (sum);
}
