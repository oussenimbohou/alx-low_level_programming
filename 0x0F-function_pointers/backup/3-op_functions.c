#include "3-calc.h"
#include <stdio.h>
/**
  *op_add - function to add 2 integers.
  *@a: integer argument as first operand
  *@b: integer argument as second operand
  *
  *Return: the sum of a and b
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  *op_add - function to susbtract 2 numbers
  *@a: integer argument as first operand
  *@b: integer argument as second operand
  *
  *Return: the difference of a and b
  */
int op_sub(int a, int b)
{
	printf("minus\n");
	return (a - b);
}

/**
  *op_mul - function to multiply 2 numbers
  *@a: integer argmuent as first operand
  *@b: integer argument as second operand
  *
  *Return: the product of a and b.
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  *op_div - function to divide 2 numbers
  *@a: integer argument as first operand
  *@b: integer argument as second operand
  *
  *Return: the result of the division of a by b.
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
  *op_mod - function to compute the modulus of 2 numbers
  *@a: integer argument as first operand
  *@b: integer argument as second operand
  *
  *Return: the remainder of a by b
  */
int op_mod(int a, int b)
{
	if(b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

