#include "main.h"

/**
 * _isalpha - function that checks for alphabet character
 *
 * @c: check the input of the function
 *
 * Return: 1 if c is a letter, lowercase or uppercase
 * else it return 0 (success)
*/

int _isalpha(int c)
{
	if (((c <= 122) && (c >= 97)) || ((c <= 90) && (c >= 65)))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
