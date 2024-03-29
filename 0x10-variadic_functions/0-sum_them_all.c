#include "variadic_functions.h"
#include <stdarg.h>
/**
  * sum_them_all - fuction that sum all it's parameters
  * @n: first parameter
  * Return: sum of the parameter if successfull and 0 is n is NULL
  */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i;

	va_start(args, n);
	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	return (sum);
}
