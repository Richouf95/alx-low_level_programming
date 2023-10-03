#include <stdio.h>
#include <stdlib.h>

/**
 * main - add number
 * @argc: number of arg
 * @argv: list of arg
 * Return: 0
*/

int main(int argc, char **argv)
{
	int i;
	int add = 0;
	int num;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			char *numStr = argv[i];
			int j = 0;

			while (numStr[j] != '\0')
			{
				if (numStr[j] < '0' || numStr[j] > '9')
				{
					printf("Error\n");
					return (1);
				}
				j++;
			}

			num = atoi(numStr);
			add += num;
		}
		printf("%d\n", add);
	}
	else
	{
		printf("%d\n", 0);
	}

	return (0);
}
