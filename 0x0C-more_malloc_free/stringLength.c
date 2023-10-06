#include "main"
#include <stdio.h>
#include <stdlib.h>

/**
 * stringLength - calculte the length of a string
 * @str: string
 * Return: length
*/

int stringLength(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;

	return (i);
}
