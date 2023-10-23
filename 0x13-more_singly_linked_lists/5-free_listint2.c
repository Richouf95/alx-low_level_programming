#include "lists.h"

/**
 * free_listint2 - clear list
 * @head: list
*/

void free_listint2(listint_t **head)
{
	listint_t *nextItems;

	if (head == NULL)
		return;

	while (*head)
	{
		nextItems = (*head)->next;
		free(*head);
		*head = nextItems;
	}

	*head = NULL;
}
