#include "main.h"

/**
 * _strchr - locates a character in string
 * @s: input
 * @c: input
 * Return: pointer to the first occurrence of caractere
*/

char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (&s[x]);
	}

	return (0);
}
