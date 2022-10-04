#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  *_strdup - function that returns a pointer to a newly allocated space
  *in memory, which contains a copy of the string given as a
  *parameter.
  *@str: char pointer
  *
  *Return: pointer to the duplicate string if succes
  *or NULL if str = NULL.
  */
char *_strdup(char *str)
{
	char *p = (char *)malloc(sizeof(char) * strlen(str));

	if (strlen(str) == 0)
		return ('\0');
	strcpy(p, str);
	return (p);
}
