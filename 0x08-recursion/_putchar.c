#include <unistd.h>

/**
  *_putchar - A function to print a string character by character
  *@c: char argument
  *
  *Return: 1 if success and 0 if it fails.
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
