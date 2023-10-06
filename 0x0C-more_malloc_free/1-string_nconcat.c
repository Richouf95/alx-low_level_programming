#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - Concatenate two string
 * @s1: String 1
 * @s2: String 2
 * @n: length of part of s2
 * Return: Result
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newlyString;
	unsigned int i, j = 0, k = 0, s1Length = 0, s2Length = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		s1Length++;

	for (i = 0; s2[i]; i++)
		s2Length++;

	newlyString = malloc(sizeof(char) + (s1Length + s2Length + 1));
	if (newlyString == NULL)
		return (NULL);

	while (s1[j] != '\0')
	{
		newlyString[j] = s1[j];
		j++;
	}

	while (s2[k] != '\0')
	{
		newlyString[j] = s2[k];
		j++;
		k++;
		if (n < s2Length && k == n)
			break;
	}
	newlyString[j] = '\0';
	return (newlyString);
}
