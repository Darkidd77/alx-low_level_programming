#include "lists.h"

/**
 * sum_dlistint - sum all the data of dlistint
 *
 *
 * @head: head of list
 *
 * Return: sum  of data
 */

int sum_dlistint(dlistint_t *head)
{
	int sm;

	sm = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sm += head->n;
			head = head->next;
		}
	}
	return (sm);
}
