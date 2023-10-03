#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - minimum number od coins to change an amount
 * @argc: number of arg
 * @argv: list of arg
 * Return: 0 if ok 1 if error
*/

int main(int argc, char **argv)
{
	int counter;

	int number = atoi(argv[1]);

	int result = 0;

	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (counter = 0; counter < 5 && number >= 0; counter++)
	{
		while (number >= coins[counter])
		{
			result++;
			number = number - coins[counter];
		}
	}

	printf("%d\n", result);

	return (0);
}
