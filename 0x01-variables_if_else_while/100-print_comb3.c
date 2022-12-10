#include <stdio.h>
/**
 * main - Print the numbers from 00 to 99, numbers seperated by
 *        a comma followed by a space, in ascending order.
 *
 * Return: Always 0
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			if (j > i)
			{
				putchar(i + '0');
				putchar(j + '0');
				if (i != 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
