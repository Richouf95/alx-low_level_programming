#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - return a pointer of 2 dimansional array
 * @width: input
 * @height: input
 * Return: result
*/

int **alloc_grid(int width, int height)
{
	int **newlyArray;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	newlyArray = malloc(sizeof(int *) * height);

	if (newlyArray == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		newlyArray[x] = malloc(sizeof(int) * width);

		if (newlyArray[x] == NULL)
		{
			while (x >= 0)
			{
				free(newlyArray[x];
				x--;
			}

			free(newlyArray);

			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		y = 0;
		while (y < width)
		{
			newlyArray[x][y] = 0;
			y++;
		}
	}

	return (newlyArray);
}
