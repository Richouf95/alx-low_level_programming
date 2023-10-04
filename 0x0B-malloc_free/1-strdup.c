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
	int numberOfCharacter = 0;
	char *strCopy;

	while (str[numberOfCharacter] != '\0')
		numberOfCharacter++;

	numberOfCharacter += 1;

	strCopy = malloc(sizeof(char) * numberOfCharacter);

	if (str == NULL || strCopy == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		strCopy[i] = str[i];

	return (strCopy);
}
