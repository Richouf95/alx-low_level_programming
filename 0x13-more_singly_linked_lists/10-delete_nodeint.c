#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at index
 * @head: list
 * @index: item index
 * Return: result
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x = 0, position = index - 1;
	listint_t *tmp, *nextItems, *item;

	tmp = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
		return (1);
	}

	while (x < position)
	{
		if (tmp == NULL || tmp->next == NULL)
		return (-1);
		tmp = tmp->next;
		x++;
	}

	item = tmp->next;
	nextItems = item->next;
	tmp->next = nextItems;
	free(item);
	return (1);
}
