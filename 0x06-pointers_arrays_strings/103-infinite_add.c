#include "main.h"

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
	int len1 = 0, len2 = 0;
	while (*(n1 + len1)  != '\0')
	{
		len1++;
	}
	while (*(n2 + len2) != '\0')
	{
		len2++;
	}
	if (size_r < len1 + len2)
		return ('0');
	while (*n2 != '\0')
	{
		*(n1)
	}
}
