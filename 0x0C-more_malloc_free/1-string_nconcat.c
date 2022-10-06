#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
  *string_nconcat - Function to concatenate 2 strings
  *@s1: char pointer as destination
  *@s2: char pointer as source
  *@n: integer argument as number of character to concatenate
  *
  *Return: pointer to point to a newly allocated space if success
  *NULL if it fails
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int i, j, limit, len1, len2;

	limit = n;
	len1 = strlen(s1);
	len2 = strlen(s2);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (limit < 0)
		return (NULL);
	if (limit >= len2)
		limit = len2;
	p = malloc(sizeof(*p) * (len1 + limit + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		p[i] = s1[i];
	for (j = 0; j < limit; i++, j++)
		*(p + i) = *(s2 + j);
	*(p + i) = '\0';

	return (p);
}
