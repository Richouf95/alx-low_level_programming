#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - return point of a newly string
 * @str: input
 * Return: Null if std = NULL
*/

char *_strdup(char *str)
{
	int i;
	char *strCopy;

	strCopy = malloc(sizeof(str) + 1);

	if (str == NULL || strCopy == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		strCopy[i] = str[i];

	return (strCopy);
}
