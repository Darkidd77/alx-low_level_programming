#include "lists.h"

/**
 * free_dlistint - free a dlistint_t list
 *
 *
 * @head: head of list
 * Return: the number of nodes
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tp;


	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
	}

	while ((tp = head) != NULL)
	{
	head = head->next;
	free(tp);
	}
}
