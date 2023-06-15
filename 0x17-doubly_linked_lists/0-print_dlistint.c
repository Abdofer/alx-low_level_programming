#include "lists.h"

/**
 * print_dlistint - prints all elements from dlistint_t list.
 * @h: head of dlistint_t.
 *
 * Return: the size of the nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;

	while (j)
	{
		printf("%d\n", j->n);
		j = j->next;
		len++;
	}

	return (len);
}
