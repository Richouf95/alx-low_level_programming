#include "function_pointers.h"

/**
 * int_index - find an item
 * @array: input
 * @size: input
 * @cmp: input
 * Return: result
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i])
			return (i);
	}

	return (-1);
}
