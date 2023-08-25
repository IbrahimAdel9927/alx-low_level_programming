#include "main.h"

/**
 * cap_string - a function that capitalizes all
 * words of a string..
 *
 * @s: the first input
 *
 * Return: string
*/

char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] <= 122 && s[i] >= 97)
			s[i] -= 32;
		else if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
				s[i] == ',' || s[i] == ';' || s[i] == '.' ||
				s[i] == '!' || s[i] == '?' || s[i] == '"' ||
				s[i] == '(' || s[i] == ')' || s[i] == '{' ||
				s[i] == '}')
			s[i] -= 32;
		i++;
	}
	return (s);
}
