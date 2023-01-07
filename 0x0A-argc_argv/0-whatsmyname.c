#include <stdio.h>
/**
  * main - function that prints the name of the program
  * @argc: number of arguments passed
  * @argv: the strings passed
  * Return: 0
  */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{

	printf("%s\n", argv[i]);

	}

	return (0);
}
