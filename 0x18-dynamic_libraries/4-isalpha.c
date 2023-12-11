#include "main.h"
/**
 * _isalpha - Function to checks for alphabetic character
 * Return: (0) if the charater is (0)
 * @c: the charater
*/

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
