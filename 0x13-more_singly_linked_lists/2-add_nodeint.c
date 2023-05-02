#include "lists.h"

/**
 * add_nodeint - Adds a new node at beginning
 *               of a listint_t list
 * @head: A pointer address of the
 *        head listint_t list.
 * @n: The integer for the new node contain
 *
 * Return: NULL If the function fails
 *         OR the address new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
