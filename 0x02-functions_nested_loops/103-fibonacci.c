#include <stdio.h>

/**
  *main - Starting of the program to print out the sum of
  *the even fibonacci numbers less than 4000000.
  *
  *Return: Always 0 (success)
  */
int main(void)
{
	int i;
	long f1 = 1, f2 = 2, f = f1 + f2, sum = f2;

	for (i = 1; f <= 4000000; i++)
	{
		f1 = f2;
		f2 = f;
		f = f1 + f2;
		if (f % 2 == 0 && f <= 4000000)
		{

			sum += f;
		}
	}
	printf("%ld\n", sum);
}
