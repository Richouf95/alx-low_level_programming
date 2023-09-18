#include "main.h"

/**
 * puts_half - print half of a string
 * @str: input
 * Return: length
*/

void puts_half(char *str)
{
	int x, y, sLength;

	sLength = 0;

	for (x = 0; str[x] != '\0'; x++)
		sLength++;

	y = sLength / 2;

	if ((sLength % 2) == 1)
		y = ((sLength + 1) / 2);

	for (x = y; str[x] != '\0'; x++)
		_putchar(str[x]);

	_putchar('\n');
}
