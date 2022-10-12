#include "function_pointers.h"

/**
  *array_iterator - function to print each element of an array
  *@array: integer array argment
  *@size: size_t argument
  *@action: function to go through each element
  *
  *Return: Nothing
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
