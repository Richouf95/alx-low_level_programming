#include "main.h"
/**
 * _strlen - must return the length of string
 * @s: input
 * Return: length
*/

int _strlen(char *s)
{
	int sLength = 0;

	while (*s != '\0')
	{
		sLength++;
		s++;
	}

	return (sLength);
}
