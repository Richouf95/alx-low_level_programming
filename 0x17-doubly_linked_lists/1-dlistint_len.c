#include "lists.h"

/**
 * dlistint_len - list length
 * @h: list
 * Return: list length
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t length = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		length++;
		h = h->next;
	}

	return (length);
}
