#include <stdio.h>
#include "main.h"

/**
 * main - print all args
 * @argc: number of arg
 * @argv: list of arg
 * Return: 0;
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
