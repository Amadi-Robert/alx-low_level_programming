#include "main.h"
#include <string.h>

/**
  * binary_to_uint - Function that converts a binary to an unsigned int
  * @b: String of chars
  *
  * Return: Converted number, 0 if there is one or more chars in the string b
  *         thart is not 0 or 1 and when b is NULL
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	unsigned int dec = 0;

	if (b == NULL)
		return (0);
	while (*(b + n) != '\0')
	{
		if (*(b + n) != '0' && *(b + n) != '1')
			return (0);
		dec <<= 1;
		if (*(b + n) == '1')
			dec ^= 1;
		n++;
	}
	return (dec);
}
