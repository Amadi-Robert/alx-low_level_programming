#include "main.h"
/**
 * _strcat - concatenates two strings
 *
 * @dest: string to be concatenation
 * @src: string to be concatenated
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[j++])
	i++;
	for (j = 0; src[j]; j++)
	dest[i++] = src[j];

	return (dest);
}
