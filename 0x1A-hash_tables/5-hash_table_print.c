#include "hash_tables.h"

/**
 * hash_table_print - Prints contents of an entire hash table
 * @ht: hash table to print
 *
 * Return: Void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *printer;
	int printComma = 0;

	if (!ht || !(ht->array))
		return;
	printf("{");
	for (index = 0; index <= ht->size; index++)
	{
		printer = ht->array[index];
		while (printer != NULL)
		{
			if (printComma == 1)
				printf(", ");
			printf("'%s': '%s'", printer->key, printer->value);
			printComma = 1;
			printer = printer->next;
		}
	}
	printf("}\n");
}
