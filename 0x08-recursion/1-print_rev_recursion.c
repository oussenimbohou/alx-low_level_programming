#include "main.h"
#include <string.h>

/**
  *_print_rev_recursion - A function to reverse a string recursively
  *@s: A char pointer as a string.
  *
  *Return: No return.
  */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
