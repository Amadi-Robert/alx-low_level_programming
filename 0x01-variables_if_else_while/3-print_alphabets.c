#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Alawys 0 Success
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++);
	putchar(ch);
	for (ch = 'A'; ch <= 'A'; ch++);
	putchar(ch);
	putchar('\n');
	return (0);
}
