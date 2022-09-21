#include "main.h"

/**
  *reverse_array - A function to reverse an array
  *@a: int pointer which is the integer array
  *@n: int argument which is the length of the array.
  *
  *Return: No return value.
  */
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	for (i = 0; i < n / 2; i++)
	{

		temp = *(a + i);
		*(a + i) = *(a - (i + 1 - n));
		*(a - (i + 1 - n)) = temp;
	}

}
