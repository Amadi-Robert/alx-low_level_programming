#include "main.h"
/**
 * puts2 - prints every other character of a string starting with first
 * character, followed by a new line
 * @str: char to be printed
 * Return: 0
 */

void puts2(char *str)
{
	int string;

	for (string = 0; str[string] != '\o'; string++)
		if (string % 2 == 0)
			_putchar(str[string]);
	_putchar('\n');
}
