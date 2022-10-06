#include "main.h"
#include <stdlib.h>

/**
  *array_range - A function that creates an array of integer.
  *@min: integer argument
  *@max: integer argument
  *
  *Return: Pointer to the newly created array.
  *NULL if min>max or malloc fails
  */
int *array_range(int min, int max)
{
	int *p, i;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(*p) * (max - min + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		p[i] = min++;
	p[i] = '\0';

	return (p);
}

