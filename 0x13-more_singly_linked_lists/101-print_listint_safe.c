#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the  nodes
 *                      in a looped linked list.
 * @head: A pointer of the listint_t to check.
 *
 * Return:  The number of nodes - Else return 0
 *         
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *one, *two;
	size_t points = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	one = head->next;
	two = (head->next)->next;

	while (two)
	{
		if (one == two)
		{
			one = head;
			while (one != two)
			{
				points++;
				one = ->next;
				one = one->next;
			}

			one = one->next;
			while (one != two)
			{
				points++;
				one = one->next;
			}

			return (points);
		}

		one = one->next;
		two = (two->next)->next;
	}

	return (0);
}


size_t print_listint_safe(const listint_t *head)
{
	size_t points, indice = 0;

	points = looped_listint_len(head);

	if (points == 0)
	{
		for (; head != NULL; points++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; indice < points; indice++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (points);
}
