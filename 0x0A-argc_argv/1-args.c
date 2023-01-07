#include <stdio.h>
/**
  * main - prints number of arguments passed into it
  * @argc: counts the number of arguments passed
  * @argv: string of arguments passed
  * Return: 0
  */

int main(int argc, char _attribute_((unused)) *argv[])
{

	printf("%d\n", argc - 1);

	return (0);
}
