#include "main.h"

/**
 * _memcpy - copies memory erea
 * @dest: input
 * @src: input
 * @n: input
 * Return: output value
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int y = n;

	for (; x < y; x++)
	{
		dest[x] = src[x];
		y--;
	}

	return (dest);
}
