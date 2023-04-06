#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: An  integer for the new node to contain
 *
 * Return: the address of the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *;
	listint_t *temp = *head;

	node = malloc(sizeof(listint_t));
	if (node == NULL )
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	
		*head = node;
	else
        {
	

	        while (temp->next != NULL )
		        temp = temp->next;

	        temp->next = node;
	}	

	return (*head);
}

