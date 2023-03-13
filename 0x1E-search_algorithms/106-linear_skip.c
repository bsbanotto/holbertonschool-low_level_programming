#include "search_algos.h"

/**
 * linear_skip - implementation of skip list search
 *
 * @list: Pointer to list to search in
 * @value: Value to search for
 *
 * Description: List will be sorted in ascending order
 * A node to the express lane is placed every index which is a multiple of
 * the square root of the size of the list.
 * -> For example: List that is 16 nodes long will have an express lane node
 * -> at every 4th index
 *
 * Return: a pointer to the first node where the value is found
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *temp = list;

	if (list != NULL)
	{
		while (temp->express != NULL)
		{
			printf("Value checked at index [%lu] = [%d]\n",
			temp->express->index, temp->express->n);
			if (temp->express->n >= value)
			{
				printf("Value found between indexes [%lu] and [%lu]\n",
				temp->index, temp->express->index);
				break;
			}
			temp = temp->express;
		}
		if (!temp->express)
		{
			list = temp;
			while (list->next)
				list = list->next;
			printf("Value found between indexes [%lu] and [%lu]\n",
			temp->index, list->index);
		}
		list = temp;
		while (list != temp->express)
		{
			printf("Value checked at index [%lu] = [%d]\n",
			list->index, list->n);
			if (list->n == value)
				break;
			list = list->next;
		}
		if (list != temp->express)
			return (list);
	}
	return (NULL);
}
