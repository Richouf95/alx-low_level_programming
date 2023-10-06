#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocate memory with malloc
 * @b: size of memory
 * Return: 98 if fails, else the memory pointer
*/

void *malloc_checked(unsigned int b)
{
	void *memoryPointer;

	memoryPointer = malloc(b);

	if (memoryPointer == NULL)
		exit(98);

	return (memoryPointer);
}
