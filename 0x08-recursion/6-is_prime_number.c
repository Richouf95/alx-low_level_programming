#include "main.h"

/**
 * is_prime_number - check if input is prime
 * @n: input
 * Return: 1 if ok 0 otherwise
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (the_prime(n, n - 1));
}

/**
 * the_prime - current recursion of the prime
 * @n: input
 * @x: input
 * Return: 1 if ok 0 otherwise
*/

int the_prime(int n, int x)
{
	if (x == 1)
		return (1);

	if (n % x == 0 && x > 0)
		return (0);

	return (theprime(n, x - 1));
}
