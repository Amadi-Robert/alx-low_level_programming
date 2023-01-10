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

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;

	s = (char *)malloc(sizeof(char) * (i + 1);

	if (s == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		s[j] = str[j];

	return (s);
}
