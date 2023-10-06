#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - allocate memory to an array
 * @nmemb: input
 * @size: input
 * Return: result
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *myArray;

	if (nmemb == 0 || size == 0)
		return (NULL);

	myArray = malloc(nmemb * size);

	if (myArray == NULL)
		return (NULL);

	return (myArray);
}
