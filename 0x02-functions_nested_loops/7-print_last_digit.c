#include "main.h"
/**
 *print_last_digit - prints the last digit of a number
 *@n: integer to be checked
 *Return: 0 if success
 */

int print_last_digit(int n)
{
	int last_digit;
	n = 98;

	last_digit = n % 10;

	_putchar(last_digit);

	return (0);
}
