#include "main.h"

/**
  *_pow_recursion - A function to computer x power y
  *@x: integer argument
  *@y: integer argument
  *
  *Return: -1 if y < 0 and x raised to the power of if success
  *
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	else
		return (x * _pow_recursion(x, y - 1));
}
