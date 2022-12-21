#include "main.h"
/**
 * _strcat - concatenates two strings
 *
 * @dest: string to be concatenation
 * @src: string to be concatenated
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	int lengthA, lengthB;

	lenthA = 0;
	lengthB = 0;

	while (*(dest + lengthA) != '\0')
		lengthA++;

	while (*(src + lengthB) != '\0' && lengthA < 97)
	{
		*(dest + lengthA) = *(src + lengthB);
		lengthA++;
		lengthB++;
	}
	*(dest + lengthA) = '\0';
	return (dest);
}
