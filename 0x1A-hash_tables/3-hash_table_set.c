#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: hash table to be updated
 * @key: key for value, cannot be empty string
 * @value: value to be added, value must be duplicated, can be empty
 *
 * Return, 1 on success, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *dupValue;
	char *dupKey;
	hash_node_t *newNode;
	unsigned long int index;

	if (!ht || !(ht->array) || !key || strlen(key) == 0 || !value)
		{
			printf("FAILURE!!\n");
			return (0);
		}
	dupValue = strdup(value);
	dupKey = strdup(key);

	index = key_index((const unsigned char *)dupKey, ht->size);

	newNode = (ht->array)[index];
	while (newNode && (strcmp(newNode->key, key) != 0))
		newNode = newNode->next;

	if (newNode != NULL)
	{
		if (dupValue == NULL)
			return (0);
		if (newNode->value != NULL)
			free(newNode->value);
		newNode->value = dupValue;
	}
	printf("SUCCESS!\n");
	return (1);
}
