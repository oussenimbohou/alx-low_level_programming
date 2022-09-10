#include<stdio.h>
/**
  *main - Printing the combination of 4 digits
  *
  *Return: Always 0 (success)
  *
  */
int main(void)
{
	int tens;
	int ones;

	for (tens = 0; tens <= 98; tens++)
	{
		for (ones = tens + 1; ones <= 99; ones++)
		{
			putchar((tens / 10) + '0');
			putchar((tens % 10) + '0');
			putchar(' ');
			putchar((ones / 10) + '0');
			putchar((ones % 10) + '0');
			if (!(tens == 98 && ones == 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
