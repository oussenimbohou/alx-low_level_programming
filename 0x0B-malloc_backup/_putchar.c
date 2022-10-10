#include <unistd.h>

/**
  *_putchar - function to print string character wise
  *@c: char argument
  *
  *Return: 1 if success or 0 if fail.
  *
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
