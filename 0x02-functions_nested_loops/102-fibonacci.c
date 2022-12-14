#include <stdio.h>
/**
 *main - Prints first 50 Fibonaccinumbers, starting with 1 and 2
 *
 *Return: 0
 */

int main(vooid)
{
	int count;
	unsigned long n1 = 0, n2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = n1 + n2;
		printf("%lu", sum);

		n1 = n2;
		n2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
