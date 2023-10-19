#include <stdlib.h>
#include "lists.h"

/**
 * free_list - free list memory
 * @head: list head
*/

void free_list(list_t *head)
{
	list_t *tmp;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
