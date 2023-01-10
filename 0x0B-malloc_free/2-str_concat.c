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
	unsigned int len1 = 0, len2 = 0;
	char *s, *p;

	s = s1;
	if (s1)
		while (*s++)
			len1++;
	else
		s1 = "";
	s = s2;
	if (s2)
		while (*s++)
			len2++;
	else
		s2 = "";
	p = malloc(len1 = len2 + 1);
	if (!p)
		return (NULL);
	s = p;
	while (*s1)
		*s++ = *s1++;
	while (*s2)
		*s++ = *s2++;
	*s = 0;

	return (p);
}
