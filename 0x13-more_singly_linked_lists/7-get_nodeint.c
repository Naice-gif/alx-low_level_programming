#include "lists.h"

/**
 * get_nodeint_at_index - locates a certain node of  a linked list
 * @head: pointer to the node in the linked list
 * @index: index of the node to return and starts at 0
 *
 * Return: located node, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node = 0;
	listint_t *tmp = head;

	while (tmp && node < index)
	{
		tmp = tmp->next;
		node++;
	}

	return (tmp ? tmp : NULL);
}

