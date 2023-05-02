#include "lists.h"

/**
 * reverse_listint - function reverses listint_t linked list.
 * @head: head linked list.
 * Return: node reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *prev;

	prev = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);

}
