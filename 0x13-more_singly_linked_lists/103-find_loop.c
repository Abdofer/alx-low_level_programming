#include "lists.h"

/**
 * find_listint_loop - finds loop linked list.
 * @head: head linked list.
 * Return: address node where loop starts.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	slow = head;
	fast = head;
	while (head != NULL)
	{
		if (slow == fast)
		{
			while (head != NULL)
			{
				if (slow == fast)
					return (slow);
				slow = slow->next;
				fast = fast->next;
			}
		}
		slow = slow->next;
		fast = fast->next->next;
	}
}
