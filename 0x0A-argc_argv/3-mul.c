#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - multiplie the two arg of prog
 * @argc: number arg
 * @argv: list of arg
 * Return: Error if error else 0
 *
*/

int main(int argc, char **argv)
{
	int a1;
	int a2;
	int mul;

	if (argc < 3 || argc > 3)
		printf("Error\n");
	else
	{
		a1 = atoi(argv[1]);
		a2 = atoi(argv[2]);
		mul = a1 * a2;
		printf("%d\n", mul);
	}

	return (0);
}
