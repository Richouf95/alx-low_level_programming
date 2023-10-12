#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print number
 * @separator: input
 * @n: input
 * @...: input
 * Return: result
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list item;
	unsigned int index;

	va_start(item, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(item, int));

		if (index != n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(item);
}
