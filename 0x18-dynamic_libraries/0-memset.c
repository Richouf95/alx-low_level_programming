#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: input
 * @b: input
 * @n: input
 * Return: outupt
*/

char *_memset(char *s, char b, unsigned int n)
{
	int x;

	for (x = 0; n > 0; x++)
	{
		s[x] = b;
		n--;
	}

	return (s);
}
