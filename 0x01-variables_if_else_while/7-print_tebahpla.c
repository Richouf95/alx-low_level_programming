#include <stdio.h>
/**
 * main - Smile in the mirror
 * Return: 0
*/

int main(void)
{
	char x;

	x = 'z';
	while (x >= 'a')
	{
		putchar(x);
		x--;
	}
	putchar('\n');
	return (0);
}
