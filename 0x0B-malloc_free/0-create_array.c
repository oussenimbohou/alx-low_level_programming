#include "main.h"
#include <stdlib.h>

/**
  *create_array - A function to initialize an array with a set of char
  *@size: integer argmument
  *@c: char argmument
  *
  *Return: The pointer to the array if success or NULL if size is 0
  */

char *create_array(unsigned int size, char c)
{
	char *p = (char *)(malloc(sizeof(char) * size));
	unsigned int i = 0;

	if (size == 0)
		return ('\0');
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	while (i < size)
	{
		*(p + i) = c;
		i++;
	}
	return (p);
}
