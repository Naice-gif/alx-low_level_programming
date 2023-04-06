#include "lists.h"
#include <stdio.h>

/**
 * print_listint - a function that prints all the elements of a listint_int
 *                    list.
 * @h: A pointer to the head of the linked list.
 *
 * Return: number of nodes in the linked list.
 */
size_t print_listint(const listint_t *h)
{
	size_t a = 0;

	while (h)
	{
	        a++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (a);
}

