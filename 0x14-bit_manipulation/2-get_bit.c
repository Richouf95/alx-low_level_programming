#include "main.h"

/**
 * get_bit - Get bits
 * @n: input
 * @index: input
 *
 * Return: value of the bit, or -1 if there is an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	mask = 1UL << index;

	return ((n & mask) ? 1 : 0);
}
