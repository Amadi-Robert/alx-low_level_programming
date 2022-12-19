#include "main.h"

/**
 * swap_int - function that swaps the values of integer
 * @a: first integer
 * @b: second integer
 * Return: nothing
 */

void swap_integer(int a, int b)
{
	int *p1;
	int *p2;

	p1 = &a;
	p2 = &b;
	*a = b;
	*b = a;
}
