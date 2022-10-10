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
	int i, len;
	char *p;

	len = 0;

	while (str[len] != '\0')
		len++;
	p = malloc(sizeof(char) * (len + 1));

	if (str == NULL)
		return (NULL);
	if (p == NULL)
	{
		free(p);
		return ('\0');
	}
	for (i = 0; i <= len; i++)
		*(p + i) = *(str + i);
	return (p);
}
