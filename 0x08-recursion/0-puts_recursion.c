#include "main.h"

/**
  *_puts_recursion - A function to reverse a string recursively
  *@s: char pointer as a string
  *
  *Return: Nothing
  */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

}
