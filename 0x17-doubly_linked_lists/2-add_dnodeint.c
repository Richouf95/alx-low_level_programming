#include "lists.h"

/**
 * add_dnodeint - add new node at front of a list
 * @head: list
 * @n: new node
 * Return: new node
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp = *head;
	dlistint_t *node;

	node = malloc(sizeof(*node));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;
	node->prev = NULL;

	if (tmp == NULL)
	{
		/*tmp = malloc(sizeof(*tmp));
		if (tmp == NULL)
			return (NULL);*/
		tmp = node;
	}
	else
	{
		tmp->prev = node;
		node->next = tmp;
		tmp = node;
	}

	*head = tmp;

	return (node);
}
