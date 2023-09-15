#ifndef VARIADIC_H
#define VARIADIC_H

#include <stdio.h>
#include <stdarg.h>

/**
 * struct hima - the helper
 *
 * @t: first input
 * @f: the second input
*/
typedef struct hima
{
	char *hima;
	void (*f)(char *, va_list);
}h_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
