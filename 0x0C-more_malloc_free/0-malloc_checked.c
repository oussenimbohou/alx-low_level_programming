#include "main.h"
#include <stdlib.h>

/**
  *malloc_checked - Function that allocates memory using malloc.
  *@b: unsinged int argument.
  *
  *Return: Pointer to the allocated memory if success
  *return 98 if fail
  */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
