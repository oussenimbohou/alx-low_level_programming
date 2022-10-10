#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
  *str_concat - A function to concatenate 2 strings
  *@s1: char pointer
  *@s2: char pointer
  *
  *Return: Newly allocated pointer to the concatenate
  *strings if success or NULL if fail
  */
char *str_concat(char *s1, char *s2)
{

	int len1 = strlen(s1);
	int len2 = strlen(s2);
	char *p = (char *)malloc(sizeof(char) * (len1 + len2 + 1));

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (p == NULL)
	{
		free(p);
		return ('\0');
	}
	for (i = 0; i < len1; i++)
	strcpy(p, s1);
	strcat(p, s2);
	return (p);
}
