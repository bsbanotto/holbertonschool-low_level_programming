#include "hash_tables.h"

/**
 * hash_table_get - gets a value at a key
 * @ht: hash table to look at
 * @key: key for value we want to return
 *
 * Return: value associated with key, or NULL if key not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *finder;

	if (!ht || !key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	finder = ht->array[index];

	if (finder == NULL)
		return (NULL);

	while (finder != NULL)
	{
		if (strcmp(finder->key, key) == 0)
			return (finder->value);
		finder = finder->next;
	}
	return (NULL);
}
