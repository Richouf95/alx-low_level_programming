#include "main.h"

/**
 * print_rev - Print string in reverse
 * @s: input
 * Return: 0
*/

void print_rev(char *s)
{
	int sLength = 0;
	int count;

	while (*s != '\0')
	{
		sLength++;
		s++;
	}

	s--;

	for (count = sLength; count > 0; count--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
