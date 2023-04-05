#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns the number of elements in a linked lists
 * @h: A pointer to the heqd of listint_t to traverse
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t a = 0;

	while (h)
	{
		a++;
		h = h->next;
	}

	return (a);
}

