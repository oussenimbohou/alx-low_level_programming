#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>

/**
  *print_strings - function that print a string follows by a new line
  *@separator: char pointer as a string to be used as separator.
  *@n: integer argument as the number of arguements
  *
  *Return: Nothing
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *ptr;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		ptr = va_arg(args, char*);
		if (!ptr)
			printf("%s", "nil");
		else
			printf("%s", ptr);
		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}
	printf("\n");

	va_end(args);
}
