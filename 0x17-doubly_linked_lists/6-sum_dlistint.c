#include "lists.h"

/**
 * sum_dlistint - sums all n in dlistint_t  list
 * @head: pointer head of dlistint_t.
 *
 * Return: the sum  all 0 if list is empt.
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
