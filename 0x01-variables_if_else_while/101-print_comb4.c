#include <stdio.h>

/**
 *main - print all combinations of three different digits
 *Return: Always 0 (Success)
 */

int main(void)
{
		int firstf;
		int second;
		int third;

		for (third = '0'; third <= '9'; third++) /*thirds place*/
		{
			for (second = (third + 1); second <= '9'; second++) /*seconds=100s+1*/
			{
				for (firstf = (second + 1); firstf <= '9'; firstf++) /*firstfs*/
				{
					putchar(third);
					putchar(second);
					putchar(firstf);
					if (third != '7' || second != '8' || firstf != '9')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
		putchar('\n');
		return (0);
}

