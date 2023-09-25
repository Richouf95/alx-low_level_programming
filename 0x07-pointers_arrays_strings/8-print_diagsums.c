#include "main.h"

/**
 * print_diagsums - sum of two diagonals of a squre matix
 * @a: input
 * @size: input
 * Return: result
*/

void print_diagsums(int *a, int size)
{
	int x = 0;
	int y = 0;
	int z;

	for (z = 0; z < size; z++)
	{
		x = x + a[z * size + z];
	}

	for (z = size - 1; z >= 0; z--)
	{
		y = y + a[z * size + (size - z - 1)];
	}

	printf("%d,%d\n", x, y);
}
