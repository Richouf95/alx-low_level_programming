#include "main.h"
/**
 * _islower - Function that check for lowercase character
 * @c: is the character to check
 * Return: 1 if lowercase
 * Return: 0 otherwise
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
