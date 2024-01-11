#include "lists.h"

/**
 * get_dnodeint_at_index - return the nth node of a dlistint_t linked list
 *
 *
 * @head: head of list
 * @index: index of the node strat from 0
 * Return: the number of nodes
 */


dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	x = 0;

	while (head != NULL)
	{
		if (x == index)
			break;
		head = head->next;
		x++;
	}

	return (head);
}
