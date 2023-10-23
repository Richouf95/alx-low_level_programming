#include "lists.h"

/**
 * free_listint - clear list
 * @head: list
*/

void free_listint(listint_t *head)
{
	listint_t *nextItems;

	while (head)
	{
		nextItems = head->next;
		free(head);
		head = nextItems;
	}

	head = NULL;
}
