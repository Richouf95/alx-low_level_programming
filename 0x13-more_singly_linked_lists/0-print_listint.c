#include "lists.h"

/**
 * print_listint - print list items
 * @h: list head
 * Return: result
*/

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}

	return (i);
}
