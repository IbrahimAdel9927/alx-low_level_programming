#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 *
 * @array: first input
 * @size: second input
 * @cmp: third input
 *
 * Return: the index of the first element for which
 * the cmp function does not return 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
	{
		if (size <= 0)
			return (-1);
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	}
	return (-1);
}
