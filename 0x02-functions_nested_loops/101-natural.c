#include <stdio.h>
#define NUM1 3
#define NUM2 5
#define LIMIT 1024
/**
  *main - A program to print the sum of the multiple of 5 and 3
  *
  *Return: Always 0 (success)
  */
int main(void)
{
	int i, sum = 0;

	for (i = NUM1; i < LIMIT; i++)
	{
		if (i % NUM1 == 0 || i % NUM2 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
