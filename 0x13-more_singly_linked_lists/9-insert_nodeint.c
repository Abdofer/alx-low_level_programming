#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node given position
 * @head: pointer first node (head).
 * @idx: index list where to add a new node Index starts at 0.
 * @n: data add new node.
 *
 * Return: the address new node, or NULL if it failed.
 * or if it's not possible add new node at index idx
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (!head || !new)
		return (NULL);

	new->n = n;
	temp = *head;

	if (idx == 0)
	{
		new->next = temp;
		*head = new;
		return (new);
	}

	while (temp && 1 < idx--)
		temp = temp->next;

	if (temp)
	{
		new->next = temp->next;
		temp->next = new;
		return (new);
	}
	free(new);
	return (NULL);
}
