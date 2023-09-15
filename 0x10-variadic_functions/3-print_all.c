#include "variadic_functions.h"

/**
 * f_c - f_c
 *
 * @s: first input
 * @list: second input
*/
void f_c(char *s, va_list list)
{
	printf("%s%c", s, va_arg(list, int));
}

/**
 * f_i - f_i
 *
 * @s: first input
 * @list: second input
*/
void f_i(char *s, va_list list)
{
	printf("%s%d", s, va_arg(list, int));
}

/**
 * f_f - f_f
 *
 * @s: first input
 * @list: second input
*/
void f_f(char *s, va_list list)
{
	printf("%s%f", s, va_arg(list, double));
}

/**
 * f_s - f_s
 *
 * @s: first input
 * @list: second input
*/
void f_s(char *s, va_list list)
{
	char *p = va_arg(list, char *);

	switch ((int)(!p))
	case 1:
		p = "(nil)";

	printf("%s%s", s, p);
}

/**
 * print_all - a function that prints anything.
 *
 * @format: the input
*/

void print_all(const char * const format, ...)
{
	int x = 0, y;
	char *s;
	va_list list;
	h_t himaa[] = {
		{"c", f_c},
		{"i", f_i},
		{"f", f_f},
		{"s", f_s},
		{NULL, NULL}
	};

	va_start(list, format);
	while (format && format[x])
	{
		y = 0;
		while (himaa[y].hima)
		{
			if (format[x] == himaa[y].hima[0])
			{
				himaa[y].f(s, list);
				s = ", ";
			}
			y++;
		}
		x++;
	}
	printf("\n");
	va_end(list);
}
