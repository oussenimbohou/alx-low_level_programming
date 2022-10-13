#include "variadic_functions.h"
#include <stdarg.h>

/**
  *sum_them_all - function to return the sum of all parameters
  *@n: integer argument as number of parameters
  *
  *Return: number of arguments if success and 0 if n = 0
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list args;

	va_start(args, n);

	sum = 0;

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);

	return (sum);
}
