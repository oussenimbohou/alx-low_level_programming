#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
  *set_string - a function to set a double pointer char to a char.
  *@s: a double pointer argument to be set
  *@to: A pointer argument to use to set the double pointer.
  *
  *Return: No return
  */
void set_string(char **s, char *to)
{
	*s = to;
/*	int i, len = strlen(to);
	s = (char**) malloc(sizeof(char*) * len);
	printf("Hello %d\n", len);

	s[0] = (char*)malloc(sizeof(char) * len);
	for (i = 0; i < len; i++)
	{
		s[0][i] = to[i];
	}
	s[0][i] = '\0';
	printf("%s\n", s[0]);*/

}
