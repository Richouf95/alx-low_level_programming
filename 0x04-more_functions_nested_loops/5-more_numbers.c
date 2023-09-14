#include "main.h"
/**
 * more_numbers - from 0 to 14 10 times
 *
 * Return: 0
*/

void more_numbers(void)
{
	int x;
	int y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			_putchar(y);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
