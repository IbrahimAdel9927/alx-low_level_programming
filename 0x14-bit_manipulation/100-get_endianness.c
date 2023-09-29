#include "main.h"

/**
 * get_endianness - a function that checks the endianness.
 *
 * Return: int
*/
int get_endianness(void)
{
	unsigned long int n = 1;

	return (*(char *)&n);
}
