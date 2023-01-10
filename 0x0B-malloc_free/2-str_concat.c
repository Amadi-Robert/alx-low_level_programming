#include "main.h"
#include <stdlib.h>

/**
  * str_concat - function that concatenates two strings
  * @s1: first string
  * @s2: second string
  * Return: pointer to new memory, otherwise NULL for failure
  */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, len1, len2;
	char *newtxt1, *newtxt2;

	i = 0;
	j = 0;
	len1 = 0;
	len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	newtxt1 = malloc(sizeof(char) * (len1 + len2 + 1));
	newtxt2 = newtxt1;
	if (newtxt1 == NULL)
		return (NULL);
	while (i < len1)
	{
		newtxt1[i] = s1[i];
		i++;
	}
	while (j <= len2 + 1)
	{
		newtxt1[i] = s2[j];
		j++;
	}
	return (newtxt2);
}
