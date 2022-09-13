#include "main.h"
/**
  *print_alphabet_x10 - pinting the whole alphabet 10 times.
  *
  *Return: No return value.
  */
void print_alphabet_x10(void)
{
	int ch;
	int i;

	for (i = 0; i < 10; i++)
	{
		ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
	}
}
