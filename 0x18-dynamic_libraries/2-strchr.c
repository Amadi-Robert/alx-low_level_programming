#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: string to be scanned
 * @c: character to be looked for
 *
 * Return: returns a pointer if character is found,
 * otherwise a NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}

	return (s + 1);
}
