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
	int z = 0;
	int b = size - 1;

	while (z < size)
	{
		x += a[z * size + z];
		z++;
	}
	while (b >= 0)
	{
		y += a[b * size + (size - b - 1)];
		b--;
	}

	printf("%d,%d\n", x, y);
}
