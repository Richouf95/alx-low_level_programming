#include <stdio.h>
#include "main.h"

/**
 * main - numbers of arg
 * @argc: number of arg
 * @argv: list of arg
 * Return: 0
 *
*/

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void) argv;
	return (0);
}
