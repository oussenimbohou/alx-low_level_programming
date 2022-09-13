#include "main.h"

/**
  *_isalpha - A program to check if the giving character is an alphabet
  *@c: character to be passed as argument.
  *
  *Return: 1 if it's an alphabet and 0 otherwise.
  */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);

}
