#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate random password
 * Return: 0
*/

int main(void)
{
	int password[100];
	int x, y, sum;

	sum = 0;

	srand(time(NULL));

		for (x = 0; x < 100; x++)
		{
			password[x] = rand() % 78;
			sum += (password[x] + '0');
			putchar(password[x] + '0');

			if ((2772 - sum) - '0' < 78)
			{
				y = 2772 - sum - '0';
				sum += y;
				putchar(y + '0');
				break;
			}
		}
	return (0);
}
