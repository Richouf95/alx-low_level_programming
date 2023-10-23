#include "lists.h"

/**
 * get_nodeint_at_index - get node at index x
 * @head: list
 * @index: index
 * Return: Result
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *nextItems;

	nextItems = head;

	while (nextItems)
	{
		if (x == index)
			break;

		nextItems = nextItems->next;
		x++;
	}

	if (nextItems != NULL)
		return (nextItems);

	return (NULL);
}
