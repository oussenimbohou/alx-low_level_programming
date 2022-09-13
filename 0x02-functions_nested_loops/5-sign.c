#include "main.h"

/**
  *print_sign - print the sign of a giving number.
  *@n: The number to be passed as argument.
  *
  *Return: 1 if the number is positive and 0 otherwise.
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
