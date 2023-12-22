#include "hash_tables.h"

/**
 * hash_table_delete - delete table
 * @ht: table
*/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp, *nextTemp;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp)
		{
			nextTemp = temp->next;
			free(temp->key);
			free(temp->value);
			free(temp);
			temp = nextTemp;
		}
	}
	free(ht->array);
	free(ht);
}
