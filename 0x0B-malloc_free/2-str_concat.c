#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
  * str_concat - function that concatenates two strings
  * @s1: first string
  * @s2: second string
  * Return: pointer to new memory, otherwise NULL for failure
  */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, len1, len2, size;
	char *s;

	len1 = strlen(s1);
	len2 = strlen(s2);
	size = len1 + len2 + 2;

	s = malloc(size * sizeof(char));

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= len1; i++)
	{
		s[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		s[len1 + i] = s2[i];
	}
	s[size - 1] = '\0';
	return (s);
}
