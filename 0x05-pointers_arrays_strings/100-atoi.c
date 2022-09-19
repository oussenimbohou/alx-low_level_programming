#include "main.h"

/**
  *_atoi: Function to convert a string to an integer.
  *@s:Argument string.

  *Return an integer value of the corresponding string.
  */
int _atoi(char *s)
{
	int minus = 0;
	while (*s != '\0')
		if (*s == '-')
		{
			minus++;
		}
		while (*s >= '1' || *s <= '9')
		{
			_putchar(*s);
			s++;
		}
		s++;
}
