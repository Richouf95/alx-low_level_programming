#include "lists.h"

/**
 * insert_nodeint_at_index - add node at index
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x = 0, position = idx - 1;
	listint_t *newItem, *nextItems = *head;

	newItem = malloc(sizeof(*newItem));

	if (newItem == NULL || head == NULL)
		return (NULL);

	newItem->n = n;
	newItem->next = NULL;

	if (idx == 0)
	{
		newItem->next = *head;
		*head = newItem;
	}

	while (nextItems && x < idx)
	{
		if (x != position)
		{
			nextItems = nextItems->next;
			x++;
		}
		else
		{
			newItem->next = nextItems->next;
			nextItems->next = newItem;
			return (newItem);
		}
	}

	return (NULL);
}
