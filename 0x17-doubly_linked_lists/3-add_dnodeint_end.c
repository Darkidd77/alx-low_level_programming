#include "lists.h"

/**
 * add_dnodeint_end - add new node at the end
 *
 *
 * @head: head of list
 * @n: element value
 * Return: the number of nodes
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nw;
	dlistint_t *h;

	nw = malloc(sizeof(dlistint_t));

	if (nw == NULL)
	{
		return (NULL);
	}

	nw->n = n;
	nw->next = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = nw;
	}
	else
	{
		*head = nw;
	}

	nw->prev = h;

	return (nw);
}
