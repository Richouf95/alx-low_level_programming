#include "main.h"
#include <stdlib.h>

/**
 * *create_array - create array of chars
 * @size: size of array
 * @c: chars
 * Return: if size = 0 null
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *charArray;
	
	charArray = malloc(sizeof(char) * size);

	if (size == 0 || charArray == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		charArray[i] = c;
	}

	return (charArray);
}
