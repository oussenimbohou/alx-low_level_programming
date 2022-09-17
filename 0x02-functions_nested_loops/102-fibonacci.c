#include <stdio.h>
#define MAX 50
/**
  *main - Starting point of the program to print
  *the 50 first fibonacci numbers.
  *
  *Return: Always 0 (success)
  */
int main(void)
{
	unsigned long i, f1 = 1, f2 = 2, f;

	printf("%lu, %lu, ", f1, f2);
	for (i = 3; i < MAX; i++)
	{
		f = f1 + f2;
		printf("%lu, ", f);
		f1 = f2;
		f2 = f;
	}
	printf("%lu\n", f);
	return (0);
}
