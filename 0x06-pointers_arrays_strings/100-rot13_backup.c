#include "main.h"
#include <stdio.h>
#define KEY 13

/**
  *rot13 - A function to encode the whole string
  *@str: char pointer which is a string.
  *
  *Return: It will new encoded string.
  */
char *rot13(char *str)
{
	int  i = 0;

	while (*(str + i) != '\0')
	{
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
			*(str + i) = ((*(str + i) - 'a' + KEY) % 26) + 'a';
		i++;
	}
	i = 0;
	while (*(str + i) != '\0' &&
			(*(str + i) >= 'A' && *(str + i) <= 'Z'))
	{
		*(str + i) = ((*(str + i) - 'A' + KEY) % 26) + 'A';
		i++;
	}
	return str;
}
