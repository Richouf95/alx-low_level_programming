#include "lists.h"

/**
 * sum_listint - sum of node values
 * @head: list
 * Return: value
*/

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *nextItems;

	nextItems = head;

	if (head == NULL)
		return (0);

	while (nextItems)
	{
		sum += nextItems->n;
		nextItems = nextItems->next;
	}

	return (sum);
}
