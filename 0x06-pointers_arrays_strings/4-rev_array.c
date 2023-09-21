#include "main.h"

/**
 * reverse_array - reverse the content of an array
 * @a: array
 * @n: lenght
 * Return: result
*/

void reverse_array(int *a, int n)
{
	int x, y;

	for (x = 0; x < n--; x++)
	{
		y = a[x];
		a[x] = a[n];
		a[n] = t;
	}
}
