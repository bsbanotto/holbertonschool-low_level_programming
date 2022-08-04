#include "hash_tables.h"

/**
 * new_hash_node - Populates new hash table node
 * @key: key to find the node
 * @value: value to be stored in the node
 *
 * Return: Pointer to node, or NULL if fail
 */

hash_node_t *new_hash_node(const char *key, const char *value)
{
	hash_node_t *insertNode;

	insertNode = malloc(sizeof(hash_node_t));
	if (insertNode == NULL)
		return (NULL);
	insertNode->key = strdup(key);
	if (insertNode->key == NULL)
	{
		free(insertNode);
		return (NULL);
	}
	insertNode->value = strdup(value);
	if (insertNode->value == NULL)
	{
		free(insertNode->key);
		free(insertNode);
		return (NULL);
	}
	insertNode->next = NULL;
	return (insertNode);
}

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: hash table to be updated
 * @key: key for value, cannot be empty string
 * @value: value to be added, value must be duplicated, can be empty
 *
 * Return: 1 on success, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newNode, *insertNode;
	unsigned long int index;

	if (!ht || !(ht->array) || !key || strlen(key) == 0 || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	newNode = (ht->array)[index];

	while (newNode == NULL)
	{
		insertNode = new_hash_node(key, value);
		if (insertNode == NULL)
			return (0);
		insertNode->next = ht->array[index];
		ht->array[index] = insertNode;
		return (1);
	}
	free(newNode->value);
	newNode->value = strdup(value);
	newNode = newNode->next;
	return (1);
}
