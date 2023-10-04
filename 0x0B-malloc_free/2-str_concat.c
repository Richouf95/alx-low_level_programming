#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - add two string
 * @s1: input
 * @s2: input
 * Return: result
*/

char *str_concat(char *s1, char *s2)
{
	char *newlyString;
	int i = 0;
	int j = 0;

	s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	newlyString = malloc(sizeof(char) * (i + j + 1));

	if (newlyString == NULL)
		return (NULL);

	i = 0;
	j = 0;

	while (s1[i] != '\0')
	{
		newlyString[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		i++;
		newlyString[j] = s2[j];
		j++;
	}

	newlyString[i] = '\0';

	return (newlyString);
}
