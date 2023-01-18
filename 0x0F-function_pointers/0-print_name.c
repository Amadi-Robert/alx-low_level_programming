#include "function_pointer.h"
/**
  * print_name - function that prints a name
  * @name: chararcter array of name
  * @f: function pointer
  * Return: nothing
  */

void print-name(char *name, void (*f)(char *))
{
	f(name);
}
