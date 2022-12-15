#include "main.h"
#include <stdio.h>
/**
 * _isdigit - checks for a digit(0 through 9)
 * @c: Digit to be checked
 * Return: 1 if c is a digit otherwise 0
 */

int _isdigit(int c)
{
	char c;

	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
