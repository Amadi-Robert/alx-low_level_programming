#include <stdlib.h>
#include <time.h>
/* more headers goes here */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main -Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	printf("%u is positive\n", n);
	}
	else if (n == 0)
	{
	printf("%u is zero\n", n);
	}
	else
	{
	printf("%d is negative\n", n);
	}
	return (0);
}

