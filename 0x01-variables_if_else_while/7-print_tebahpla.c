#include <stdio.h>
/**
 * main - Starting point
 *
 * Return: Always 0 (Success
 *
 */
int main(void)
{
	char ch;

	ch = 'z';
	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
