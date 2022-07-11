#include "lists.h"

/**
 * pop_listint - deletes head node and returns value
 * @head: doublepointer to head node
 *
 * Return: value from head node
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if(*head == NULL)
		return (0);

	temp = *head;
	*head = temp->next;
	num = temp->n;
	free(temp);
	return(num);
}
