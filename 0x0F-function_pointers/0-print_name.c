#include <stdio.h>
#include "function_pointer.h"

/**
 * print_name - print a name
 * @name: input
 * @f: input
 * Return: Result
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
