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
	int t;
	int o;

	for (tens = '0'; tens <= '9'; tens++)
	{
		for (ones = '0'; ones <= '9'; ones++)
		{
			for (t = tens; t <= '9'; t++)
			{
				for (o = ones; o <= '9'; o++)
				{
					if (!(tens == ones && ones == t && t == o))
					{
						putchar(tens);
						putchar(ones);
						putchar(' ');
						putchar(t);
						putchar(o);
						if (!((tens == '9' && ones == '8') &&
							(t == '9' && o == '9')))
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
				o = '0';
			}
		}
	}
	putchar('\n');
	return (0);
}
