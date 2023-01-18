#include "function_pointers.h"
#include <stddef.h>
/**
  * print_name - function that prints a name
  * @name: chararcter array of name
  * @f: function pointer
  * Return: nothing
  */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
