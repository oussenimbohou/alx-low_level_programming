#include <stdio.h>
/**
 * main - Starting point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int num;
	char ch;

	num = 0;
	ch = 'a';
	while (num < 16)
	{
		if (num < 10)
			putchar(num + '0');
		else
			putchar (ch++);
		num++;
	}
	putchar('\n');
	return (0);
}
