#include "function_pointers.h"
#include <stdlib.h>
/**
  *print_name - function to print a name
  *@name: char pointer argument
  *@f: a function pointer
  *
  *Return: No return
  */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
