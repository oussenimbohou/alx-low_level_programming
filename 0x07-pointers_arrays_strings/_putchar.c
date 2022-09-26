#include <unistd.h>

/**
  *_putchar - To print a string character by character.
  *@c: character argument.
  *
  *Return: 1 if successful and 0 if it fails.
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
