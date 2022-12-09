#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * REturn: Always 0 (Success)
 */
int main(void)
{
	int x;
	for (x = 'A'; x <= 'Z'; x++)
	{
	putchar(tolower(x));
	}
	putchar('\n');
	return (0);
}
