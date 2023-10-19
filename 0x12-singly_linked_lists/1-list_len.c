#include "lists.h"
#include <stdlib.h>

/**
 * list_len - length of the list
 * @h: input
 * Return: result
*/

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
