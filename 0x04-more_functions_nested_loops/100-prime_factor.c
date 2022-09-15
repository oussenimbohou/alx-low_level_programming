#include <stdio.h>
#include <math.h>

/**
*prime_factor - a function to print the highest prime factor of a given number
*@n: Integer parameter
*
*Return: the highest prime factor
*/
void prime_factor(void)
{
	int i, n, max;

	n = 15;
	while (n % 2 == 0)
	{
		max = 2;
		n /= 2;
	}
	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			max = i;
			n /= i;
		}
	}
	if (n > 2)
	{
		max = n;
	}
	printf("%d\n",max);
}
