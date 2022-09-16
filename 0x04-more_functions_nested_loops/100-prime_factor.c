#include <stdio.h>
#include <math.h>

/**
*main - Starting polong of the program
*
*Return: Always 0 (success)
*/

int main(void)
{
	unsigned long divisor = 2, n, max;
	unsigned long i;

	n = 612852475143;
	while (n % divisor == 0)
	{
		max = divisor;
		n /= divisor;
	}
	for (i = 3; i <= sqrt(n); i += divisor)
	{
		while (n % i == 0)
		{
			max = i;
			n /= i;
		}
	}
	if (n > divisor)
	{
		max = n;
	}
	printf("%lu\n", max);
	return (0);
}
