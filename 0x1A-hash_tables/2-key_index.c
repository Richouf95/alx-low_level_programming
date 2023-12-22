#include "hash_tables.h"

/**
 * key_index - give the index of a key in hash table
 * @key: the key
 * @:size the hash table array
 * Return: the index
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned int value = hash_djb2(key);

	return (value % size);
}
