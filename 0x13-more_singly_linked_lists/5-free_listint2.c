#include "lists.h"

/**
 * free_listint2 - frees a listint_t list & sets head to NULL.
 * @head: pointer to the first node (head).
 */
void free_listint2(listint_t **head)
{
	if (!head || !*head)
		return;

	free_listint2(&(*head)->next);
	free(*head);
	*head = NULL;
}
