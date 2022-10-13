#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
  *print_all - function to print anything
  *@format: char pointer as string of the format
  *
  *Return: Nothing
  */
void print_all(const char * const format, ...)
{
	va_list args;
	char *ptr, *separator;
	int i = 0, len;

	len = strlen(format);
	separator = ", ";
	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] == 'c')
		{
			printf("%c", va_arg(args, int));
		}
		else if (format[i] == 'i')
		{
			printf("%d", va_arg(args, int));
		}
		else if (format[i] == 'f')
		{
			printf("%f",va_arg(args, double));
		}
		else if (format[i] == 's')
		{
			ptr = va_arg(args, char*);
			if (!ptr)
				printf("%s", "nil");
			else
				printf("%s", ptr);
		}
		if(i < len - 1)
			printf("%s",separator);
		i++;

	}
	printf("\n");
	va_end(args);
}
