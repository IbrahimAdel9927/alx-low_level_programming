#include "main.h"

/**
 * reverse_array - a function that reverses the content
 * of an array of integers.
 *
 * @a: the first input
 * @n: the second input
*/

void reverse_array(int *a, int n);
{
	int i = 0;

	while (i < (n / 2))
	{
		int t = a[i];

		a[i] = a[n - i - 1];

		a[n - i - 1] = t;

		i++;
	}
}
