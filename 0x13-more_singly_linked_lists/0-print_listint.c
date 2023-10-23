#include "lists.h"

/**
 * print_listint - print list items
 * @h: list head
 * Return: result
*/

size_t print_listint(const listint_t *h)
{
	size_t size = 0;

	while (h)
	{
		printf("%d\n", h->n);
		size++;
		h = h->next;
	}

	return (size);
}
