#include "main.h"
#include <stdlib.h>

/**
 * *_memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}


/**
 * *_calloc - allocate memory to an array
 * @nmemb: input
 * @size: input
 * Return: result
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *myArray;

	if (nmemb == 0 || size == 0)
		return (NULL);

	myArray = malloc(nmemb * size);

	if (myArray == NULL)
		return (NULL);

	_memset(myArray, 0, nmemb * size);

	return (myArray);
}
