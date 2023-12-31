#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_list - print list items
 * @h: list to print
 * Return: result
*/

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		s++;
		h = h->next;
	}
	return (s);
}
