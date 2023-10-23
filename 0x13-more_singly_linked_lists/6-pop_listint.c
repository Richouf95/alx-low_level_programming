#include "lists.h"

/**
 * pop_listint - remove list head
 * @head: list head;
 * Return: result
*/

int pop_listint(listint_t **head)
{
	listint_t *nextItems;
	int nodeData;

	if (head == NULL)
		return (0);

	nextItems = malloc(sizeof(*nextItems));

	if (nextItems == NULL)
		exit(EXIT_FAILURE);

	nextItems = (*head)->next;
	nodeData = (*head)->n;
	free(*head);
	*head = nextItems;

	return (nodeData);
}
