#include <stdio.h>
/**
 * main - I sometimes suffer from insomnia And when I cannot fall asleep I play what I call the alphabet game
 * Return: 0
*/

int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
