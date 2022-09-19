#include "main.h"

/**
  *_strlen - A function to give the length of a string.
  *@s: The string argument to be passed
  *
  *Return: The len of the string.
  */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
