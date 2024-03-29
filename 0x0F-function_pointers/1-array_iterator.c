#include "function_pointers.h"
/**
  * array_iterator - function that executes function given as parameter on
  * each element of an array
  * @array: array to be iterated
  * @size: unsigned int size
  * @action: function pointer
  */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
