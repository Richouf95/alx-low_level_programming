#include "main.h"
/**
 * print_sign - Function that print the sign of a number
 * Return: (0) if positive | (0) if zero | (-1) if negative
 * @n: the number
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (n);
}
