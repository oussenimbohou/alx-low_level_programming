#include <stdio.h>
/**
 * main - Starting point
 *
 * Return: Alaways 0 (Success)
 *
 */
int main(void)
{
	int num;

	num = 0;
	while (num <= 9)
	{

		putchar(num + '0');
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar('\n');
		}
		num++;
	}
	return (0);
}
