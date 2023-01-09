#include "main.h"
#include <stdlib.h>
/**
  * main - function that creates an array of characters and
  *        initialize them with a specific char
  * @size: size of the array
  * @c: type of array
  */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *h;

	h = malloc(size * sizeof(char));

	if (h == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (i < size)
	{
		h[i] = c;
		i++;
	}
	return (h);
}
