#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 *
 * @s: the input
 *
 * Return: the length of string
*/

int _strlen_recursion(char *s)
{
	int ans = 0;

	if (*s != '\0')
	{
		_strlen_recursion(s + 1);
		ans++;
	}
	return (ans);
}
