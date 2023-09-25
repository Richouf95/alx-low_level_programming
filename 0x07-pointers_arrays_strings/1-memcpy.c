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

	for (x = 0; x < n; x+)
	{
		dest[x] = src[x];
		n--;
	}

	return (dest);
}
