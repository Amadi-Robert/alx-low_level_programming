#include "main.h"
#include <stdlib.h>
/**
  * create_array - function that creates an array of characters and
  *        initialize them with a specific char
  * @size: size of the array
  * @c: type of array
  * Return: pointer to the allocated memory
  */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *h;

	h = malloc(size * sizeof(char));

	if (size == 0 || h == NULL)
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
