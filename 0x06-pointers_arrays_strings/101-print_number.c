#include "main.h"
/**
 * print_number - prints number using _putchar
 * @n: int number to be printed
 */

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
		print_nummber(num / 10);

	_putchar((num % 10) + '0');
}
