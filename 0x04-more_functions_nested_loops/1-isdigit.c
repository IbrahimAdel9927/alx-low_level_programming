#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9).
 *
 * @c: input for the function
 *
 * Return: 1 if c is digit,
 * 0 other wise
*/

int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
		return (1);
	else
		return (0);
}
