#include <stdio.h>
/**
 * main - Hexadecimal
 * Return: 0
*/

int main(void)
{
	char x;
	int y;

	x = 'a';
	y = 0;

	while (y < 10)
	{
		putchar(y + '0');
		y++;
	}
	while (x <= 'f')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
