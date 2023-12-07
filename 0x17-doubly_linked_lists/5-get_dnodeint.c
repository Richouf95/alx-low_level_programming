#include "lists.h"

/**
 * get_dnodeint_at_index - get list node at some index
 * @head: list
 * @index: node index
 * Return: the node
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *theNode;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head)
	{
		if (i == index)
		{
			theNode = head;
			break;
		}
		i++;
		head = head->next;
	}

	return (theNode);
}
