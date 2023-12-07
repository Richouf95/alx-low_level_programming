#include "lists.h"

/**
 * add_dnodeint_end - add node at end of a list
 * @head:list
 * @n: new node
 * Return: new node
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node;
	dlistint_t *tmp = *head;

	node = malloc(sizeof(*node));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		node->prev = NULL;
		*head = node;
	}
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;

		tmp->next = node;
		node->prev = tmp;
	}

	return (node);
}
