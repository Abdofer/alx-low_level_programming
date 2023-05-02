#include "lists.h"

/**
 * listint_len - returns the number elements linked listint_t list
 * @h: pointer the first element the list.
 *
 * Return: number elements in linked list.
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
