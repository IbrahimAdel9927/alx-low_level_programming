#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function
 * given as a parameter on each element of an array
 *
 * @array: first input
 * @size: second input
 * @action: third input
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *the_end_of_array = array + size;

	if (array && size && action)
		while (array < the_end_of_array)
			action(*array++);
}
