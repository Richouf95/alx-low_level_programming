#include "lists.h"

/**
 * print_listint - print list items
 * @h: list head
 * Return: result
*/

size_t print_listint(const listint_t *h)
{
	size_t size = 0;

	if (h == NULL)
		return size;

	while (h)
	{
		size++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (size);
}
