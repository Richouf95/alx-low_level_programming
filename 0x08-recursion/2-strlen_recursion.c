#include "main.h"

/**
 * _strlen_recursion - length of a string
 * @s: input
 * Return: 0
*/

int _strlen_recursion(char *s)
{
	int sLength = 0;

	if (*s)
	{
		sLength++;
		sLength += _strlen_recursion(s + 1);
	}

	return (sLength);
}
