#include "main.h"
/**
  * set_string - function that set value of a pointer to a char
  * @s: a pointer to pointer to a char
  * @to: pointer point to a char
  *
  * Return: void
  */
void set_string(char **s, char *to)
{
	*s = to;
}
