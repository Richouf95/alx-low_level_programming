#include "main.h"

/**
 * puts2 - write every other character of a string
 * @str: input
 * Return: value
*/

void puts2(char *str)
{
	char *y = str;
	int sLength = 0;
	int x = 0;
	int count;

	while (*y != '\0')
	{
		y++;
		sLength++;
	}

	x = sLength - 1;

	for (count = 0; count <= x; count++)
	{
		if (count % 2 == 0)
			_putchar(str[count]);
	}

	_putchar('\n');
}
