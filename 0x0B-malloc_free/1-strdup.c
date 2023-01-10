#include "main.h"
#include <stdlib.h>
/**
  * _strdup - function that allocates memory which contains a copy
  *           a given parameter
  * @str: parameter to be duplicated
  * Return: on succes it returns pointer to the duplicated string,
  * otherwise NULL.
  */

char *_strdup(char *str)
{
	unsigned int i, j;
	char *s;

	i = 0;
	j = 0;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	s = malloc((i + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	while (str[j] != '\0')
	{
		s[j] = str[j];
		j++;
	}
	s[j] = '\0';
	return (s);
}

