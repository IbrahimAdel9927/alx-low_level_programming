#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - a function that returns the natural
 * square root of a number.
 *
 * @n: the input
 * @m: input helper
 *
 * Return: the natural square root of a number.
*/

int sqr(int n, int m);

int _sqrt_recursion(int n)
{
	return (sqr(n, 1));
}

/**
 * sqr - a function help _sqrt_recursion
 *
 * @n: first input
 * @m: second input
 *
 * Return: a num
*/

int sqr(int n, int m)
{
	if (m * m == n)
		return (m);
	else if (m * m < n)
		return (sqr(n, m + 1));
	else if (m * m > n)
		return (-1);
}
