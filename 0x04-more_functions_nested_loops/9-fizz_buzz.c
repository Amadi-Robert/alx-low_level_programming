#include <stdio.h.>
#include <stdlib.h>
/**
 * main - prints numbers from 1 to 100
 * 3 multiplies print fizz instead of the number
 * 5 multiplies print buzz instead of the number
 * 3 & 5 multiplies print FizzBuzz instead of number
 * Return: 0
 */
int main(void)
{
	int i;
	char f[] = "Fizz";
	char b[] = "Buzz";
	char fb[] = "FizzBUzz";

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
			printf("%s", b);
		else if ((i % 3 == 0) && (i % 5 ==5))
			printf("%s ", fb);
		else if (i % 3 == 0)
			printf("%s ", f);
		else if (i % 5 == 0)
			printf("%s ", b);
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
