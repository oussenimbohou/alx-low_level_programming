#include "main.h"
/**
  *print_alphabet- print lower case alphabet
  *
  *
  *Return: It will return nothing.
  */
void print_alphabet(void)
{
	int  ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
