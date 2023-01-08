#include <stdio.h>
#include <stdlib.h>
/**
  * main - multiplies two numbers in command line
  * @argc: counts the number of arguments
  * @argv: arguments passed
  * Return: 0
  */

int main(int argc, char *argv[])
{
	int i, result;

	result = 1;

	for (i = 1; i < argc; i++)
	{
		result = result * atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}

