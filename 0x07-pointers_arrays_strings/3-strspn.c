#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: input
 * @accept: input
 * Return: Output
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0;
	int y;

	while (*s)
	{
		for (y = 0; accept[y]; y++)
		{
			if (*s == accept[y])
			{
				n++;
				break;
			}
			else if (accept[y + 1] == '\0')
			{
				return (n);
			}
		}
		s++;
	}
	return (n);
}
