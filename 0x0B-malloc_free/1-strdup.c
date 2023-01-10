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
	unsigned int i;
	char *s;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		;
	s = malloc(i + 1);
		if (s != NULL)
		{
			for (; i >= 0; i--)
				s[i] = str[i];
		}
	return (s);
}
