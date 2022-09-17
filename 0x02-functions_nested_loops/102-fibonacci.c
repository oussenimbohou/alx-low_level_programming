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
	long int i, f1 = 1, f2 = 2, f;

	printf("%ld, %ld, ", f1, f2);
	for (i = 3; i < MAX; i++)
	{
		f = f1 + f2;
		printf("%ld, ", f);
		f1 = f2;
		f2 = f;
	}
	printf("%ld\n", f1 + f2);
	return (0);
}
