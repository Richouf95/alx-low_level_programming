#include "main.h"

/**
 * factorial - calcul the factorial of a number
 * @n: input
 * Return: result
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
