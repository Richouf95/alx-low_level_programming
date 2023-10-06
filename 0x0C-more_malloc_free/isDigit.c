#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * isDigit - check if characters of string are digit
 * @str: string
 * Return: 0 : fun a non diigit character | 1 otherwises
*/

int isDigit(char *str)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i])
			return (0);

		i++;
	}

	return (1);
}
