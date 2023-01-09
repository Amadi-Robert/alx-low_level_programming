#include "main.h"
#include <string.h>
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
	unsigned int i, len;
	char *s;

	len = strlen(str);

	s = malloc((len + 1) * sizeof(char));

	if (str == NULL || s == 0)
	{
		return (NULL);
	}

	i = 0;

	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}


