#include "main.h"

/**
  *print_rev - Printing the string in a reverse way
  *@s: The string argument
  *Return: No return value for the function print_rev
  */

void print_rev(char *s)
{
	int i, len = 0;

	while (len >= 0)
	{
		if (s[len] == '\0')
			break;
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');

}
