#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
  *infinite_add - function to add 2 valid integers
  *@n1: Input character
  *@n2: Input character
  *@r: Input character
  *@size_r: Input integer
  *
  *Return: A charater pointer to the result.
  */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, counter = 0, max;
	int rem = 0, ans;
	const int SIZE = size_r;
	while (*(n1 + len1)  != '\0')
	{
		len1++;
	}
	while (*(n2 + len2) != '\0')
	{
		len2++;
	}
	max = (len1 > len2) ? len1 : len2;
	if (size_r <= max)
		return NULL;
	printf("len1: %d, len2: %d, size_r: %d, max: %d\n", len1, len2, size_r,max);
	while (size_r >= 0)
	{
		if (len1 >= 0 && len2 < 0)
		{
			printf("a: %d, rem: %d\n",n1[len1 - 1],rem);
			ans = (n1[len1 - 1] - '0') + rem;
			if (ans > 9)
			{
				r[size_r - 1] = (ans % 10) + '0';
				rem = ans / 10;
				printf("1str: %c\n",r[size_r - 1]);
			}
		}
		else if (len2 >= 0 && len1 < 0)
		{
			ans = (n2[len2 - 1] - '0') + rem;
			if (ans > 9)
			{
				r[size_r - 1] = (ans % 10) + '0';
				rem = ans / 10;
				printf("2ndr: %c\n",r[size_r - 1]);
			}
		}
		else if(len1 > 0 && len2 > 0)
		{
			/*printf("a: %d, b: %d, s: %d\n", (n1[len1 - 1] - '0'),(n2[len2 - 1] - '0'),(n1[len1 - 1] - '0')+(n2[len2 - 1] - '0') );*/
			ans = (n1[len1 - 1] - '0')+(n2[len2 - 1] - '0') + rem;
			if (ans > 9)
			{
				r[size_r - 1] = (ans % 10) + '0';
				rem = ans / 10;
				printf("1str: %c\n",r[size_r - 1]);
			}
			else
			{
				r[size_r - 1] = ans + '0';
				rem = 0;
				printf("2ndr: %c\n",r[size_r - 1]);
			}

		}
		if (len1 < 0 && len2 < 0 && rem != 0)
		{
			r[size_r - 1] = rem + '0';
			printf("size: %d, counter: %d\n", SIZE,counter);
			if (SIZE == counter)
				return NULL;
			printf("3rdr: %c\n",r[size_r - 1]);
		}
		if(counter == max + 1)
		{
			printf("counter: %d, max: %d\n",counter,max);
			break;
		}
		len1--;
		len2--;
		size_r--;
		counter++;
	}
	for (counter = 0; counter < SIZE; counter++)
	{
		putchar(r[counter]);
	}
	putchar('\n');
	return (r);
}
