#include "main.h"

/**
 * _islower - function that checks for lowercase character
 *
 * @c: check the input of the function
 *
 * Return: 1 if c is a lowercase
 * else it return 0 (success)
*/

int _islower(int c)
{
	if ((c <= 122) && (c >= 97))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
