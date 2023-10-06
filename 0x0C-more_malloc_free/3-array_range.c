#include "main.h"
#include <stdlib.h>

/**
 * *array_range - Allocate memory to an array
 * @min: input
 * @max: input
 * Return: result
*/

int *array_range(int min, int max)
{
	int *myArray;
	int i;
	int arrayLength;

	if (min > max)
		return (NULL);

	arrayLength = max - min + 1;

	myArray = malloc(sizeof(int) * arrayLength);

	if (myArray == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
		myArray[i] = i;

	return (myArray);
}
