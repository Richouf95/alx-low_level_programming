#include "main.h"

/**
 * _strstr - locate a substring
 * @haystack: input
 * @needle: input
 * Return: output
*/

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *x = haystack;
		char *y = *needle;

		while (*x == *y && *y != '\0')
		{
			x++;
			y++;
		}

		if (*y == '\0')
			return (haystack);

		haystack++;
	}
	return (0);
}
