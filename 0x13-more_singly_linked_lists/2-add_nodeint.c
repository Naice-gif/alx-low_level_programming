#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of the list
 * @head: pointer to the address of the head of the list
 * @n: data for the new node to contain.
 *
 * Return: address of the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);

	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}

