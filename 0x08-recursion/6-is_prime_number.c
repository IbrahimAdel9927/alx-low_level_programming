#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - a function that returns 1 if the input integer
 * is a prime number, otherwise return 0.
 *
 * @n: the input
 * @m: input helper
 *
 * Return: 1 if success
 *	0 if not
*/

int check(int n, int m);

int is_prime_number(int n)
{
	return (check(n, 22));
}

/**
 * check - check if n is prime or not
 *
 * @n: first input
 * @m: second input
 *
 * Return: true or false
*/

int check(int n, int m)
{
	if (m >= n && n > 1)
		return (1);
	else if (n % m == 0 || n <= 1)
		return (0);
	else
		return (check(n, m));
}
