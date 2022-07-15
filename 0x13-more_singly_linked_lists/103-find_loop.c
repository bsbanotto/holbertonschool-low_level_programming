#include "lists.h"

/**
 * find_listint_loop - Finds where loop starts
 * @head: head of linked list
 *
 * Return: Address of node where loop starts, or NULL if no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fast = head;
	listint_t *slow = head;

	while (fast != NULL && slow != NULL)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (slow == fast)
			{
				fast = head;
				while(fast != slow)
				{
					fast = fast->next;
					slow = slow->next;
				}
				return (fast);
			}
	}
	return (NULL);
}
