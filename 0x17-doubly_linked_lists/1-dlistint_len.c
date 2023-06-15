#include "lists.h"

/**
 * dlistint_len - counts numb  elements in linked dlistint_t list.
 * @h: head of dlistint_t.
 *
 * Return: the numb of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t loc = 0;

	while (j)
	{
		loc++;
		j = j->next;
	}

	return (loc);
}
