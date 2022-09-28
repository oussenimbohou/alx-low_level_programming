#include "main.h"

/**
  *_sqrt_recursion - A function to compute the square root
  *@n: integer argument.
  *
  *Return: -1 if n doesnt have a square root otherwise
  *it return the square root.
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_perfect_root(n, 1));
}

/**
  *find_perfect_root - finding the square root from 0 to the n
  *@num: integer argument
  *@perfect_root: integer argument.
  *
  *Return: The perfect square root
  */
int find_perfect_root(int num, int perfect_root)
{
	if (perfect_root * perfect_root > num)
		return (-1);
	if (perfect_root * perfect_root == num)
		return (perfect_root);
	else
		return find_perfect_root(num, perfect_root + 1);
}
