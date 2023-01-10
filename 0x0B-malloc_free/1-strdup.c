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

	if (str == 0)
	{
		return (0);
	}
	for (len = 0; str[len] != 0; len++)
	{
	}
	len++;
	s = malloc(sizeof(char) * len);
	if (s == 0)
	{
		return(0);
	}
	for (i = 0; i <= len; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
