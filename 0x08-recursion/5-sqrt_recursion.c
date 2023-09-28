#include "main.h"

/**
 * _sqrt_recursion - natural square root of number
 * @n: input
 * Return: if => 0 else => -1
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (current_recursion(n, 0));
}

/**
 * current_recursion - where find natural square
 * @n: input
 * @x: input
 * Return: result
*/

int current_recursion(int n, int x)
{
	if (x * x > n)
		return (-1);

	if (x * x == n)
		return (x);

	return (current_recursion(n, x + 1));
}
