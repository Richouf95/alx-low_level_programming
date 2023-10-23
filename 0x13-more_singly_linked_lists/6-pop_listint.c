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

	if (head == NULL || *head == NULL)
		return (0);

	nextItems = (*head)->next;
	nodeData = (*head)->n;
	free(*head);
	*head = nextItems;

	return (nodeData);
}
