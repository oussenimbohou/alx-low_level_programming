#include <stdio.h>
#define LIMIT 4000000

/**
  *main - Starting of the program to print out the sum of
  *the even fibonacci numbers less than 4000000.
  *
  *Return: Always 0 (success)
  */
int main(void)
{
	int i;
	unsigned long long f1 = 1, f2 = 2, f = f1 + f2, sum = f2;

	for (i = 1; f <= LIMIT; i++)
	{
		f1 = f2;
		f2 = f;
		f = f1 + f2;
		if (f % 2 == 0 && f <= LIMIT)
		{

			sum += f;
		}
	}
	printf("%llu\n", sum);
}
