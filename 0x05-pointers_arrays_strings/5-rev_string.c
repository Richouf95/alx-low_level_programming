#include "main.h"

/**
 * rev_string - reverse string
 * @s: Input
 * Return: string in reverse
*/

void rev_string(char *s)
{
	char reverse = s[0];
	int counte = 0;
	int x;

	while (s[counte] != '\0')
		counte++;

	for (x = 0; x < counte; x++)
	{
		counte--;
		reverse = s[x];
		s[x] = s[counte];
		s[counte] = reverse;
	}
}
