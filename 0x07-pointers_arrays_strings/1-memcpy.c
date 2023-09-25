#include "main.h"

/**
 * *_memcpy - copies memory erea
 * @dest: input
 * @src: input
 * @n: input
 * Return: output value
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x;
	int y = n;

	for (x = 0; x < y; x++)
	{
		dest[x] = src[x];
		y--;
	}

	return (dest);
}
