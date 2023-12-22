#include "hash_tables.h"

/**
 * hash_table_create - function to crate a hash table
 * @size: size of the array
 * Return: the hash table pointer
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newTable;
	unsigned int i;

	if (size == 0)
		return (NULL);

	newTable = malloc(sizeof(hash_table_t));
	if (newTable == NULL)
		return (NULL);

	newTable->array = malloc(sizeof(hash_table_t *) * size);
	if (newTable->array == NULL)
	{
		free(newTable);
		return (NULL);
	}

	newTable->size = size;

	for (i = 0; i < size; i++)
		newTable->array[i] = NULL;

	return (newTable);
}
