#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  *_calloc - function that allocates memory for an array, using malloc
  *@nmemb: integer argument
  *@size: unsigned integer argument.
  *
  *Return: Pointer to the allocated memory if success. NULL if size is
  *0 or nmemb is 0 or malloc fails
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
unsigned int i;

	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		p[i] = 0;
	return (p);
}
