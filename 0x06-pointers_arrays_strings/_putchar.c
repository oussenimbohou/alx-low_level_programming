#include <unistd.h>

/**
  *_putchar - It's a customize putchar function to print character.
  *@c: Character argument to be passed to the function.
  *
  *Return: It will return 1 if successful or -1 if there is a failure.
  */
int _putchar(char c)
{
	return (write(1,&c,1));
}

