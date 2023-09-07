#include "main.h"

/**
 * array_range - a function that creates
 * an array of integers.
 *
 * @min: first input
 * @max: second input
 *
 * Return: a group of intger
*/

int *array_range(int min, int max)
{
	int i, k;
	int *p;

	if (min > max)
		return (NULL);

	k = max - min + 1;
	p = malloc(sizeof(int) * k);
	if (!p)
		return (NULL);
	for (i = 0; i < k ; i++)
		p[i] = min++;
	return (p);
}
