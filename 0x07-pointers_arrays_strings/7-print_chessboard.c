#include "main.h"

/**
 * print_chessboard - print the chessboard
 * @a: array
 * Return: value
*/

void print_chessboard(char (*a)[8])
{
	int x = 0;
	int y = 0;

	while (x < 8)
	{
		while (y < 8)
		{
			_putchar(a[x][y]);
			y++;
		}
		_putchar('\n');
		x++;
	}
}
