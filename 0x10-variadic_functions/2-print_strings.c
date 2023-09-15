#include "variadic_functions.h"

/**
 * print_strings -  a function that prints strings,
 * followed by a new line.
 *
 * @separator: first input
 * @n: second input
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list list;
	char *s;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(list);
	while (i--)
	{
		printf("%s%s", (s = va_arg(list, char *)) ? s : "(nil)",
				i ? (separator ? separator : "") : "\n");
	}
	va_end(list);
}
