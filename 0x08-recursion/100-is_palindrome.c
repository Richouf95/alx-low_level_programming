#include "main.h"

/**
 * is_palindrome - if input is palindrome
 * @s: input
 * Return: if => 1 else => 0
*/

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);

	return (check(s, 0, recu(s)));
}

/**
 * recu - recursive on the string
 * @s: input
 * Return: length of string
*/

int recu(char *s)
{
	if (*s == '\0')
		return (0);

	return (recu(s + 1) + 1);
}

/**
 * check - checker of each charactere
 * @s: input
 * @x: input
 * @sLength: input
 * Return: check result
*/

int check(char *s, int x, int sLength)
{
	if (*(s + x) != *(s + sLength - 1))
		return (0);

	if (x >= sLength)
		return (1);

	return (check(s, x + 1, sLength - 1));
}
