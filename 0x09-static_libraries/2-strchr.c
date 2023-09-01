#include "main.h"

/**
 * _strchr - a function that locates a character in a string.
 *
 * @s: first input
 * @c: second input
 *
 * Return: pointer of string
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return ('\0');
}
