#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table of defined size
 * @size: size of array for hash table
 *
 * Return: pointer to newly created hash table, or NULL on failure
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newHashTable;
	hash_node_t **hashNodeArray;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	newHashTable = malloc(sizeof(hash_table_t));
	if (newHashTable == NULL)
		return (NULL);

	hashNodeArray = malloc(sizeof(hash_node_t *) * size);
	if (hashNodeArray == NULL)
	{
		free(newHashTable);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		hashNodeArray[i] = NULL;

	newHashTable->size = size;
	newHashTable->array = hashNodeArray;

	return (newHashTable);
}
