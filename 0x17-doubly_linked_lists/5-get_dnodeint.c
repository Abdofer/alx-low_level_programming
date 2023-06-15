#include "lists.h"

/**
 * get_dnodeint_at_index - get a node at the list.
 * @head: pointer head of dlistint_t
 * @index: the index of the node, starting from 0
 *
 * Return: node at index or NULL if does not exists.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	int idx = index;

	while (head && idx--)
		head = head->next;

	return (head);
}
