#include "main.h"

/**
  *_islower - A function to check if the character is lower is not.
  *@c: The argument that is passed to the function.
  *
  *Return: 1 if c is lowercase and 0 otherwise.
  */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
