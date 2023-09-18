#include "main.h"

/**
 * puts_half - print half of a string
 * @str: input
 * Return: length
*/

void puts_half(char *str)
{
	int sLength = 0;

	while (*str != '\0')
	{
		sLength++;
		str++;
	}

	return (sLength);
}
