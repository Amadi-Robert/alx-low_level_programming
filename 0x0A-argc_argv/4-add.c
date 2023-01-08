#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
  * main - adds positive numbers
  * @argc: counts the number of arguments passed
  * @argv: arguments passed
  * Return: 1 if it's not a digit otherwise 0
  */

int main(int argc, char *argv[])
{
	int i, j, result;

	result = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
