#include "lists.h"

/**
 * listint_len - print list size
 * @h: list
 * Return: result
*/

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (i);

	while (h != NULL)
	{
		++i;
		h = h->next;
	}

	return (i);
}
