#include "main.h"

/**
  *_strcmp - A function to compare 2 string
  *@s1: char pointer to  the first string.
  *@s2: char pointer to the second string
  *
  *Return: The return value will be
  *0 if both string are equal
  *Negative if the first string is less than the second one
  *Positive if the first one is greater than the second one
  */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}
