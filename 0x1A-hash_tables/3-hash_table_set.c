#include "hash_tables.h"

/**
 * hash_table_set - add new element to hash table
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 1 if ok 0 if not
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *current_node, new_node;
	unsigned long int index;

	if (!ht || !key || !value)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	current_node = ht->array[index];
	while (current_node)
	{
		if (!strcmp(key, current_node->key))
		{
			free(current_node->value);
			current_node->value = strdup(value);
			if (!current_node->value)
				return (0);
			return (1);
		}
		current_node = current_node->next;
	}

	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (!new_node->key || !new_node->value)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
