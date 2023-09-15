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
	int sum = 0, i;
	va_list list;

	if (n == 0)
		return (0);
	va_start(list, n);
	for (i = 0; i < n ; i++)
		sum += va_arg(list, int);
	va_end(list);
	return (sum);
}
