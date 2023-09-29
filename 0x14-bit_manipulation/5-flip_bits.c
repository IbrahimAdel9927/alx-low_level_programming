#include "main.h"

/**
 * flip_bits - a function that returns the number of bits
 * you would need to flip to get from one number to another.
 *
 * @n: the first input
 * @m: the second input
 *
 * Return: unsigned int
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int i = 0;

	while (x)
	{
		if (x & 1ul)
			i++;
		x = x >> 1;
	}
	return (i);
}
