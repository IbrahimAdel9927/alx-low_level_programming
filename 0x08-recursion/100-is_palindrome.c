#include "main.h"

/**
 * li -  a function that returns 1 if a string is
 * a palindrome and 0 if not.
 *
 * @s: the input
 *
 * Return: num
*/

int is_palindrome(char *s);
int check(char *s, int a, int b, int c)
int li(char *s)
{
	int d = 0;

	if (*s > '\0')
		d += li(s + 1) + 1;
	return (d);
}

/**
 * is_palindrome - a function that returns 1 if a string
 * is a palindrome and 0 if not.
 *
 * @s: the input
 *
 * Return: 1 or 0
*/

int is_palindrome(char *s)
{
	int b = li(s);
	
	return (check(s, 0, b - 1, b % 2));
}

/**
 * check: a function that returns 1 if a string is
 * a palindrome and 0 if not.
 *
 * @s: input
 * @a: input
 * @b: input
 * @c: input
 *
 * Return: 1 or 0
*/

int check(char *s, int a, int b, int c)
{
	if ((a == b && c != 0) || (a == b + 1 && c == 0))
		return (1);
	else if (s[a] != s[b])
		return (0);
	else
		return (check(s, a + 1, b - 1, c));
}
