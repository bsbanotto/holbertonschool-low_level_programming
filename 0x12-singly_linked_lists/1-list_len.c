#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * list_len - Function that prints all elements of a list
 * @h: pointer to head of singly linked list
 *
 * Return: Number of elements in list
 */

size_t list_len(const list_t *h)
{
	const list_t *temp = h;
	unsigned int i = 0;

	while (temp)
	{
		if (temp->str == NULL)
		{
			temp = temp->next;
			i++;
		}
		else
		{
			temp = temp->next;
			i++;
		}
	}
	return (i);
}
