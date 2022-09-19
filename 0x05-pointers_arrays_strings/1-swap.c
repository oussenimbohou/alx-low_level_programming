#include "main.h"

/**
  *swap_int - Function to swap 2 integers.
  *@a: First integer argument to be passed by
  *@b: Second integer argument to be passed by
  *
  *Return: No return value.
  */
void swap_int(int *a, int *b)
{
	int val;

	val = *a;
	*a = *b;
	*b = val;
}
