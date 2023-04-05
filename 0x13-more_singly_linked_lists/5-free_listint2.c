#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer to the address of the listint_t list to be freed
 *
 * Description: Sets the head to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *temporary;

	if (head == NULL)
		return;

	while (*head)
	{
		temporary = (*head)->next;
		free(*head);
		*head = temporary;
	}

	head = NULL;
}

