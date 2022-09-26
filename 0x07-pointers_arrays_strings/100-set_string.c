#include "main.h"
#include <stdio.h>

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
}
