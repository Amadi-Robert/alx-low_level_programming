#include "main.h"
/**
 * rev_string - reverse a string
 *@s: string to be reversed
 */

void rev_string(char *s)
{
	int length, j, i;
	char a1, a2;

	for (length = 0; s[length] != '\0'; length++)
	{
	}

	j = length - 1;
	i = 0;

	while (j > i)
	{
		a1 = s[i];
		a2 = s[j];
		s[i] = a2;
		s[j] = a1;
		j--;
		i++;
	}
}
