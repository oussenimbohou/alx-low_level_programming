#include "main.h"

/**
  *factorial - A function to compute the factorial of a mumber
  *@n: Integer argument
  *
  *Return: the factorial of the number n
  */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (n * (factorial(n - 1)));
	}
}
