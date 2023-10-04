#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - concatenate all args
 * @ac: input
 * @av: input
 * Return: result
*/

char *argstostr(int ac, char **av)
{
	int i, j;
	int x = 0;
	int y = 0;
	char *argsConcat;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			y++;
	}

	y = y + ac;

	argsConcat = malloc(sizeof(char) * y + 1);

	if (argsConcat == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			argsConcat[x] = av[i][j];
			x++;
		}

		if (argsConcat[x] == '\0')
			argsConcat[x++] = '\n';
	}

	return (argsConcat);
}
