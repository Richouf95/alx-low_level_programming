#include "lists.h"

/**
 * insert_dnodeint_at_index - Function to insert node at a given position
 * @h: list
 * @idx: index
 * @n: new node
 * Return: new node adress
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h;
	dlistint_t *newNode;
	unsigned int i = 1;

	if (idx == 0)
	{
		newNode = add_dnodeint(h, n);
		return (newNode);
	}

	while (tmp)
	{
		if (i == idx)
		{
			newNode = malloc(sizeof(*newNode));
			if (newNode == NULL)
				return (NULL);
			newNode->n = n;
			newNode->prev = tmp;
			newNode->next = tmp->next;
			if (tmp->next)
				tmp->next->prev = newNode;
			tmp->next = newNode;
			return (newNode);

		}
		tmp = tmp->next;
		i++;
	}

	return (NULL);
}
