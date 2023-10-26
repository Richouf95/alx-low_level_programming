#include "main.h"

/**
 * flip_bits - number of bits to change
 * @n: first
 * @m: second
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int countbit = 0;
	unsigned long int exclusive = n ^ m;

	while (exclusive != 0)
	{
		countbit += exclusive & 1;
		exclusive >>= 1;
	}

	return (countbit);
}
