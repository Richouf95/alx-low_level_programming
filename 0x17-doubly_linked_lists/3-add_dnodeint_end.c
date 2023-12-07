#include "lists.h"

/**
 * add_dnodeint_end - add node at end of a list
 * @head:list
 * n: new node
 * Return: new node
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp = *head;
	dlistint_t *node;

	node = malloc(sizeof(*node));
}
