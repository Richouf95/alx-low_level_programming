#include "lists.h"

/**
 * print_dlistint - function to print list nodes
 * @h: list
 * Return: list length
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t length = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		length++;
	}

	return (length);
}
