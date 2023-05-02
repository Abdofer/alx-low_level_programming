#include "lists.h"

/**
 * sum_listint - returns sum all data stored on linked list.
 * @head: pointer first elemnt list.
 *
 * Return: sum stored data.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
