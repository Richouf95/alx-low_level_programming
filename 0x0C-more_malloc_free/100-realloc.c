#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reaclloaction of memory
 * @ptr: input
 * @old_size: input
 * @new_size: input
 * Return: result
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newly;
	char *old = ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	newly = malloc(new_size);

	if (newly == NULL)
		return (NULL);

	if (new_size > old_size)
	{
		for (i = 0; i < new_size; i++)
			newly[i] = old[i];
	}
	else
	{
		for (i = 0; i < old_size; i++)
			newly[i] = old[i];
	}

	free(ptr);
	return (newly);
}