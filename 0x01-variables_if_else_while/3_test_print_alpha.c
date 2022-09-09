#include <stdio.h>
/**
 * main - Starting point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char ch;

	ch = 'a';
	while (1)
	{
		putchar(ch);
		if (ch == 'z')
			ch = 'A' - 1;
		else if (ch == 'Z')
			break;
		ch++;
	}
	putchar('\n');
	return (0);
}
