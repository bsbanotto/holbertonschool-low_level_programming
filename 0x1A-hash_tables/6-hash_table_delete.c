#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: hash table to delete
 *
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *deleter;

	for (index = 0; index <= ht->size; index++)
	{
		while (ht->array[index] != NULL)
		{
			deleter = ht->array[index]->next;
			free(ht->array[index]->key);
			free(ht->array[index]->value);
			free(ht->array[index]);
			ht->array[index] = deleter;
		}
	}
	free(ht->array);
	free(ht);
}
