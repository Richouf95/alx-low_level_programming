#include "lists.h"

/**
 * reverse_listint - reverse list
 * @head: list
 * Return: result
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevItems = NULL;
	listint_t *nextItems = NULL;

	if (*head == NULL)
		return (NULL);

	while (*head)
	{
		nextItems = (*head)->next;
		(*head)->next = prevItems;
		prevItems = *head;
		*head = nextItems;
	}

	*head = prevItems;

	return (*head);
}
