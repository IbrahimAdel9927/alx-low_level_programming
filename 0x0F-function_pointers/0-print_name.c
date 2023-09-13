#include "function_pointers.h"

/**
 * print_name -  a function that prints a name.
 *
 * @name: first input
 * @f: second input
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
