#include "lists.h"

/**
 * sum_dlistint - compute the sum of list items
 * @head: list
 * Return: the sum
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
