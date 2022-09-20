#include "main.h"

/**
  *_atoi - Function to convert a string to an integer.
  *@s:Argument string.
  *Return: It will return an integer value of the corresponding string.
  */
int _atoi(char *s)
{
	int res = 0;
	short sign = 1;
	int i, flag = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign *= -1;
		while (s[i] >= '0' && s[i] <= '9')
		{
			res = res * 10;
flag = s[i++] - '0';
res += flag;

			flag = 1;
		}
		if (flag == 1)
			break;
	}
	return (sign * res);
}
