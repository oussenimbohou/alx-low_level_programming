#include "main.h"

/**
  *isSeparator - function to check if the character is a separator.
  *@c: character argument.
  *
  *Return: return 1 if it's a separator and 0 if not.
  */
int isSeparator(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' ||
			c == ',' || c == ';' || c == '.' ||
			c == '!' || c == '?' || c == '"' ||
			c == '(' || c == ')' || c == '{'
			|| c == '}')
	{
		printf("char is: %c\n", c);
		return (1);
	}
	return (0);
}


/**
  *cap_string - capitalize all words
  *@str: char pointer which is a string.
  *
  *Return: char array.
  */
char *cap_string(char *str)
{
	int  i = 0;

	while (*(str + i) != '\0')
	{
		if (isSeparator(*(str + i)) == 1)
			*(str + i + 1) = *(str + i + 1) - 32;
		i++;
	}
	return (str);
}
