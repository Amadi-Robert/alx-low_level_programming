#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings
 * @dest: destination where scr will be concatenated
 * @src: is the source
 * @n: number of chars that will be taken from src
 * Return: results of the concatanation
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
