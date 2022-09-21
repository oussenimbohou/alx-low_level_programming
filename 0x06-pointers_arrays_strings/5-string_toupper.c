#include "main.h"

/**
  *string_toupper - Function to capitalise all the lowercase letter.
  *@str: char pointer argument which is a string.
  *
  *Return: char pointer which is the modified string
  */
char *string_toupper(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
			*(str + i) = *(str + i) - 32;
		i++;
	}
	return (str);
}
