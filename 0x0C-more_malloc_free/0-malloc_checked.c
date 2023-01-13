#include "main.h"
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

/**
  * malloc_checked - function that alloctes memory using malloc
  * @b: unsigned integer number
  * Return: pointer to allocated memory
  */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
