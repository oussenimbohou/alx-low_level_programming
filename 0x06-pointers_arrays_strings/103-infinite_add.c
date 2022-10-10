#include "main.h"
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
	int len1 = 0, len2 = 0, counter = 0, max, rem = 0, ans, i;
	const int SIZE = size_r;
	char result[100];

	while (*(n1 + len1)  != '\0')
		len1++;
	while (*(n2 + len2) != '\0')
		len2++;
	max = (len1 > len2) ? len1 : len2;
	if (size_r <= max)
		return (0);
	r[max + 1] = '\0';
	while (size_r >= 0)
	{
		if (len1 > 0 && len2 <= 0)
		{
			ans = (n1[len1 - 1] - '0') + rem;
			if (ans > 9)
			{
				r[size_r - 1] = (ans % 10) + '0';
				rem = ans / 10;
			}
		}
		else if (len2 >= 0 && len1 < 0)
		{
			ans = (n2[len2 - 1] - '0') + rem;
			if (ans > 9)
			{
				r[size_r - 1] = (ans % 10) + '0';
				rem = ans / 10;
			}
		}
		else if (len1 > 0 && len2 > 0)
		{
			ans = (n1[len1 - 1] - '0') + (n2[len2 - 1] - '0') + rem;
			if (ans > 9)
			{
				r[size_r - 1] = (ans % 10) + '0';
				rem = ans / 10;
			}
			else
			{
				r[size_r - 1] = ans + '0';
				rem = 0;
			}

		}
		if (len1 < 0 && len2 < 0 && rem != 0)
		{
			r[size_r - 1] = rem + '0';
			if (counter == SIZE)
				return (0);
		}
		if (counter == max + 1)
			break;
		len1--, len2--, size_r--, counter++;
	}
	for (i = 0; i < max + 1; i++)
	{
		result[i] = r[i];
		putchar(r[i]);
	}
	return (result);
}
