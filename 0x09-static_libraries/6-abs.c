#include "main.h"

/**
 * _abs - a function that computes the absolute
 * value of an integer.
 *
 * @n : the input of the function taken in integer
 *
 * Return: always 0 (success)
*/

int _abs(int n)
{
	if (n < 0)
	{
		n = (n * -1);
	}
	return (n);
}
