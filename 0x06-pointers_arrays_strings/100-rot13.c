#include "main.h"

/**
 * rot13 - rotate character in a string
 * @str: string
 * Return: pointer to string after replavement
 */

char *rot13(char *str)
{
	char *str_copy = str;
	int i;
	const char arr[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	const char replacement[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABC
		DEFGHIJKLM";

	while (*str_copy)
	{
		for (i = 0; arr[i] != '\0'; i++)
		{
			if (*str_copy == arr[i])
			{
				*str_copy = replacement[i];
				break;
			}
		}
		str_copy++;
	}
	return (str);
}
