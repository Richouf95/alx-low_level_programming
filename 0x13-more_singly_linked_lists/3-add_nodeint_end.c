#include "lists.h"

/**
 * add_nodeint_end - add new item at end of list
 * @head: list
 * @n: input
 * Return: result
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newItem;
	listint_t *tmp = *head;

	newItem = malloc(sizeof(*newItem));

	if (newItem == NULL)
		return (NULL);

	newItem->n = n;
	newItem->next = NULL;

	if (*head == NULL)
	{
		*head = newItem;
		return (newItem);
	}

	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = newItem;

	return (newItem);
}
