#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
*/
void jack_bauer(void)
{
	int x;
	int y;

	for (x = 0; x <= 24; x++)
	{
		for (y = 0; y <= 60; y++)
		{
			if (x < 10)
			{
				_putchar('0');
				_putchar(x);
			}
			if (x >= 10)
			{
				_putchar(x);
			}
			_putchar(':');
			if (y < 10)
			{
				_putchar('0');
				_putchar(y);
			}
			if (y >= 10)
			{
				_putchar(y);
			}
			_putchar('\n');
		}
	}
}
