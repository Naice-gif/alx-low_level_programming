#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the address of the element in the linked list
 *
 * Return: the data in the head node (n).
 * or if thelinked list is empty - 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *temporary;
	int node;

	if (*head == NULL)
		return (0);


        temporary = *head;
	node = (*head)->n;
	*head = (*head)->next;


        free(temporary);

	return (node);
}

