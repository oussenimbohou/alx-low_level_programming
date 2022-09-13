#include "main.h"


/**
  *main - starting point
  *
  *Return:Always 0 (success)
  */
int main(void)
{
	int r;
	r = print_last_digit(-1024);

	_putchar('0' + r);
	_putchar('\n');
	return (0);
}
