#include "lists.h"

/**
 * add_nodeint - add new item to list front
 * @head: list
 * @n: input
 * Return: Result
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newItem;

	newItem = malloc(sizeof(*newItem));

	if (newItem == NULL)
		return (NULL);

	newItem->n = n;
	newItem->next = *head;

	*head = newItem;

	return (newItem);
}
