#include "main.h"
/**
  * _strpbrk - function that searches a string for any set of bytes
  * @s: string to be scanned
  * @accept: string with the character to match
  * Return: pointer to the bytes in s, otherwise NULL
  */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (0);
}
