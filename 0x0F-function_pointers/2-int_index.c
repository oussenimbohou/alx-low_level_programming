#include "function_pointers.h"

/**
  *int_index - function that searches for an integer
  *@array: integer array argument to be processed
  *@size: integer size argument which is the length of th array
  *@cmp: int pointer argement to be used to compare elements
  *
  *Return: return the index of the first element for which cmp is not zero
  *return -1 if no element matches, or if the size of the array is negatif
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}
	return (-1);
}
