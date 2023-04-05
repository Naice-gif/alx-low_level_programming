#include "lists.h"

/**
 * sum_listint - Find sum of the
 *               data of a listint_t list.
 * @head: A pointer to the first node in the linked list.
 *
 * Return: If the list is empty - 0.
 *         Or the sum of the data.
 */
int sum_listint(listint_t *head)
{
	int total = 0;

	while (head)
	{
		total += head->n;
		head = head->next;
	}

	return (total);
}
