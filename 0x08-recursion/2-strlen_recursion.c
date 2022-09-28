#include "main.h"

/**
  *_strlen_recursion - A function to compute the length of string
  *@s: char pointer
  *
  *Return: the length of the string.
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
