#include "main.h"
/**
 *_isalpha - prints alphabetic character
 *Return: 1 if lowercase or uppercase else 0
 *@c: character for checking
 */

int _isalpha(int c)
{
	if( (c >= 'A' && c <= 'Z') || (C >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

