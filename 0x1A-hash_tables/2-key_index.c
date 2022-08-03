#include "hash_tables.h"

/**
 * key_index - Finds an index for a given key
 * @key: key that we're searching the hash table for
 * @size: size of the array of the hash table
 *
 * Return: index where the key is stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hashIndex;

	if (size == 0)
		return (0);

	hashIndex = hash_djb2(key);

	return (hashIndex % size);
}
