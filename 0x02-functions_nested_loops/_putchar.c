#include <unistd.h>
/**
  *_putchar - A function to print out a character ch.
  *@ch: the argument that will be passed to _putchear.
  *
  *Return: 1 (success) and -1 (fail).
  */
int _putchar(char ch)
{
	return (write(1,&ch,1));
}
