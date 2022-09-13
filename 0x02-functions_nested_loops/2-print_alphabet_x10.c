#include "main.h"

/**
  *print_alphabet_x10 - pinting the whole alphabet 10 times.
  *
  *Return: 0
  */
void print_alphabet_x10(void)
{
	int ch = 'a';
	int i;
	for(i = 0; i < 10; i++)
	{
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
	}
	return (0);
}
