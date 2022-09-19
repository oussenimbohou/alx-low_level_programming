#include <unistd.h>

/**
  *_putchar - A builtin function to print everything
  *character by character.
  *@c: The character argument
  *
  *Return: 1 on success and 0 on error
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
