#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 *
 * @a: the first input
 * @b: the second input
*/

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;

	*b = c;
}
