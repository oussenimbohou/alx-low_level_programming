#include "main.h"

/**
  *_puts - A function to print the whole string
  *@str: The string argument
  *
  *Return: No return value.
  */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
