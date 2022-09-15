#include "main.h"
#define LOW 0
#define HIGH 15
/**
  *print_times_table - print the table n times
  *@n: The integer argument to be passed
  *
  *Return: No return value
  */
void print_times_table(int n)
{
	int i,j;

	for (i = 0; n > 0 && n < 15 && i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			_putchar(j*i + '0');
			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ' );
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
