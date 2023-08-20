#include "main.h"

/**
 * _isupper - check the uppercase
 *
 * @a: input for the function
 *
 * Return: 1 if a is upper
 * else it return 0
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
